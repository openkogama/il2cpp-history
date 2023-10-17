
/* IAsyncResult BeginInvoke(Color, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::SkyboxManager+SkyboxColorChangedDelegate::
SkyboxManager_SkyboxColorChangedDelegate_BeginInvoke
          (SkyboxManager_SkyboxColorChangedDelegate *this,Color newColor,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__UnityEngine__Color,&newColor);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

