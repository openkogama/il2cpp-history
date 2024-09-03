
/* IAsyncResult BeginInvoke(IInputDevice, Vector2, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::InputDeviceDoubleTapHandler::InputDeviceDoubleTapHandler_BeginInvoke
          (InputDeviceDoubleTapHandler *this,IInputDevice *inputDevice,Vector2 position,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pIStack_1 = inputDevice;
  uStack_2 = 0;
  uStack_3 = func_?(TypeInfo__UnityEngine__Vector2,&position);
  pIVar4 = (IAsyncResult *)func_?(this,&pIStack_1,callback,object);
  return pIVar4;
}

