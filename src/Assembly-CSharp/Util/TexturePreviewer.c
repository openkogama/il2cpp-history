
/* TexturePreviewer get_Instance() */

TexturePreviewer *
Assembly-CSharp.dll::Util::TexturePreviewer::TexturePreviewer_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  Util__TexturePreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<Util::TexturePreviewer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Util__TexturePreviewer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TexturePreviewer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__Util__TexturePreviewer->static_fields->_instance;
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
  if (pTVar1 != (TexturePreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_TexturePreviewer;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,name,(MethodInfo *)0x0);
  if (self == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar1 = (TexturePreviewer *)(*pcVar2)();
    return pTVar1;
  }
  pTVar1 = (TexturePreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                     (self,
                      Util__TexturePreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<Util::TexturePreviewer>__
                     );
  TypeInfo__Util__TexturePreviewer->static_fields->_instance = pTVar1;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__Util__TexturePreviewer->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
code_?:
  return TypeInfo__Util__TexturePreviewer->static_fields->_instance;
}

