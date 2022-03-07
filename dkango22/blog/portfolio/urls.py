from django.urls import path
from .views import hello_world_view, project_index,project_detail

urlpatterns = [
   # path('', hello_world_view, name='hello_world'),
    path('', project_index, name='project_index'),
    path('<int:pk/', project_detail, name='project_detail')
    ]