
/* IAsyncResult BeginInvoke(Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::MVQualitySettings+OnQualityLevedChanged::
MVQualitySettings_OnQualityLevedChanged_BeginInvoke
          (MVQualitySettings_OnQualityLevedChanged *this,int32_t level,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Int32,&level);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

