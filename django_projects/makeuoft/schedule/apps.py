# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.apps import AppConfig


class ScheduleConfig(AppConfig):
    name = 'schedule'

    def ready(self):
        #import makeuoft.schedule.signals.handlers
        import signals
