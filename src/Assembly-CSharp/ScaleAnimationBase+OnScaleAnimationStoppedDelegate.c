
/* IAsyncResult BeginInvoke(Single, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::ScaleAnimationBase+OnScaleAnimationStoppedDelegate::
ScaleAnimationBase_OnScaleAnimationStoppedDelegate_BeginInvoke
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *this,float extraTime,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Single,&extraTime);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

