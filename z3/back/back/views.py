from django.shortcuts import HttpResponse, render


def base_view(request):
     return HttpResponse('Привет, друзья')


def my_home(request):
    return HttpResponse('My home')

def html_response(request):
    return render(request, 'base.html')