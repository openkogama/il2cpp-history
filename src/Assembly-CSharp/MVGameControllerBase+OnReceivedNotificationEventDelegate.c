
/* IAsyncResult BeginInvoke(NotificationType, Dictionary`2[System.Object,System.Object],
   AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::MVGameControllerBase+OnReceivedNotificationEventDelegate::
MVGameControllerBase_OnReceivedNotificationEventDelegate_BeginInvoke
          (MVGameControllerBase_OnReceivedNotificationEventDelegate *this,
          NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  aNStackX_10[0] = type;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__MV__Common__NotificationType,aNStackX_10);
  pDStack_3 = data;
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}

