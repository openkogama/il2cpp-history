
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_Awake(VehicleEnergyMeter *this,MethodInfo *method)

{
  pIVar1 = (this->fields).progressBarImage;
  if (pIVar1 != (Image *)0x0) {
    pfVar2 = (float *)(*(code *)(pIVar1->klass->vtable).get_color.method)
                                (auStack_3,pIVar1,(pIVar1->klass->vtable).set_color.methodPtr);
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    (this->fields).originalColor.r = *pfVar2;
    (this->fields).originalColor.g = fVar4;
    (this->fields).originalColor.b = fVar5;
    (this->fields).originalColor.a = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator BlinkingBar() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
VehicleEnergyMeter_BlinkingBar(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Initialize(Boolean, MVRigidBody) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_Initialize
               (VehicleEnergyMeter *this,bool insideVehicle,MVRigidBody *rigidBody,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                   );
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter__OnRefillCallback__
                   );
    cRam_? = '\x01';
  }
  ppVVar1 = &(this->fields).vehicleEnergyContainer;
  *ppVVar1 = (VehicleEnergyContainer *)0x0;
  func_?(ppVVar1,0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)rigidBody,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pVVar3 = *ppVVar1;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pVVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).updateEnergy = 0;
code_?:
      if ((insideVehicle == 0) && ((this->fields).currentColor.hasValue != 0)) {
        VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
      }
      if ((this->fields).updateEnergy == 0) {
        return;
      }
      pVVar3 = (this->fields).vehicleEnergyContainer;
      this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
      if ((pVVar3 != (VehicleEnergyContainer *)0x0) &&
         (fVar4 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
                   VehicleEnergyContainer_get_EnergyStatus(pVVar3,(MethodInfo *)0x0),
         this_00 != (ProgressBarAndroid *)0x0)) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,fVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = (this->fields).progressBar;
        if (pPVar5 != (ProgressBar *)0x0) {
          if (((pPVar5->fields).progress <= _UNK_?) &&
             (_UNK_? < (pPVar5->fields).progress)) {
            if ((this->fields).currentColor.hasValue != 0) {
              return;
            }
            if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(
                             TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter
                             );
            }
            pVVar6 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                     static_fields;
            value.m_XMin = (pVVar6->WarningColor).r;
            value.m_YMin = (pVVar6->WarningColor).g;
            value.m_Width = (pVVar6->WarningColor).b;
            value.m_Height = (pVVar6->WarningColor).a;
            uVar7._0_1_ = 0;
            uVar7._1_3_ = 0;
            fVar4 = 0.0;
            mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
                      ((Nullable_1_UnityEngine_Rect_ *)&stack0xffffffe8,value,
                       MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_
                      );
            (this->fields).currentColor.hasValue = (bool)uVar7;
            *(int3 *)&(this->fields).currentColor.field_0x1 = SUB43(uVar7,1);
            (this->fields).currentColor.value.r = fVar4;
            (this->fields).currentColor.value.g = 0.0;
            (this->fields).currentColor.value.b = 0.0;
            (this->fields).currentColor.value.a = 0.0;
            routine = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
            return;
          }
          if ((this->fields).currentColor.hasValue == 0) {
            return;
          }
          fVar4 = (this->fields).currentColor.value.a;
          bVar2 = (bool)*(undefined4 *)&(this->fields).currentColor;
          fVar8 = (this->fields).currentColor.value.r;
          fVar9 = (this->fields).currentColor.value.g;
          fVar10 = (this->fields).currentColor.value.b;
          if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(
                           TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter
                           );
          }
          pVVar6 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                   static_fields;
          if (bVar2 == 0) {
            return;
          }
          fVar8 = fVar8 - (pVVar6->WarningColor).r;
          fVar9 = fVar9 - (pVVar6->WarningColor).g;
          fVar10 = fVar10 - (pVVar6->WarningColor).b;
          fVar4 = fVar4 - (pVVar6->WarningColor).a;
          if (_UNK_? <= fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10 + fVar4 * fVar4)
          {
            return;
          }
          VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pVVar3 = *ppVVar1;
    if (pVVar3 == (VehicleEnergyContainer *)0x0) goto code_?;
    (this->fields).updateEnergy = (pVVar3->fields)._UsingEnergy_k__BackingField;
    pAVar11 = (pVVar3->fields).OnRefill;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter__OnRefillCallback__
               ,(MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      (pVVar3->fields).OnRefill = (Action *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pAVar12 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar11;
    }
    if (pAVar12 == (Action *)0x0) goto code_?;
    (pVVar3->fields).OnRefill = pAVar12;
    pAVar12 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar11;
    }
    if (pAVar12 != (Action *)0x0) goto code_?;
  }
  else {
    if (rigidBody != (MVRigidBody *)0x0) {
      pVVar3 = (VehicleEnergyContainer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                         ((Component *)rigidBody,
                          WorldObjectTypes__VehicleEnergy__VehicleEnergyContainer_MethodInfo__UnityEngine__Component__GetComponent<WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer>__
                         );
      *ppVVar1 = pVVar3;
      func_?(ppVVar1,pVVar3);
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnRefillCallback() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_OnRefillCallback(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    cRam_? = '\x01';
  }
  if ((this->fields).updateEnergy != 0) {
    NStack_1.hasValue = (this->fields).currentColor.hasValue;
    NStack_1._1_3_ = *(undefined3 *)&(this->fields).currentColor.field_0x1;
    NStack_1.value.m_XMin = (this->fields).currentColor.value.r;
    NStack_1.value.m_YMin = (this->fields).currentColor.value.g;
    NStack_1.value.m_Width = (this->fields).currentColor.value.b;
    NStack_1.value.m_Height = (this->fields).currentColor.value.a;
    if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    }
    pVVar2 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
             static_fields;
    if ((NStack_1.hasValue == 0) ||
       (fVar3 = NStack_1.value.m_XMin - (pVVar2->WarningColor).r,
       fVar4 = NStack_1.value.m_YMin - (pVVar2->WarningColor).g,
       fVar5 = NStack_1.value.m_Width - (pVVar2->WarningColor).b,
       fVar6 = NStack_1.value.m_Height - (pVVar2->WarningColor).a,
       _UNK_? <= fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)) {
      NStack_1.hasValue = (this->fields).currentColor.hasValue;
      NStack_1._1_3_ = *(undefined3 *)&(this->fields).currentColor.field_0x1;
      NStack_1.value.m_XMin = (this->fields).currentColor.value.r;
      NStack_1.value.m_YMin = (this->fields).currentColor.value.g;
      NStack_1.value.m_Width = (this->fields).currentColor.value.b;
      NStack_1.value.m_Height = (this->fields).currentColor.value.a;
      if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
      }
      pVVar2 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
               static_fields;
      if ((NStack_1.hasValue != 0) &&
         (fVar3 = NStack_1.value.m_XMin - (pVVar2->RefillColor).r,
         fVar4 = NStack_1.value.m_YMin - (pVVar2->RefillColor).g,
         fVar5 = NStack_1.value.m_Width - (pVVar2->RefillColor).b,
         fVar6 = NStack_1.value.m_Height - (pVVar2->RefillColor).a,
         fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 < _UNK_?)) {
        pIVar7 = VehicleEnergyMeter_StopBlinking(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                  ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
        pIVar7 = VehicleEnergyMeter_StopBlinking(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
    }
    if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    }
    pVVar2 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
             static_fields;
    value.m_XMin = (pVVar2->RefillColor).r;
    value.m_YMin = (pVVar2->RefillColor).g;
    value.m_Width = (pVVar2->RefillColor).b;
    value.m_Height = (pVVar2->RefillColor).a;
    NStack_1.value.m_Height = 0.0;
    NStack_1.hasValue = 0;
    NStack_1._1_3_ = 0;
    NStack_1.value.m_XMin = 0.0;
    NStack_1.value.m_YMin = 0.0;
    NStack_1.value.m_Width = 0.0;
    mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
              (&NStack_1,value,
               MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
    (this->fields).currentColor.hasValue = NStack_1.hasValue;
    *(undefined3 *)&(this->fields).currentColor.field_0x1 = NStack_1._1_3_;
    (this->fields).currentColor.value.r = NStack_1.value.m_XMin;
    (this->fields).currentColor.value.g = NStack_1.value.m_YMin;
    (this->fields).currentColor.value.b = NStack_1.value.m_Width;
    (this->fields).currentColor.value.a = NStack_1.value.m_Height;
    pIVar7 = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
    pIVar7 = VehicleEnergyMeter_StopBlinking(this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,pIVar7,(MethodInfo *)0x0);
  }
  return;
}


/* IEnumerator StopBlinking() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
VehicleEnergyMeter_StopBlinking(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___StopBlinking_d__14
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___StopBlinking_d__14;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void StopBlinkingBar() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_StopBlinkingBar(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17
                   );
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter___BlinkingBar_d__17;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  pIVar1 = (this->fields).progressBarImage;
  if (pIVar1 != (Image *)0x0) {
    (*(code *)(pIVar1->klass->vtable).set_color.method)
              (pIVar1,(this->fields).originalColor.r,(this->fields).originalColor.g,
               (this->fields).originalColor.b);
    *(undefined4 *)&(this->fields).currentColor = 0;
    (this->fields).currentColor.value.r = 0.0;
    (this->fields).currentColor.value.g = 0.0;
    (this->fields).currentColor.value.b = 0.0;
    (this->fields).currentColor.value.a = 0.0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateEnergy() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_UpdateEnergy(VehicleEnergyMeter *this,MethodInfo *method)

{
  if ((this->fields).updateEnergy == 0) {
    return;
  }
  this_00 = (this->fields).vehicleEnergyContainer;
  this_01 = (ProgressBarAndroid *)(this->fields).progressBar;
  if ((this_00 != (VehicleEnergyContainer *)0x0) &&
     (fVar1 = WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::
              VehicleEnergyContainer_get_EnergyStatus(this_00,(MethodInfo *)0x0),
     this_01 != (ProgressBarAndroid *)0x0)) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_01,fVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
      cRam_? = '\x01';
    }
    pPVar2 = (this->fields).progressBar;
    if (pPVar2 != (ProgressBar *)0x0) {
      if (((pPVar2->fields).progress <= _UNK_?) &&
         (_UNK_? < (pPVar2->fields).progress)) {
        if ((this->fields).currentColor.hasValue != 0) {
          return;
        }
        if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar3 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
                 static_fields;
        fVar1 = (pVVar3->WarningColor).b;
        fVar4 = (pVVar3->WarningColor).a;
        value.m_XMin = (pVVar3->WarningColor).r;
        value.m_YMin = (pVVar3->WarningColor).g;
        value.m_Width = (pVVar3->WarningColor).b;
        value.m_Height = (pVVar3->WarningColor).a;
        fVar5 = 0.0;
        mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
                  ((Nullable_1_UnityEngine_Rect_ *)&stack0xffffffe8,value,(MethodInfo *)0x0);
        *(float *)&(this->fields).currentColor = fVar1;
        (this->fields).currentColor.value.r = fVar4;
        (this->fields).currentColor.value.g = fVar5;
        (this->fields).currentColor.value.b = 0.0;
        (this->fields).currentColor.value.a = 0.0;
        routine = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
      if ((this->fields).currentColor.hasValue == 0) {
        return;
      }
      fVar1 = (this->fields).currentColor.value.a;
      bVar6 = (bool)*(undefined4 *)&(this->fields).currentColor;
      puVar7 = (undefined *)(this->fields).currentColor.value.r;
      pVVar8 = (VehicleEnergyMeter__Class *)(this->fields).currentColor.value.g;
      fVar4 = (this->fields).currentColor.value.b;
      if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
          cctor_finished_or_no_cctor == 0) {
        puVar7 = &UNK_?;
        pVVar8 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter;
        func_?();
      }
      pVVar3 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
               static_fields;
      if (bVar6 == 0) {
        return;
      }
      fVar9 = (float)puVar7 - (pVVar3->WarningColor).r;
      fVar5 = (float)pVVar8 - (pVVar3->WarningColor).g;
      fVar4 = fVar4 - (pVVar3->WarningColor).b;
      fVar1 = fVar1 - (pVVar3->WarningColor).a;
      if (_UNK_? <= fVar9 * fVar9 + fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) {
        return;
      }
      VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void VisualStuff() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter_VisualStuff(VehicleEnergyMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__GetValueOrDefault__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).progressBar;
  if (pPVar1 == (ProgressBar *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((_UNK_? < (pPVar1->fields).progress) || ((pPVar1->fields).progress <= _UNK_?)) {
    if ((this->fields).currentColor.hasValue != 0) {
      NStack_3.value.m_Height = (this->fields).currentColor.value.a;
      NStack_3.hasValue = (this->fields).currentColor.hasValue;
      NStack_3._1_3_ = *(undefined3 *)&(this->fields).currentColor.field_0x1;
      NStack_3.value.m_XMin = (this->fields).currentColor.value.r;
      NStack_3.value.m_YMin = (this->fields).currentColor.value.g;
      NStack_3.value.m_Width = (this->fields).currentColor.value.b;
      if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
      }
      pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
               static_fields;
      if ((NStack_3.hasValue != 0) &&
         (fVar5 = NStack_3.value.m_XMin - (pVVar4->WarningColor).r,
         fVar6 = NStack_3.value.m_YMin - (pVVar4->WarningColor).g,
         fVar7 = NStack_3.value.m_Width - (pVVar4->WarningColor).b,
         fVar8 = NStack_3.value.m_Height - (pVVar4->WarningColor).a,
         fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 < _UNK_?)) {
        VehicleEnergyMeter_StopBlinkingBar(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if ((this->fields).currentColor.hasValue == 0) {
    if ((TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    }
    pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->
             static_fields;
    value.m_XMin = (pVVar4->WarningColor).r;
    value.m_YMin = (pVVar4->WarningColor).g;
    value.m_Width = (pVVar4->WarningColor).b;
    value.m_Height = (pVVar4->WarningColor).a;
    NStack_3.value.m_Height = 0.0;
    NStack_3.hasValue = 0;
    NStack_3._1_3_ = 0;
    NStack_3.value.m_XMin = 0.0;
    NStack_3.value.m_YMin = 0.0;
    NStack_3.value.m_Width = 0.0;
    mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::Nullable_1_UnityEngine_Rect___ctor
              (&NStack_3,value,
               MethodInfo__System__Nullable<UnityEngine::Color>__Nullable_UnityEngine__Color_);
    (this->fields).currentColor.hasValue = NStack_3.hasValue;
    *(undefined3 *)&(this->fields).currentColor.field_0x1 = NStack_3._1_3_;
    (this->fields).currentColor.value.r = NStack_3.value.m_XMin;
    (this->fields).currentColor.value.g = NStack_3.value.m_YMin;
    (this->fields).currentColor.value.b = NStack_3.value.m_Width;
    (this->fields).currentColor.value.a = NStack_3.value.m_Height;
    routine = VehicleEnergyMeter_BlinkingBar(this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  return;
}


/* VehicleEnergyMeter() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleEnergyMeter::
     VehicleEnergyMeter__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  (pVVar4->WarningColor).r = _UNK_?;
  (pVVar4->WarningColor).g = fVar3;
  (pVVar4->WarningColor).b = fVar2;
  (pVVar4->WarningColor).a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pVVar4 = TypeInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleEnergyMeter->static_fields;
  (pVVar4->RefillColor).r = _UNK_?;
  (pVVar4->RefillColor).g = fVar3;
  (pVVar4->RefillColor).b = fVar2;
  (pVVar4->RefillColor).a = fVar1;
  return;
}

