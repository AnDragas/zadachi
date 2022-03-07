from django.urls import path
from .views import home_view, reverse_view

urlpatterns = [
    path('',home_view),
    path('reverse/', reverse_view)
]