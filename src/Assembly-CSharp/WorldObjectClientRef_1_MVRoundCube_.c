
/* MVRoundCube get_WorldObjectClient() */

MVRoundCube *
Assembly-CSharp.dll::WorldObjectClientRef`1[MVRoundCube]::
WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
          (WorldObjectClientRef_1_MVRoundCube_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = (MVRoundCube *)
             (**(code **)**(undefined4 **)(method->name + 0x60))
                       (pMVar1,(this->fields).woId,
                        (undefined4 *)**(undefined4 **)(method->name + 0x60));
    return pMVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVRoundCube *)(*pcVar3)();
  return pMVar2;
}

