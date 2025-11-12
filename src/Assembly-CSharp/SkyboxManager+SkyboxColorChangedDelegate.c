
/* IAsyncResult BeginInvoke(Color, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::SkyboxManager+SkyboxColorChangedDelegate::
SkyboxManager_SkyboxColorChangedDelegate_BeginInvoke
          (SkyboxManager_SkyboxColorChangedDelegate *this,Color *newColor,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__UnityEngine__Color,newColor);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

