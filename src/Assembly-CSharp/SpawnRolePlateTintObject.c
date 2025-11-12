
/* Void Awake() */

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_Awake
               (SpawnRolePlateTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  m = (Material__Array *)FUN_?(TypeInfo__UnityEngine__Material,1);
  pMVar2 = (this->fields).materialToTint;
  if (m != (Material__Array *)0x0) {
    if ((pMVar2 != (Material *)0x0) &&
       (lVar3 = FUN_?(pMVar2,(m->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(m,0);
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterialArray_1
                ((Renderer *)pMVar1,m,(MethodInfo *)0x0);
      pMVar1 = (this->fields).meshRenderer;
      if (pMVar1 != (MeshRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pMVar1->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        lVar3 = (*pcRam_?)(pvVar6);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) == 0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = iRam_? != 0;
          (this->fields).materialToTint = *(Material **)(lVar3 + 0x20);
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).materialToTint >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_OnDestroy
               (SpawnRolePlateTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialToTint;
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pMVar1 != (Material *)0x0) {
    pvVar2 = (pMVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_TeamTint
               (SpawnRolePlateTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Blue) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
  }
  else if (team == MVTeam__Enum_Red) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamRed;
  }
  else if (team == MVTeam__Enum_Green) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
  }
  else if (team == MVTeam__Enum_Yellow) {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
  }
  else {
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    colorStyle = ColorStyle__Enum_OffWhite;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  CStack_2.r = pCVar1->r;
  CStack_2.g = pCVar1->g;
  CStack_2.b = pCVar1->b;
  CStack_2.a = pCVar1->a;
  (*(this->klass->vtable).Tint.methodPtr)(this,&CStack_2,(this->klass->vtable).Tint.method);
  return;
}

