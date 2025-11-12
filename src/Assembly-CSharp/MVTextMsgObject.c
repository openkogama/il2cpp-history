
/* Void Billboard(Boolean) */

void Assembly-CSharp.dll::MVTextMsgObject::MVTextMsgObject_Billboard
               (MVTextMsgObject *this,bool billboard,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).billboardScript;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 == (LookAtMainCamera *)0x0) {
    bVar2 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = (pLVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  if ((billboard == 0) || (bVar2 != false)) {
    if ((bVar2 & (billboard ^ 1)) != 0) {
      pLVar1 = (this->fields).billboardScript;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pLVar1,0.0,(MethodInfo *)0x0);
    }
  }
  else {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pLVar1 = (LookAtMainCamera *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        LookAtMainCamera_MethodInfo__UnityEngine__GameObject__AddComponent<LookAtMainCamera>__
                       );
    bVar2 = iRam_? != 0;
    (this->fields).billboardScript = pLVar1;
    if (bVar2) {
      uVar4 = (uint)((ulonglong)&(this->fields).billboardScript >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar6 == *puVar7;
        if (bVar2) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      return;
    }
  }
  return;
}

