
/* IAsyncResult BeginInvoke(Boolean, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::MVPickupOwner+OnHandleFiringDelegate::
MVPickupOwner_OnHandleFiringDelegate_BeginInvoke
          (MVPickupOwner_OnHandleFiringDelegate *this,bool isFiring,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__System__Boolean,&isFiring);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

