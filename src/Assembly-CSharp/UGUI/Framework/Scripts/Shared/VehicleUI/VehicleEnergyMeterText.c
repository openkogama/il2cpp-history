
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_Awake(VehicleEnergyMeterText *this,MethodInfo *method)

{
  pTVar1 = (this->fields).energyText;
  if (pTVar1 != (Text *)0x0) {
    puVar2 = (undefined8 *)
             (*(pTVar1->klass->vtable).get_color.methodPtr)
                       (auStack_3,pTVar1,(pTVar1->klass->vtable).get_color.method);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    (this->fields).originalColor.r = (float)(int)uVar4;
    (this->fields).originalColor.g = (float)(int)((ulonglong)uVar4 >> 0x20);
    (this->fields).originalColor.b = (float)(int)uVar5;
    (this->fields).originalColor.a = (float)(int)((ulonglong)uVar5 >> 0x20);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_Initialize
               (VehicleEnergyMeterText *this,bool insideVehicle,MVRigidBody *rigidBody,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText__OnRefillCallback__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).vehicleEnergyContainer = (VehicleEnergyContainer *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyContainer >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar6 = (this->fields).energyText;
  if ((pTVar6 == (Text *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pTVar6,(MethodInfo *)0x0), obj == (Transform *)0x0))
  goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(pvVar7);
  (this->fields).originalTextPos.x = 0.0;
  (this->fields).originalTextPos.y = 0.0;
  (this->fields).originalTextPos.z = 0.0;
  (this->fields).currentEnergyStatus = 100;
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
  if (rigidBody != (MVRigidBody *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((rigidBody->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pVVar10 = (VehicleEnergyContainer *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)rigidBody,
                           WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                          );
      bVar1 = iRam_? != 0;
      (this->fields).vehicleEnergyContainer = pVVar10;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).vehicleEnergyContainer >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
  }
  pVVar10 = (this->fields).vehicleEnergyContainer;
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
  if (pVVar10 == (VehicleEnergyContainer *)0x0) {
code_?:
    (this->fields).isVisible = 0;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pVVar10->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pVVar10 = (this->fields).vehicleEnergyContainer;
    if (pVVar10 == (VehicleEnergyContainer *)0x0) goto code_?;
    pVVar11 = (this->fields).vehicleEnergyContainer;
    (this->fields).isVisible = (pVVar10->fields)._UsingEnergy_k__BackingField;
    if (pVVar11 == (VehicleEnergyContainer *)0x0) goto code_?;
    pAVar12 = (pVVar11->fields).OnRefill;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText__OnRefillCallback__
               ,(MethodInfo *)0x0);
    pAVar12 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar12 == (Action *)0x0) {
      (pVVar11->fields).OnRefill = (Action *)0x0;
    }
    else {
      pAVar13 = (Action *)0x0;
      if (pAVar12->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar12;
      }
      if (pAVar13 == (Action *)0x0) {
        FUN_?(pAVar12);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pVVar11->fields).OnRefill = pAVar13;
      pAVar13 = (Action *)0x0;
      if (pAVar12->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar12;
      }
      if (pAVar13 == (Action *)0x0) {
        FUN_?(pAVar12);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pVVar11->fields).OnRefill >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  this_00 = (this->fields)._.rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,(this->fields).isVisible,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).isVisible == 0) {
      return;
    }
    pVVar10 = (this->fields).vehicleEnergyContainer;
    if (pVVar10 != (VehicleEnergyContainer *)0x0) {
      iVar14 = (int)(((pVVar10->fields).energyStorage / (pVVar10->fields).originalEnergyStorage) *
                   _UNK_?);
      iVar15 = (this->fields).currentEnergyStatus;
      if (iVar14 < iVar15) {
        (this->fields).currentEnergyStatus = iVar14;
      }
      else if (iVar15 < iVar14) {
        piVar16 = &(this->fields).currentEnergyStatus;
        *piVar16 = *piVar16 + 1;
      }
      pTVar6 = (this->fields).energyText;
      pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(this->fields).currentEnergyStatus,(MethodInfo *)0x0);
      pSVar18 = ::StringLiteral__;
      if (pSVar17 != (String *)0x0) {
        pSVar18 = pSVar17;
      }
      if (pTVar6 != (Text *)0x0) {
        (*(pTVar6->klass->vtable).set_text.methodPtr)
                  (pTVar6,pSVar18,(pTVar6->klass->vtable).set_text.method);
        VehicleEnergyMeterText_VisualStuff(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateEnergy() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_UpdateEnergy(VehicleEnergyMeterText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isVisible == 0) {
    return;
  }
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if (pVVar1 != (VehicleEnergyContainer *)0x0) {
    iVar2 = (int)(((pVVar1->fields).energyStorage / (pVVar1->fields).originalEnergyStorage) *
                 _UNK_?);
    iVar3 = (this->fields).currentEnergyStatus;
    if (iVar2 < iVar3) {
      (this->fields).currentEnergyStatus = iVar2;
    }
    else if (iVar3 < iVar2) {
      piVar4 = &(this->fields).currentEnergyStatus;
      *piVar4 = *piVar4 + 1;
    }
    pTVar5 = (this->fields).energyText;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).currentEnergyStatus,(MethodInfo *)0x0);
    pSVar7 = ::StringLiteral__;
    if (pSVar6 != (String *)0x0) {
      pSVar7 = pSVar6;
    }
    if (pTVar5 != (Text *)0x0) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,pSVar7,(pTVar5->klass->vtable).set_text.method);
      VehicleEnergyMeterText_VisualStuff(this,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void VisualStuff() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText_VisualStuff(VehicleEnergyMeterText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).energyText;
  if (0x13 < (this->fields).currentEnergyStatus) {
    if (pTVar1 != (Text *)0x0) {
      fStack_2 = (this->fields).originalColor.r;
      fStack_3 = (this->fields).originalColor.g;
      fStack_4 = (this->fields).originalColor.b;
      fStack_5 = (this->fields).originalColor.a;
      (*(pTVar1->klass->vtable).set_color.methodPtr)
                (pTVar1,&fStack_2,(pTVar1->klass->vtable).set_color.method);
      pTVar1 = (this->fields).energyText;
      if ((pTVar1 != (Text *)0x0) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        uStack_7._0_4_ = (this->fields).originalTextPos.x;
        uStack_7._4_4_ = (this->fields).originalTextPos.y;
        fStack_8 = (this->fields).originalTextPos.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&uStack_7);
        return;
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText);
  }
  pVVar12 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
           static_fields;
  if (pTVar1 != (Text *)0x0) {
    uStack_7._0_4_ = (pVVar12->WarningColor).r;
    uStack_7._4_4_ = (pVVar12->WarningColor).g;
    fStack_8 = (pVVar12->WarningColor).b;
    fStack_13 = (pVVar12->WarningColor).a;
    (*(pTVar1->klass->vtable).set_color.methodPtr)
              (pTVar1,&uStack_7,(pTVar1->klass->vtable).set_color.method);
    if (3 < (this->fields).lastBlink) {
      (this->fields).lastBlink = -4;
    }
    pTVar1 = (this->fields).energyText;
    if ((pTVar1 != (Text *)0x0) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      fStack_8 = 0.0;
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      if ((this->fields).lastBlink < 0) {
        fVar14 = uStack_7._4_4_ + _UNK_?;
      }
      else {
        fVar14 = uStack_7._4_4_ - _UNK_?;
      }
      pTVar1 = (this->fields).energyText;
      if (pTVar1 != (Text *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        fVar15 = (this->fields).originalTextPos.z;
        if (pTVar6 != (Transform *)0x0) {
          uStack_7 = CONCAT44(fVar14,(this->fields).originalTextPos.x);
          fStack_8 = fVar15;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9,&uStack_7);
          piVar16 = &(this->fields).lastBlink;
          *piVar16 = *piVar16 + 1;
          return;
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* VehicleEnergyMeterText() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  pVVar2 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeterText->
           static_fields;
  uVar3 = _UNK_?;
  (pVVar2->WarningColor).r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (pVVar2->WarningColor).g = (float)uVar3;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar3 = _UNK_?;
  (pVVar2->WarningColor).b = (float)_UNK_?;
  _UNK_? = uVar4;
  (pVVar2->WarningColor).a = (float)uVar3;
  return;
}


/* VehicleEnergyMeterText() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeterText::
     VehicleEnergyMeterText__ctor(VehicleEnergyMeterText *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).currentEnergyStatus = 100;
  (this->fields).lastBlink = -4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

