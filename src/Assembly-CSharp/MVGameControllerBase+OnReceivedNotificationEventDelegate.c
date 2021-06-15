
/* IAsyncResult BeginInvoke(NotificationType, Dictionary`2[System.Object,System.Object],
   AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::MVGameControllerBase+OnReceivedNotificationEventDelegate::
MVGameControllerBase_OnReceivedNotificationEventDelegate_BeginInvoke
          (MVGameControllerBase_OnReceivedNotificationEventDelegate *this,
          NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uVar3 = func_?(TypeInfo__MV__Common__NotificationType,&type);
  uStack_2 = CONCAT44(data,uVar3);
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar4;
}

