
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_Awake(VehicleEnergyMeter *this,MethodInfo *method)

{
  pIVar1 = (this->fields).progressBarImage;
  if (pIVar1 != (Image *)0x0) {
    puVar2 = (undefined8 *)
             (*(pIVar1->klass->vtable).get_color.methodPtr)
                       (auStack_3,pIVar1,(pIVar1->klass->vtable).get_color.method);
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


/* IEnumerator BlinkingBar() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
VehicleEnergyMeter_BlinkingBar(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_Initialize
               (VehicleEnergyMeter *this,bool insideVehicle,MVRigidBody *rigidBody,
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
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter__OnRefillCallback__
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
      pVVar6 = (VehicleEnergyContainer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)rigidBody,
                          WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                         );
      bVar1 = iRam_? != 0;
      (this->fields).vehicleEnergyContainer = pVVar6;
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
  pVVar6 = (this->fields).vehicleEnergyContainer;
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
  if (pVVar6 == (VehicleEnergyContainer *)0x0) {
code_?:
    (this->fields).updateEnergy = 0;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pVVar6->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pVVar6 = (this->fields).vehicleEnergyContainer;
    if (pVVar6 == (VehicleEnergyContainer *)0x0) goto code_?;
    pVVar7 = (this->fields).vehicleEnergyContainer;
    (this->fields).updateEnergy = (pVVar6->fields)._UsingEnergy_k__BackingField;
    if (pVVar7 == (VehicleEnergyContainer *)0x0) goto code_?;
    pAVar8 = (pVVar7->fields).OnRefill;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter__OnRefillCallback__
               ,(MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      (pVVar7->fields).OnRefill = (Action *)0x0;
    }
    else {
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pVVar7->fields).OnRefill = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pVVar7->fields).OnRefill >> 0xc);
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
  if ((insideVehicle == 0) && ((this->fields).currentColor.hasValue != 0)) {
    VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
  }
  if ((this->fields).updateEnergy == 0) {
    return;
  }
  pVVar6 = (this->fields).vehicleEnergyContainer;
  if ((pVVar6 != (VehicleEnergyContainer *)0x0) &&
     (pPVar11 = (this->fields).progressBar, pPVar11 != (ProgressBar *)0x0)) {
    value = (pVVar6->fields).energyStorage / (pVVar6->fields).originalEnergyStorage;
    if (value < 0.0) {
      value = 0.0;
    }
    else if (_UNK_? < value) {
      value = _UNK_?;
    }
    this_00 = (pPVar11->fields).progressBar;
    (pPVar11->fields).progress = value;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,value,(MethodInfo *)0x0);
      VehicleEnergyMeter_VisualStuff(this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnRefillCallback() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_OnRefillCallback(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__GetValueOrDefault__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).updateEnergy == 0) {
    return;
  }
  uVar1 = *(undefined4 *)&(this->fields).currentColor;
  fVar2 = (this->fields).currentColor.value.r;
  fVar3 = (this->fields).currentColor.value.g;
  fVar4 = (this->fields).currentColor.value.b;
  fVar5 = (this->fields).currentColor.value.a;
  if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = _UNK_?;
  pVVar7 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  if (((char)uVar1 == '\0') ||
     (fVar2 = fVar2 - (pVVar7->WarningColor).r, fVar3 = fVar3 - (pVVar7->WarningColor).g,
     fVar4 = fVar4 - (pVVar7->WarningColor).b, fVar5 = fVar5 - (pVVar7->WarningColor).a,
     _UNK_? <= fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5)) {
    uVar1 = *(undefined4 *)&(this->fields).currentColor;
    fVar2 = (this->fields).currentColor.value.r;
    fVar3 = (this->fields).currentColor.value.g;
    fVar4 = (this->fields).currentColor.value.b;
    fVar5 = (this->fields).currentColor.value.a;
    if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    pVVar7 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
             static_fields;
    if (((char)uVar1 != '\0') &&
       (fVar2 = fVar2 - (pVVar7->RefillColor).r, fVar3 = fVar3 - (pVVar7->RefillColor).g,
       fVar4 = fVar4 - (pVVar7->RefillColor).b, fVar5 = fVar5 - (pVVar7->RefillColor).a,
       fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5 < fVar6)) {
      pIVar8 = VehicleEnergyMeter_StopBlinking(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                ((MonoBehaviour *)this,pIVar8,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pVVar7 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  fVar5 = (pVVar7->RefillColor).r;
  fVar3 = (pVVar7->RefillColor).g;
  fVar4 = (pVVar7->RefillColor).b;
  fVar2 = (pVVar7->RefillColor).a;
  uStack_9._0_1_ = (undefined1)1;
  uStack_9._1_3_ = (undefined3)(1 >> 8);
  (this->fields).currentColor.hasValue = (undefined1)uStack_9;
  *(undefined3 *)&(this->fields).currentColor.field_0x1 = uStack_9._1_3_;
  (this->fields).currentColor.value.r = fVar5;
  (this->fields).currentColor.value.g = fVar3;
  (this->fields).currentColor.value.b = fVar4;
  (this->fields).currentColor.value.a = fVar2;
  pIVar8 = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,pIVar8,(MethodInfo *)0x0);
code_?:
  pIVar8 = VehicleEnergyMeter_StopBlinking(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,pIVar8,(MethodInfo *)0x0);
  return;
}


/* IEnumerator StopBlinking() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
VehicleEnergyMeter_StopBlinking(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___StopBlinking_d__14
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___StopBlinking_d__14
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void StopBlinkingBar() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_StopBlinkingBar(VehicleEnergyMeter *this,MethodInfo *method)

{
  routine = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  pIVar1 = (this->fields).progressBarImage;
  if (pIVar1 != (Image *)0x0) {
    fStack_2 = (this->fields).originalColor.r;
    fStack_3 = (this->fields).originalColor.g;
    fStack_4 = (this->fields).originalColor.b;
    fStack_5 = (this->fields).originalColor.a;
    (*(pIVar1->klass->vtable).set_color.methodPtr)
              (pIVar1,&fStack_2,(pIVar1->klass->vtable).set_color.method);
    (this->fields).currentColor.hasValue = 0;
    *(undefined3 *)&(this->fields).currentColor.field_0x1 = 0;
    (this->fields).currentColor.value.r = 0.0;
    (this->fields).currentColor.value.g = 0.0;
    (this->fields).currentColor.value.b = 0.0;
    (this->fields).currentColor.value.a = 0.0;
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateEnergy() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_UpdateEnergy(VehicleEnergyMeter *this,MethodInfo *method)

{
  if ((this->fields).updateEnergy == 0) {
    return;
  }
  pVVar1 = (this->fields).vehicleEnergyContainer;
  if ((pVVar1 != (VehicleEnergyContainer *)0x0) &&
     (pPVar2 = (this->fields).progressBar, pPVar2 != (ProgressBar *)0x0)) {
    fVar3 = (pVVar1->fields).energyStorage / (pVVar1->fields).originalEnergyStorage;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    this_00 = (pPVar2->fields).progressBar;
    (pPVar2->fields).progress = fVar3;
    if (this_00 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_00,fVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__GetValueOrDefault__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = (this->fields).progressBar;
      if (pPVar2 == (ProgressBar *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((_UNK_? < (pPVar2->fields).progress) || ((pPVar2->fields).progress <= 0.0)) {
        if ((this->fields).currentColor.hasValue != 0) {
          fVar3 = (this->fields).currentColor.value.a;
          uVar5 = *(undefined4 *)&(this->fields).currentColor;
          fVar6 = (this->fields).currentColor.value.r;
          fVar7 = (this->fields).currentColor.value.g;
          fVar8 = (this->fields).currentColor.value.b;
          if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                       _1).field_0x1c == 0) {
            FUN_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter)
            ;
          }
          pVVar9 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                   static_fields;
          if (((char)uVar5 != '\0') &&
             (fVar6 = fVar6 - (pVVar9->WarningColor).r, fVar7 = fVar7 - (pVVar9->WarningColor).g
             , fVar8 = fVar8 - (pVVar9->WarningColor).b,
             fVar3 = fVar3 - (pVVar9->WarningColor).a,
             fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8 + fVar3 * fVar3 < _UNK_?)
             ) {
            VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
          }
        }
      }
      else if ((this->fields).currentColor.hasValue == 0) {
        if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1)
                     .field_0x1c == 0) {
          FUN_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
        }
        pVVar9 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                 static_fields;
        fVar3 = (pVVar9->WarningColor).r;
        fVar7 = (pVVar9->WarningColor).g;
        fVar8 = (pVVar9->WarningColor).b;
        fVar6 = (pVVar9->WarningColor).a;
        uStack_10._0_1_ = (undefined1)1;
        uStack_10._1_3_ = (undefined3)(1 >> 8);
        (this->fields).currentColor.hasValue = (undefined1)uStack_10;
        *(undefined3 *)&(this->fields).currentColor.field_0x1 = uStack_10._1_3_;
        (this->fields).currentColor.value.r = fVar3;
        (this->fields).currentColor.value.g = fVar7;
        (this->fields).currentColor.value.b = fVar8;
        (this->fields).currentColor.value.a = fVar6;
        pIVar11 = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
        if (pIVar11 == (IEnumerator *)0x0) {
          uVar12 = func_?(&TypeInfo__System__NullReferenceException);
          this_01 = (NullReferenceException *)func_?(uVar12);
          pSVar13 = (String *)func_?(&StringLiteral_routine_is_null);
          mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                    (this_01,pSVar13,(MethodInfo *)0x0);
          uVar12 = func_?(&
                                      MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                     );
          FUN_?(this_01,uVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          uVar12 = func_?(&TypeInfo__System__ArgumentException);
          this_02 = (InvalidEnumArgumentException *)func_?(uVar12);
          pSVar13 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_02,pSVar13,(MethodInfo *)0x0);
          uVar12 = func_?(&
                                      MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                     );
          FUN_?(this_02,uVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this == (VehicleEnergyMeter *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar15 = (this->fields)._._._._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar15,pIVar11);
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void VisualStuff() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_VisualStuff(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__GetValueOrDefault__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).progressBar;
  if (pPVar1 == (ProgressBar *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((_UNK_? < (pPVar1->fields).progress) || ((pPVar1->fields).progress <= 0.0)) {
    if ((this->fields).currentColor.hasValue != 0) {
      fVar3 = (this->fields).currentColor.value.a;
      uVar4 = *(undefined4 *)&(this->fields).currentColor;
      fVar5 = (this->fields).currentColor.value.r;
      fVar6 = (this->fields).currentColor.value.g;
      fVar7 = (this->fields).currentColor.value.b;
      if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
      }
      pVVar8 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
               static_fields;
      if (((char)uVar4 != '\0') &&
         (fVar5 = fVar5 - (pVVar8->WarningColor).r, fVar6 = fVar6 - (pVVar8->WarningColor).g,
         fVar7 = fVar7 - (pVVar8->WarningColor).b, fVar3 = fVar3 - (pVVar8->WarningColor).a,
         fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 + fVar3 * fVar3 < _UNK_?)) {
        VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
      }
    }
  }
  else if ((this->fields).currentColor.hasValue == 0) {
    if (*(int *)&(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    }
    pVVar8 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
             static_fields;
    fVar3 = (pVVar8->WarningColor).r;
    fVar6 = (pVVar8->WarningColor).g;
    fVar7 = (pVVar8->WarningColor).b;
    fVar5 = (pVVar8->WarningColor).a;
    uStack_9._0_1_ = (undefined1)1;
    uStack_9._1_3_ = (undefined3)(1 >> 8);
    (this->fields).currentColor.hasValue = (undefined1)uStack_9;
    *(undefined3 *)&(this->fields).currentColor.field_0x1 = uStack_9._1_3_;
    (this->fields).currentColor.value.r = fVar3;
    (this->fields).currentColor.value.g = fVar6;
    (this->fields).currentColor.value.b = fVar7;
    (this->fields).currentColor.value.a = fVar5;
    pIVar10 = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
    if (pIVar10 == (IEnumerator *)0x0) {
      uVar11 = func_?(&TypeInfo__System__NullReferenceException);
      this_00 = (NullReferenceException *)func_?(uVar11);
      pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_00,pSVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_00,uVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      uVar11 = func_?(&TypeInfo__System__ArgumentException);
      this_01 = (InvalidEnumArgumentException *)func_?(uVar11);
      pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_01,pSVar12,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_01,uVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (VehicleEnergyMeter *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar14 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar14,pIVar10);
    return;
  }
  return;
}


/* VehicleEnergyMeter() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  uVar5 = _UNK_?;
  (pVVar4->WarningColor).r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (pVVar4->WarningColor).g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pVVar4->WarningColor).b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar3 = _UNK_?;
  (pVVar4->WarningColor).a = (float)uVar5;
  pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pVVar4->RefillColor).r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (pVVar4->RefillColor).g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pVVar4->RefillColor).b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pVVar4->RefillColor).a = (float)uVar5;
  return;
}

