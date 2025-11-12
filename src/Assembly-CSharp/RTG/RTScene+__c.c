
/* Boolean <GetHoveredUIElements>b__15_0(RaycastResult) */

bool Assembly-CSharp.dll::RTG::RTScene+<>c::RTScene_c__GetHoveredUIElements_b__15_0
               (RTScene_c *this,RaycastResult *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item->m_GameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (item->m_GameObject,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                     );
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
  if (pOVar3 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return pOVar3[1].klass == (Object__Class *)0x0;
  }
  return 1;
}


/* RTScene+<>c() */

void Assembly-CSharp.dll::RTG::RTScene+<>c::RTScene_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTScene____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (RTScene_c *)FUN_?(TypeInfo__RTG__RTScene____c);
  TypeInfo__RTG__RTScene____c->static_fields->__9 = pRVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__RTG__RTScene____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

