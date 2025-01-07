
/* Void ActivateThrusters() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_ActivateThrusters
               (HoverCraftVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).hoverCraftThrusters;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                       );
    this_01 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
                   ,(MethodInfo *)unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (RegexCharClass_SingleRange)0x0) break;
      WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_UpdateSize
                ((HoverCraftThruster *)this_01,(this->fields).thrustersSize,(MethodInfo *)0x0);
      unaff_EDI = this_01;
      WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_UpdateColor
                ((HoverCraftThruster *)this_01,(this->fields).thrustersColor,(MethodInfo *)0x0);
      bVar8 = (this->fields).useThrusters;
      _bStack_18 = CONCAT31(uStack_9,bVar8);
      WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_ToggleOnOff
                ((HoverCraftThruster *)this_01,bVar8,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AnimateHullInertia() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullInertia
               (HoverCraftVisualization *this,MethodInfo *method)

{
  fVar1 = (this->fields).prevWorldRot.x;
  fVar2 = (this->fields).prevWorldRot.y;
  fVar3 = (this->fields).prevWorldRot.z;
  fVar4 = (this->fields).prevWorldRot.w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = fVar2;
  rotation.x = fVar1;
  rotation.z = fVar3;
  rotation.w = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffd0,rotation,
             TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0);
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar5 != (Transform *)0x0) {
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc0,pTVar5,(MethodInfo *)0x0);
    fVar1 = pQVar6->x;
    fVar2 = pQVar6->y;
    fVar3 = pQVar6->z;
    fVar4 = pQVar6->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation_00.y = fVar2;
    rotation_00.x = fVar1;
    rotation_00.z = fVar3;
    rotation_00.w = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffec,rotation_00,
               TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0);
    pVVar7 = (Vector3 *)func_?();
    v1 = *pVVar7;
    puVar8 = &stack0xffffffd0;
    puVar9 = (undefined8 *)func_?();
    fVar1 = *(float *)(puVar9 + 1);
    uVar10 = (undefined4)*puVar9;
    uVar11 = (undefined4)((ulonglong)*puVar9 >> 0x20);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    v2.y = (float)uVar11;
    v2.x = (float)uVar10;
    v2.z = fVar1;
    fVar4 = MathFunctions::MathFunctions_SignedAngle_1
                       (v1,v2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                        (MethodInfo *)0x0);
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = (this->fields).rotateRollFactor;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = _UNK_?;
    fVar3 = fVar3 * (this->fields).rollSpeed;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    fVar3 = fVar3 * _UNK_? * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
    fVar1 = (_UNK_? - fVar3) * (float)puVar8 + (fVar4 / fVar12) * fVar1 * fVar3;
    (this->fields).angleDiff = fVar1;
    if ((float)((uint)fVar1 & _UNK_?) < fVar2) {
      (this->fields).angleDiff = 0.0;
    }
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffc0,pTVar5,(MethodInfo *)0x0);
      pHVar13 = (HoverCraftVisualization *)
               ((uint)(this->fields).angleDiff ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar1 = pQVar6->y;
      fVar2 = pQVar6->z;
      fVar3 = pQVar6->w;
      pTVar5 = (this->fields).hoverCraftHullRoot;
      pHVar14 = (HoverCraftVisualization *)
               ((uint)(this->fields).rollMax ^
               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      (this->fields).prevWorldRot.x = pQVar6->x;
      (this->fields).prevWorldRot.y = fVar1;
      (this->fields).prevWorldRot.z = fVar2;
      (this->fields).prevWorldRot.w = fVar3;
      if (((float)pHVar14 <= (float)pHVar13) &&
         (pHVar15 = (HoverCraftVisualization *)(this->fields).rollMax, pHVar14 = pHVar13,
         (float)pHVar15 < (float)pHVar13)) {
        pHVar14 = pHVar15;
      }
      this = pHVar14;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffffc0,(float)this,
                          TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                          (MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar5,*pQVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void AnimateHullSpeed() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullSpeed
               (HoverCraftVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation.y = fVar4;
    rotation.x = fVar3;
    rotation.z = fVar5;
    rotation.w = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              (&VStack_7,rotation,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
               (MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    VStack_7._4_8_ = *puVar8;
    fStack_9 = *(float *)(puVar8 + 1);
    uVar10 = (this->fields).smoothVelocity.x;
    uVar11 = (this->fields).smoothVelocity.y;
    fStack_12 = _UNK_?;
    if (VStack_7.y * (float)uVar10 + VStack_7.z * (float)uVar11 +
        fStack_9 * (this->fields).smoothVelocity.z <= _UNK_?) {
      fStack_12 = _UNK_?;
    }
    fStack_12 = fStack_12 * (this->fields).signedAcceleration;
    fStack_13 = (this->fields).smoothAcceleration;
    fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fStack_14 = fStack_14 * _UNK_?;
    if (fStack_14 < 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = fStack_14;
      if (_UNK_? < fStack_14) {
        fVar3 = _UNK_?;
      }
    }
    fVar3 = fVar3 * _UNK_? * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
    fStack_12 = (_UNK_? - fVar3) * fStack_13 + fVar3 * fStack_12;
    (this->fields).smoothAcceleration = fStack_12;
    fStack_15 = (this->fields).smoothPitchFactor;
    fStack_13 = (this->fields).pitchFactor;
    fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fVar3 = fStack_14 * (this->fields).pitchSpeedTime;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    fVar3 = fVar3 * _UNK_? * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
    pTVar1 = (this->fields).hoverCraftHullRoot;
    (this->fields).smoothPitchFactor =
         (_UNK_? - fVar3) * fStack_15 + fStack_12 * fStack_13 * fVar3;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
      fVar3 = (float)((uint)(this->fields).pitchMax ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar4 = pQVar2->x;
      fVar5 = pQVar2->y;
      fVar6 = pQVar2->z;
      fVar16 = pQVar2->w;
      fStack_14 = (this->fields).smoothPitchFactor;
      if ((fStack_14 < fVar3) || (fVar3 = (this->fields).pitchMax, fVar3 < fStack_14)) {
        fStack_14 = fVar3;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffffa0,fStack_14,
                          TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                          (MethodInfo *)0x0);
      VStack_7.x = pQVar2->x;
      fVar3 = pQVar2->y;
      fVar17 = pQVar2->z;
      VStack_7.y = pQVar2->y;
      VStack_7.z = pQVar2->z;
      fStack_9 = pQVar2->w;
      fStack_15 = (fStack_9 * fVar4 + VStack_7.x * fVar16 + fVar17 * fVar5) - fVar3 * fVar6;
      value.y = (fVar5 * fStack_9 + fVar3 * fVar16 + fVar6 * pQVar2->x) - fVar17 * fVar4;
      value.x = fStack_15;
      value.z = (fVar6 * fStack_9 + fVar17 * fVar16 + fVar3 * fVar4) - fVar5 * pQVar2->x;
      value.w = ((fStack_9 * fVar16 - fVar4 * VStack_7.x) - fVar3 * fVar5) - fVar6 * fVar17;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Awake
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftVisualization);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).unoccupiedTime = fVar1;
  if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftVisualization);
  }
  pGVar2 = HoverCraftVisualization_CreateGradient
                     (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor,
                      (MethodInfo *)0x0);
  (this->fields).thrustersColor = pGVar2;
  func_?(&(this->fields).thrustersColor,pGVar2);
  return;
}


/* Void CalculateMovementValues() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_CalculateMovementValues
               (HoverCraftVisualization *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar1->x;
    uVar3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    fStack_5 = (this->fields).prevWorldPosition.z;
    uStack_6._0_4_ = (this->fields).prevWorldPosition.x;
    uStack_6._4_4_ = (this->fields).prevWorldPosition.y;
    fVar7 = (float)(undefined4)uVar3 - (float)uStack_6;
    uStack_8 = uVar3 & 0xffffffff;
    fStack_9 = 0.0 - uStack_6._4_4_;
    fStack_10 = fVar4 - fStack_5;
    fStack_11 = fVar4;
    fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    VStack_2.z = fStack_10 / fStack_12;
    fVar7 = fVar7 / fStack_12;
    fStack_9 = fStack_9 / fStack_12;
    uStack_6 = CONCAT44(fStack_9,fVar7);
    fStack_5 = VStack_2.z;
    fStack_10 = VStack_2.z;
    fVar13 = (float10)func_?(&uStack_6,0);
    fStack_12 = (float)fVar13;
    (this->fields).moveSpeed = fStack_12;
    fStack_14 = (this->fields).smoothMoveSpeed;
    fStack_15 = fStack_14;
    fStack_16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fStack_16 = fStack_16 * _UNK_?;
    if (fStack_16 < 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = fStack_16;
      if (_UNK_? < fStack_16) {
        fVar17 = _UNK_?;
      }
    }
    fVar17 = fVar17 * _UNK_? * fVar17 * fVar17 + fVar17 * _UNK_? * fVar17;
    fStack_5 = (this->fields).smoothVelocity.z;
    (this->fields).smoothMoveSpeed = (_UNK_? - fVar17) * fStack_15 + fVar17 * fStack_12;
    uStack_6._0_4_ = (this->fields).smoothVelocity.x;
    uStack_6._4_4_ = (this->fields).smoothVelocity.y;
    fStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fStack_15 = fStack_15 * _UNK_?;
    if (fStack_15 < 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = fStack_15;
      if (_UNK_? < fStack_15) {
        fVar17 = _UNK_?;
      }
    }
    VStack_2.z = (fStack_10 - fStack_5) * fVar17 + fStack_5;
    fStack_14 = (this->fields).smoothMoveSpeed - fStack_14;
    (this->fields).smoothVelocity.x = (fVar7 - (float)uStack_6) * fVar17 + (float)uStack_6;
    (this->fields).smoothVelocity.y = (fStack_9 - uStack_6._4_4_) * fVar17 + uStack_6._4_4_;
    (this->fields).smoothVelocity.z = VStack_2.z;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).prevWorldPosition.x = (float)(undefined4)uStack_8;
    (this->fields).prevWorldPosition.y = (float)uStack_8._4_4_;
    (this->fields).prevWorldPosition.z = fVar4;
    (this->fields).signedAcceleration = fStack_14 / fVar7;
    return;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Gradient CreateGradient(ThrustersColor) */

Gradient *
Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_CreateGradient
          (ThrustersColor thrustersColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    func_?(&TypeInfo__UnityEngine__GradientColorKey);
    func_?(&TypeInfo__UnityEngine__Gradient);
    cRam_? = '\x01';
  }
  if (thrustersColor.colors != (ThrustersColorColorKey__Array *)0x0) {
    pGStack_1 = (GradientColorKey__Array *)
                func_?(TypeInfo__UnityEngine__GradientColorKey,
                                (thrustersColor.colors)->max_length);
    uVar2 = 0;
    pGVar3 = pGStack_1->vector;
    pTVar4 = thrustersColor.colors;
    while( true ) {
      pTStack_5 = (ThrustersColorColorKey__Array *)pTVar4->vector;
      if ((int)(thrustersColor.colors)->max_length <= (int)uVar2) break;
      if ((thrustersColor.colors)->max_length <= uVar2) goto code_?;
      fStack_6 = (((ThrustersColorColorKey *)pTStack_5)->color).r;
      fStack_7 = pTVar4->vector[0].color.g;
      VStack_8.Item2 = 1.0;
      VStack_8.Item1 = pTVar4->vector[0].color.b;
      GStack_9.color.r = 0.0;
      GStack_9.color.g = 0.0;
      GStack_9.color.b = 0.0;
      GStack_9.color.a = 0.0;
      GStack_9.time = 0.0;
      col.a = 1.0;
      col.r = (((ThrustersColorColorKey *)pTStack_5)->color).r;
      col.g = (((ThrustersColorColorKey *)pTStack_5)->color).g;
      col.b = (((ThrustersColorColorKey *)pTStack_5)->color).b;
      UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::GradientColorKey__ctor
                (&GStack_9,col,pTVar4->vector[0].time,(MethodInfo *)0x0);
      if (pGStack_1 == (GradientColorKey__Array *)0x0) goto code_?;
      if (pGStack_1->max_length <= uVar2) goto code_?;
      uVar2 = uVar2 + 1;
      (pGVar3->color).r = GStack_9.color.r;
      (pGVar3->color).g = GStack_9.color.g;
      (pGVar3->color).b = GStack_9.color.b;
      (pGVar3->color).a = GStack_9.color.a;
      pGVar3->time = GStack_9.time;
      pGVar3 = pGVar3 + 1;
      pTVar4 = pTStack_5;
    }
    if (thrustersColor.alphas != (ThrustersColorAlphaKey__Array *)0x0) {
      pTStack_5 = (ThrustersColorColorKey__Array *)
                  func_?(TypeInfo__UnityEngine__GradientAlphaKey,
                                  (thrustersColor.alphas)->max_length);
      piStack_10 = &(thrustersColor.alphas)->max_length;
      pTVar11 = (thrustersColor.alphas)->vector;
      pfVar12 = &pTStack_5->vector[0].color.g;
      iVar13 = (int)thrustersColor.alphas - (int)pTStack_5;
      for (fVar14 = 0.0; (int)fVar14 < (int)*piStack_10; fVar14 = (float)((int)fVar14 + 1)) {
        if (*piStack_10 <= (uint)fVar14) goto code_?;
        VStack_8.Item1 = 0.0;
        VStack_8.Item2 = 0.0;
        mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                  (&VStack_8,pTVar11->alpha,*(float *)(iVar13 + (int)pfVar12),(MethodInfo *)0x0);
        if (pTStack_5 == (ThrustersColorColorKey__Array *)0x0) goto code_?;
        if (pTStack_5->max_length <= (uint)fVar14) goto code_?;
        pTVar11 = pTVar11 + 1;
        (((ThrustersColorColorKey *)(pfVar12 + -1))->color).r = VStack_8.Item1;
        *pfVar12 = VStack_8.Item2;
        pfVar12 = pfVar12 + 2;
      }
      pGVar15 = (Gradient *)func_?(TypeInfo__UnityEngine__Gradient);
      UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor(pGVar15,(MethodInfo *)0x0);
      if (pGVar15 != (Gradient *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                  (pGVar15,pGStack_1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                  (pGVar15,(GradientAlphaKey__Array *)pTStack_5,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_mode
                  (pGVar15,GradientMode__Enum_Blend,(MethodInfo *)0x0);
        return pGVar15;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  pGVar15 = (Gradient *)(*pcVar16)();
  return pGVar15;
}


/* Void HandleSound() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleSound
               (HoverCraftVisualization *this,MethodInfo *method)

{
  value = (this->fields).smoothMoveSpeed / _UNK_?;
  this_00 = (this->fields).moving;
  fVar1 = _UNK_?;
  if ((value < _UNK_?) || (fVar1 = _UNK_?, _UNK_? < value)) {
    value = fVar1;
  }
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleUnoccupiedVehicle() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleUnoccupiedVehicle
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pVVar1 = (this->fields).vehicleSeatManager;
    if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
    if ((pVVar1->fields).occupiedSeatCount == 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).unoccupiedTime = fVar2;
      (this->fields).vehicleIsUnoccupied = 1;
    }
    if ((this->fields).vehicleIsUnoccupied == 0) {
      return;
    }
  }
  pVVar1 = (this->fields).vehicleSeatManager;
  if (pVVar1 == (VehicleSeatManager *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < (pVVar1->fields).occupiedSeatCount) {
    (this->fields).vehicleIsUnoccupied = 0;
  }
  if (((this->fields).vehicleIsUnoccupied != 0) &&
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     _UNK_? - (fVar2 - (this->fields).unoccupiedTime) < _UNK_?)) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
  }
  return;
}


/* Void Init(Transform, VehicleSeatManager, Single, MVRuntimeDataVariableClampedFloat, Boolean,
   HoverCraftVisualization+HoverCraftVisualizationSettings) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Init
               (HoverCraftVisualization *this,Transform *hoverCraftHull,VehicleSeatManager *vsm,
               float maxHealthVal,MVRuntimeDataVariableClampedFloat *health,bool inSpawner,
               HoverCraftVisualization_HoverCraftVisualizationSettings
               hoverCraftVisualizationSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&MethodInfo__HoverCraftVisualization___Init_b__44_0_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields).localHoverCraftHullRootBasePosition.x = pVVar2->x;
    (this->fields).localHoverCraftHullRootBasePosition.y = fVar4;
    (this->fields).localHoverCraftHullRootBasePosition.z = fVar5;
    (this->fields)._.isInSpawner = inSpawner;
    (this->fields).vehicleSeatManager = vsm;
    func_?(&(this->fields).vehicleSeatManager,vsm);
    if (hoverCraftHull == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,hoverCraftHull,(MethodInfo *)0x0);
    VStack_3.y = pVVar2->x;
    VStack_3.z = pVVar2->y;
    fVar5 = pVVar2->z;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffe0,hoverCraftHull,(MethodInfo *)0x0);
    fVar4 = pQVar6->x;
    fVar7 = pQVar6->y;
    fVar8 = pQVar6->z;
    fVar9 = pQVar6->w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (hoverCraftHull,(this->fields).hoverCraftHullRoot,(MethodInfo *)0x0);
    value.z = fVar5;
    value.x = VStack_3.y;
    value.y = VStack_3.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (hoverCraftHull,value,(MethodInfo *)0x0);
    value_00.y = fVar7;
    value_00.x = fVar4;
    value_00.z = fVar8;
    value_00.w = fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (hoverCraftHull,value_00,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields).prevWorldPosition.x = pVVar2->x;
    (this->fields).prevWorldPosition.y = fVar4;
    (this->fields).prevWorldPosition.z = fVar5;
    (this->fields).prevWorldPosition.y = 0.0;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar5 = pQVar6->y;
    fVar4 = pQVar6->z;
    fVar7 = pQVar6->w;
    (this->fields).prevWorldRot.x = pQVar6->x;
    (this->fields).prevWorldRot.y = fVar5;
    (this->fields).prevWorldRot.z = fVar4;
    (this->fields).prevWorldRot.w = fVar7;
    (this->fields).maxHealth = maxHealthVal;
    if (health == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    fVar10 = (float10)(*(code *)(health->klass->vtable).get_Value.method)
                                (health,(health->klass->vtable).set_Value.methodPtr);
    (this->fields).prevHealth = (float)fVar10;
    pMVar11 = (health->fields)._._.OnChange;
    this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_00,(Object *)this,
               MethodInfo__HoverCraftVisualization___Init_b__44_0_System__Object_,(MethodInfo *)0x0)
    ;
    pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar11,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pMVar11 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (health->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      pVVar12 = (this->fields).vehicleBlinker;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)hoverCraftHull,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        pMVar13 = (MeshFilter__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           (this_01,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
        if (pVVar12 != (VehicleBlinker *)0x0) {
          (pVVar12->fields)._.meshFilters = pMVar13;
          func_?(&(pVVar12->fields)._.meshFilters,pMVar13);
          pVVar12 = (this->fields).vehicleBlinker;
          if (pVVar12 != (VehicleBlinker *)0x0) {
            (pVVar12->fields)._.visible = 1;
            HoverCraftVisualization_UpdateSettings
                      (this,hoverCraftVisualizationSettings,(MethodInfo *)0x0);
            if ((this->fields)._.isInSpawner != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this,0,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
      goto code_?;
    }
    pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar11->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar14 = pMVar11;
    }
    if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (health->fields)._._.OnChange = pMVar14;
    pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar11->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar14 = pMVar11;
    }
    if (pMVar14 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnDisable
               (HoverCraftVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pVVar6 = (this->fields).vehicleBlinker;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pVVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    pVVar6 = (this->fields).vehicleBlinker;
    if (pVVar6 == (VehicleBlinker *)0x0) goto code_?;
    unaff_ESI = (MethodInfo *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pVVar6,0,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).hoverCraftThrusters;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__GetEnumerator__
                       );
    this_01 = pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
    while( true ) {
      bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__MoveNext__
                        );
      if (bVar7 == 0) break;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
        unaff_ESI = (MethodInfo *)&UNK_?;
        WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::HoverCraftThruster_Disable
                  ((HoverCraftThruster *)this_01,(MethodInfo *)0x0);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__Dispose__
               ,unaff_ESI);
    uStack_1 = 0xffffffff;
    pPVar10 = (this->fields).fire;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pPVar10 = (this->fields).fire;
      if (pPVar10 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Clear_1
                (pPVar10,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnEnable
               (HoverCraftVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleBlinker;
  if (this_00 != (VehicleBlinker *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    HoverCraftVisualization_ActivateThrusters(this,(MethodInfo *)0x0);
    (this->fields).smoothMoveSpeed = 0.0;
    (this->fields).smoothPitchFactor = 0.0;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      VStack_1.z = (float)&UNK_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_1,this_01,(MethodInfo *)0x0);
      fVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      (this->fields).prevWorldPosition.x = pVVar2->x;
      (this->fields).prevWorldPosition.y = fVar3;
      (this->fields).prevWorldPosition.z = fVar4;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnHealthChange
               (HoverCraftVisualization *this,float newHealth,MethodInfo *method)

{
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  if (newHealth < (this->fields).maxHealth) {
    pPVar2 = (this->fields).damageSmokeEmitter;
    if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pPVar2 = (this->fields).damageSmokeEmitter;
      if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar2,(MethodInfo *)0x0);
      pPVar2 = (this->fields).fire;
      if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
      PStack_1.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,1,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).maxHealth <= newHealth) {
    pPVar2 = (this->fields).damageSmokeEmitter;
    if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
    newHealth = 0.0;
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pPVar2 = (this->fields).damageSmokeEmitter;
      if (pPVar2 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar2,(MethodInfo *)0x0);
        pPVar2 = (this->fields).fire;
        if (pPVar2 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
          ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
          ParticleSystem_EmissionModule_set_enabled_Injected
                    ((ParticleSystem_EmissionModule *)&stack0xfffffff4,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  fVar4 = (this->fields).prevHealth;
  if (newHealth < fVar4) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Damage;
code_?:
    PStack_1.m_ParticleSystem = (ParticleSystem *)&UNK_?;
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,0.3,(MethodInfo *)0x0);
  }
  else if (fVar4 < newHealth) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
    goto code_?;
  }
  pPVar2 = (this->fields).damageSmokeEmitter;
  if (pPVar2 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (pPVar2,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSizeMultiplier_Injected
              ((ParticleSystem_MainModule *)&stack0xfffffff0,(float)pPVar2,(MethodInfo *)0x0);
    pPVar2 = (this->fields).fire;
    (this->fields).prevHealth = (float)&stack0xfffffff0;
    if (pPVar2 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xffffffec,_UNK_? * 3.5036033e-29,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PassiveAnim() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_PassiveAnim
               (HoverCraftVisualization *this,MethodInfo *method)

{
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    uVar2._0_4_ = (this->fields).hoverOffset.x;
    uVar2._4_4_ = (this->fields).hoverOffset.y;
    fVar3 = (this->fields).hoverOffset.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,uVar2);
      cRam_? = '\x01';
    }
    fVar4 = (float)((ulonglong)uVar2 >> 0x20);
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->upVector).x;
    uVar7 = (pVVar5->upVector).y;
    fVar8 = (pVVar5->upVector).z;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
    dVar10 = (double)(fVar9 / (this->fields).HoverPeriod);
    puVar11 = &UNK_?;
    func_?();
    fVar9 = (float)dVar10 * (this->fields).HoverAmplitude;
    uVar12 = (this->fields).localHoverCraftHullRootBasePosition.x;
    uVar13 = (this->fields).localHoverCraftHullRootBasePosition.y;
    if (pTVar1 != (Transform *)0x0) {
      value.y = (float)uVar13 + fVar4 + (float)uVar7 * fVar9;
      value.x = (float)uVar12 + (float)puVar11 + (float)uVar6 * fVar9;
      value.z = (this->fields).localHoverCraftHullRootBasePosition.z + fVar3 + fVar8 * fVar9;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Update
               (HoverCraftVisualization *this,MethodInfo *method)

{
  HoverCraftVisualization_AnimateHullInertia(this,(MethodInfo *)0x0);
  HoverCraftVisualization_CalculateMovementValues(this,(MethodInfo *)0x0);
  HoverCraftVisualization_AnimateHullSpeed(this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pTVar1,(MethodInfo *)0x0);
  fVar2 = (this->fields).hoverOffset.x;
  fVar3 = (this->fields).hoverOffset.y;
  fVar4 = (this->fields).hoverOffset.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
  method_00 = (MethodInfo *)(TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  puVar6 = &UNK_?;
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup(method_00)
  ;
  dVar8 = (double)(fVar7 / (this->fields).HoverPeriod);
  func_?();
  fVar7 = (float)dVar8 * (this->fields).HoverAmplitude;
  uVar9 = (this->fields).localHoverCraftHullRootBasePosition.x;
  uVar10 = (this->fields).localHoverCraftHullRootBasePosition.y;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  value.y = (float)uVar10 + fVar3 + (float)puVar6 * fVar7;
  value.x = (float)uVar9 + fVar2 + fVar5 * fVar7;
  value.z = (this->fields).localHoverCraftHullRootBasePosition.z +
            fVar4 + (float)method_00 * fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar1,value,(MethodInfo *)0x0);
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pVVar11 = (this->fields).vehicleSeatManager;
      if (pVVar11 == (VehicleSeatManager *)0x0) goto code_?;
      if ((pVVar11->fields).occupiedSeatCount == 0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).unoccupiedTime = fVar2;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pVVar11 = (this->fields).vehicleSeatManager;
    if (pVVar11 == (VehicleSeatManager *)0x0) goto code_?;
    if (0 < (pVVar11->fields).occupiedSeatCount) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (_UNK_? - (fVar2 - (this->fields).unoccupiedTime) < _UNK_?) {
        this_00 = (this->fields).vehicleBlinker;
        if (this_00 == (VehicleBlinker *)0x0) goto code_?;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  fVar2 = (this->fields).smoothMoveSpeed / _UNK_?;
  this_01 = (this->fields).moving;
  fVar3 = _UNK_?;
  if ((fVar2 < _UNK_?) || (fVar3 = _UNK_?, _UNK_? < fVar2)) {
    fVar2 = fVar3;
  }
  if (this_01 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_01,fVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateSettings(HoverCraftVisualization+HoverCraftVisualizationSettings) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_UpdateSettings
               (HoverCraftVisualization *this,
               HoverCraftVisualization_HoverCraftVisualizationSettings
               hoverCraftVisualizationSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftVisualization);
    cRam_? = '\x01';
  }
  (this->fields).useThrusters = hoverCraftVisualizationSettings.useThruster;
  (this->fields).thrustersSize = hoverCraftVisualizationSettings.thrustersSize;
  if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HoverCraftVisualization);
  }
  pGVar1 = HoverCraftVisualization_CreateGradient
                     (hoverCraftVisualizationSettings.thrustersColor,(MethodInfo *)0x0);
  (this->fields).thrustersColor = pGVar1;
  func_?(&(this->fields).thrustersColor,pGVar1);
  HoverCraftVisualization_ActivateThrusters(this,(MethodInfo *)0x0);
  if ((this->fields).useThrusters == 0) {
    (this->fields).HoverAmplitude = 0.0;
  }
  return;
}


/* Void <Init>b__44_0(Object) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__Init_b__44_0
               (HoverCraftVisualization *this,Object *healthVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (healthVal != (Object *)0x0) {
    if ((healthVal->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar1 = (float *)func_?();
      HoverCraftVisualization_OnHealthChange(this,*pfVar1,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* HoverCraftVisualization() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HoverCraftVisualization);
    func_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey);
    func_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  iVar2 = func_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey,4);
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  uVar6 = _UNK_?;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xc) == 0) goto code_?;
    *(undefined4 *)(iVar2 + 0x10) = _UNK_?;
    *(undefined4 *)(iVar2 + 0x14) = uVar5;
    *(undefined4 *)(iVar2 + 0x18) = uVar4;
    *(undefined4 *)(iVar2 + 0x1c) = uVar3;
    uVar6 = 0x3dc8b439;
    uVar4 = 0x3f760419;
    uVar3 = 0x3e43c4c5;
    if (*(uint *)(iVar2 + 0xc) < 2) goto code_?;
    *(undefined4 *)(iVar2 + 0x20) = 0x3dc8b439;
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
    *(undefined4 *)(iVar2 + 0x28) = 0x3f760419;
    *(undefined4 *)(iVar2 + 0x2c) = 0x3e43c4c5;
    uVar7 = _UNK_?;
    uVar8 = _UNK_?;
    uVar9 = _UNK_?;
    if (*(uint *)(iVar2 + 0xc) < 3) goto code_?;
    *(undefined4 *)(iVar2 + 0x30) = _UNK_?;
    *(undefined4 *)(iVar2 + 0x34) = uVar9;
    *(undefined4 *)(iVar2 + 0x38) = uVar8;
    *(undefined4 *)(iVar2 + 0x3c) = uVar7;
    uVar7 = _UNK_?;
    uVar8 = _UNK_?;
    uVar9 = _UNK_?;
    if (*(uint *)(iVar2 + 0xc) < 4) goto code_?;
    *(undefined4 *)(iVar2 + 0x40) = _UNK_?;
    *(undefined4 *)(iVar2 + 0x44) = uVar9;
    *(undefined4 *)(iVar2 + 0x48) = uVar8;
    *(undefined4 *)(iVar2 + 0x4c) = uVar7;
    uStack_1 = CONCAT44(uStack_1._4_4_,iVar2);
    func_?(&uStack_1,iVar2);
    pTVar10 = (ThrustersColorAlphaKey__Array *)
             func_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey,
                             4);
    if (pTVar10 != (ThrustersColorAlphaKey__Array *)0x0) {
      if (pTVar10->max_length != 0) {
        pTVar10->vector[0].alpha = 0.0;
        pTVar10->vector[0].time = 0.0;
        if (1 < pTVar10->max_length) {
          pTVar10->vector[1].alpha = 1.0;
          pTVar10->vector[1].time = 0.09999237;
          if (2 < pTVar10->max_length) {
            pTVar10->vector[2].alpha = 1.0;
            pTVar10->vector[2].time = 0.4764782;
            if (3 < pTVar10->max_length) {
              pTVar10->vector[3].alpha = 0.0;
              pTVar10->vector[3].time = 1.0;
              uStack_1._4_4_ = pTVar10;
              func_?((int)&uStack_1 + 4,pTVar10);
              pHVar11 = TypeInfo__HoverCraftVisualization->static_fields;
              (pHVar11->DefaultThrustersColor).colors = (ThrustersColorColorKey__Array *)uStack_1;
              (pHVar11->DefaultThrustersColor).alphas = uStack_1._4_4_;
              func_?(TypeInfo__HoverCraftVisualization->static_fields,0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(uVar6,uVar5,uVar4,uVar3);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* HoverCraftVisualization() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__ctor
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>
                   );
    cRam_? = '\x01';
  }
  (this->fields).useThrusters = 1;
  this_00 = (List_1_WorldObjectTypes_HoverCraft_Shared_HoverCraftThruster_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster>__List__
            );
  (this->fields).hoverCraftThrusters = this_00;
  func_?(&(this->fields).hoverCraftThrusters,this_00);
  (this->fields).thrustersSize = 0.872;
  (this->fields).HoverPeriod = 0.8;
  (this->fields).HoverAmplitude = 0.2;
  (this->fields).rotateRollFactor = 7.0;
  (this->fields).rollSpeed = 9.5;
  (this->fields).rollMax = 30.0;
  (this->fields).pitchMax = 30.0;
  (this->fields).pitchSpeedTime = 10.0;
  (this->fields).pitchFactor = 20.0;
  (this->fields).damageParticleFactor = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).hoverOffset.x = (pVVar1->zeroVector).x;
  (this->fields).hoverOffset.y = fVar2;
  (this->fields).hoverOffset.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar4->identityQuaternion).y;
  fVar2 = (pQVar4->identityQuaternion).z;
  fVar5 = (pQVar4->identityQuaternion).w;
  (this->fields).prevWorldRot.x = (pQVar4->identityQuaternion).x;
  (this->fields).prevWorldRot.y = fVar3;
  (this->fields).prevWorldRot.z = fVar2;
  (this->fields).prevWorldRot.w = fVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).smoothVelocity.x = (pVVar1->zeroVector).x;
  (this->fields).smoothVelocity.y = fVar2;
  (this->fields).smoothVelocity.z = fVar3;
  VehicleVisualizationBase::VehicleVisualizationBase__ctor
            ((VehicleVisualizationBase *)this,(MethodInfo *)0x0);
  return;
}

