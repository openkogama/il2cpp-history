
/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_OnDisable(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_ON);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_WATER_VERTEX_DISPLACEMENT_ON;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = puStackX_8;
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&puStack_2);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_OnEnable(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_ON);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_ON,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = &puStackX_8;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      puStackX_8 = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        puStackX_8 = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = puStackX_8;
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(&puStack_2);
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_Start(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__WaterBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaterBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waterBase;
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
  if (pWVar1 != (WaterBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pIVar2 = TypeRef__WaterBase;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar2 == (Il2CppType *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar2,1);
    type = (Type *)FUN_?(lVar3 + 0x20);
  }
  if (this_00 != (GameObject *)0x0) {
    pWVar1 = (WaterBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                       (this_00,type,(MethodInfo *)0x0);
    if (pWVar1 == (WaterBase *)0x0) {
      (this->fields).waterBase = (WaterBase *)0x0;
    }
    else {
      bVar4 = (TypeInfo__WaterBase->_1).naturalAligment;
      if (((((Component__Class *)pWVar1->klass)->_1).naturalAligment < bVar4) ||
         ((((Component__Class *)pWVar1->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__WaterBase)) {
        FUN_?(pWVar1);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).waterBase = pWVar1;
      bVar4 = (TypeInfo__WaterBase->_1).naturalAligment;
      if (((((Component__Class *)pWVar1->klass)->_1).naturalAligment < bVar4) ||
         ((((Component__Class *)pWVar1->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__WaterBase)) {
        FUN_?(pWVar1);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

