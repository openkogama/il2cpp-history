
/* Void CreatePoints() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_CreatePoints
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  fStack_2 = 0.0;
  iVar3 = (this->fields).segments;
  if (iVar3 != -1 && -1 < iVar3 + 1) {
    do {
      iVar3 = iStack_1;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fStack_4 = 0.0;
      uStack_5 = 0;
      uVar6 = 0;
      dVar7 = (double)(fStack_2 * _UNK_?);
      uStack_8 = dVar7;
      func_?(0,0);
      dVar9 = uStack_8;
      func_?((float)dVar7);
      func_?(&uStack_5,(float)dVar9);
      fVar10 = (this->fields).radius;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fStack_4;
      a.x = (float)(undefined4)uStack_5;
      a.y = (float)uStack_5._4_4_;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_12,a,fVar10,(MethodInfo *)0x0);
      this_00 = (this->fields).line;
      uStack_13._0_4_ = pVVar11->x;
      uStack_13._4_4_ = pVVar11->y;
      fVar10 = pVVar11->z;
      if (this_00 == (LineRenderer *)0x0) {
code_?:
        func_?(uVar6);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      position.z = pVVar11->z;
      position.x = (float)(undefined4)uStack_13;
      position.y = (float)uStack_13._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (this_00,iVar3,position,(MethodInfo *)0x0);
      if ((iVar3 % ((this->fields).segments / 3) == 0) &&
         (fVar15 = (float)(this->fields).currIndex, (int)fVar15 < 3)) {
        pVVar16 = (this->fields).positions;
        uStack_8 = (double)CONCAT44(pVVar16,(undefined4)uStack_8);
        (this->fields).currIndex = (int)fVar15 + 1;
        if (pVVar16 == (Vector3__Array *)0x0) {
          uVar6 = 0;
          goto code_?;
        }
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_00.z = fVar10;
        a_00.x = (float)(undefined4)uStack_13;
        a_00.y = (float)uStack_13._4_4_;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_17,a_00,2.5,(MethodInfo *)0x0);
        uStack_13._0_4_ = pVVar11->x;
        uStack_13._4_4_ = pVVar11->y;
        fVar10 = pVVar11->z;
        VStack_17.y = (float)&UNK_?;
        VStack_17.z = fVar15;
        puVar18 = (undefined8 *)func_?();
        *puVar18 = uStack_13;
        *(float *)(puVar18 + 1) = fVar10;
        iVar3 = iStack_1;
      }
      iVar19 = (this->fields).segments;
      iStack_1 = iVar3 + 1;
      fStack_2 = _UNK_? / (float)iVar19 + fStack_2;
    } while (iStack_1 < iVar19 + 1);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Initialize
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  RotatingShieldLine_CreatePoints(this,(MethodInfo *)0x0);
  uVar1 = 0;
  pVVar2 = (this->fields).positions;
  if (pVVar2 != (Vector3__Array *)0x0) {
    iStack_3 = 0;
    do {
      if ((int)pVVar2->max_length <= (int)uVar1) {
        (this->fields).recreatOrbs = 0;
        return;
      }
      func_?();
      if (pVVar2 == (Vector3__Array *)0x0) break;
      if (pVVar2->max_length <= uVar1) goto code_?;
      func_?();
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                (&VStack_4,(MethodInfo *)0x0);
      func_?();
      func_?();
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                         (&CStack_6,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                (*pCVar5,(MethodInfo *)0x0);
      func_?();
      func_?();
      this_00 = (this->fields).orbSpawner;
      if (this_00 == (ParticleSystem *)0x0) break;
      count = 0;
      uVar7 = 1;
      puVar8 = (undefined4 *)&stack0xffffff54;
      puVar9 = (undefined4 *)&stack0xfffffe28;
      for (iVar10 = 0x22; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      emitParams.m_StartLifetimeSet = (char)uVar7;
      emitParams.m_ApplyShapeToPosition = (char)((uint)uVar7 >> 8);
      emitParams._138_2_ = (short)((uint)uVar7 >> 0x10);
      auVar11 = in_stack_12._0_128_;
      auVar13 = auVar11._0_12_;
      auVar14 = auVar11._12_12_;
      auVar15 = auVar11._24_12_;
      auVar16 = auVar11._36_12_;
      auVar17 = auVar11._48_12_;
      auVar18 = auVar11._60_12_;
      auVar19 = auVar11._72_12_;
      auVar20 = auVar11._84_12_;
      uVar21 = auVar11._96_8_;
      emitParams.m_Particle.m_Position.x = (float)auVar13._0_4_;
      emitParams.m_Particle.m_Position.y = (float)auVar13._4_4_;
      emitParams.m_Particle.m_Position.z = (float)auVar13._8_4_;
      emitParams.m_Particle.m_Velocity.x = (float)auVar14._0_4_;
      emitParams.m_Particle.m_Velocity.y = (float)auVar14._4_4_;
      emitParams.m_Particle.m_Velocity.z = (float)auVar14._8_4_;
      emitParams.m_Particle.m_AnimatedVelocity.x = (float)auVar15._0_4_;
      emitParams.m_Particle.m_AnimatedVelocity.y = (float)auVar15._4_4_;
      emitParams.m_Particle.m_AnimatedVelocity.z = (float)auVar15._8_4_;
      emitParams.m_Particle.m_InitialVelocity.x = (float)auVar16._0_4_;
      emitParams.m_Particle.m_InitialVelocity.y = (float)auVar16._4_4_;
      emitParams.m_Particle.m_InitialVelocity.z = (float)auVar16._8_4_;
      emitParams.m_Particle.m_AxisOfRotation.x = (float)auVar17._0_4_;
      emitParams.m_Particle.m_AxisOfRotation.y = (float)auVar17._4_4_;
      emitParams.m_Particle.m_AxisOfRotation.z = (float)auVar17._8_4_;
      emitParams.m_Particle.m_Rotation.x = (float)auVar18._0_4_;
      emitParams.m_Particle.m_Rotation.y = (float)auVar18._4_4_;
      emitParams.m_Particle.m_Rotation.z = (float)auVar18._8_4_;
      emitParams.m_Particle.m_AngularVelocity.x = (float)auVar19._0_4_;
      emitParams.m_Particle.m_AngularVelocity.y = (float)auVar19._4_4_;
      emitParams.m_Particle.m_AngularVelocity.z = (float)auVar19._8_4_;
      emitParams.m_Particle.m_StartSize.x = (float)auVar20._0_4_;
      emitParams.m_Particle.m_StartSize.y = (float)auVar20._4_4_;
      emitParams.m_Particle.m_StartSize.z = (float)auVar20._8_4_;
      emitParams.m_Particle.m_StartColor.rgba = (int)uVar21;
      emitParams.m_Particle.m_StartColor.r = (char)((ulonglong)uVar21 >> 0x20);
      emitParams.m_Particle.m_StartColor.g = (char)((ulonglong)uVar21 >> 0x28);
      emitParams.m_Particle.m_StartColor.b = (char)((ulonglong)uVar21 >> 0x30);
      emitParams.m_Particle.m_StartColor.a = (char)((ulonglong)uVar21 >> 0x38);
      emitParams.m_Particle.m_RandomSeed = auVar11._104_4_;
      emitParams.m_Particle.m_Lifetime = (float)auVar11._108_4_;
      emitParams.m_Particle.m_StartLifetime = (float)auVar11._112_4_;
      emitParams.m_Particle.m_EmitAccumulator0 = (float)auVar11._116_4_;
      emitParams.m_Particle.m_EmitAccumulator1 = (float)auVar11._120_4_;
      emitParams.m_Particle.m_Flags = auVar11._124_4_;
      emitParams.m_PositionSet = in_stack_12[0x80];
      emitParams.m_VelocitySet = in_stack_12[0x81];
      emitParams.m_AxisOfRotationSet = in_stack_12[0x82];
      emitParams.m_RotationSet = in_stack_12[0x83];
      emitParams.m_AngularVelocitySet = in_stack_12[0x84];
      emitParams.m_StartSizeSet = in_stack_12[0x85];
      emitParams.m_StartColorSet = in_stack_12[0x86];
      emitParams.m_RandomSeedSet = in_stack_12[0x87];
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_3
                (this_00,emitParams,count,in_stack_22);
      uVar1 = uVar1 + 1;
      iStack_3 = iStack_3 + 0xc;
      pVVar2 = (this->fields).positions;
    } while (pVVar2 != (Vector3__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void OnSetVisible() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetVisible
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  if ((this->fields).recreatOrbs != 0) {
    iVar1 = 0;
    fStack_2 = 0.0;
    do {
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fStack_3 = 0.0;
      uStack_4 = 0;
      uStack_5 = (double)(fStack_2 * _UNK_?);
      func_?();
      func_?();
      func_?();
      fVar6 = (this->fields).radius;
      uStack_5._4_4_ = fVar6;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fStack_3;
      a.x = (float)(undefined4)uStack_4;
      a.y = (float)uStack_4._4_4_;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_8,a,uStack_5._4_4_,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar7->x;
      uStack_5._4_4_ = pVVar7->y;
      fVar6 = pVVar7->z;
      fStack_2 = fStack_2 + _UNK_?;
      func_?();
      a_00.z = fVar6;
      a_00.x = (float)(undefined4)uStack_5;
      a_00.y = uStack_5._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                (&VStack_9,a_00,2.5,(MethodInfo *)0x0);
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                (&VStack_10,(MethodInfo *)0x0);
      func_?();
      func_?();
      pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                         (&CStack_12,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Color32::Color32_op_Implicit
                (*pCVar11,(MethodInfo *)0x0);
      func_?();
      func_?();
      this_00 = (this->fields).orbSpawner;
      count = 0;
      if (this_00 == (ParticleSystem *)0x0) {
        func_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar14 = 1;
      puVar15 = (undefined4 *)&stack0xffffff28;
      puVar16 = (undefined4 *)&stack0xfffffdf4;
      for (iVar17 = 0x22; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      emitParams.m_StartLifetimeSet = (char)uVar14;
      emitParams.m_ApplyShapeToPosition = (char)((uint)uVar14 >> 8);
      emitParams._138_2_ = (short)((uint)uVar14 >> 0x10);
      auVar18 = in_stack_19._0_128_;
      auVar20 = auVar18._0_12_;
      auVar21 = auVar18._12_12_;
      auVar22 = auVar18._24_12_;
      auVar23 = auVar18._36_12_;
      auVar24 = auVar18._48_12_;
      auVar25 = auVar18._60_12_;
      auVar26 = auVar18._72_12_;
      auVar27 = auVar18._84_12_;
      uVar28 = auVar18._96_8_;
      emitParams.m_Particle.m_Position.x = (float)auVar20._0_4_;
      emitParams.m_Particle.m_Position.y = (float)auVar20._4_4_;
      emitParams.m_Particle.m_Position.z = (float)auVar20._8_4_;
      emitParams.m_Particle.m_Velocity.x = (float)auVar21._0_4_;
      emitParams.m_Particle.m_Velocity.y = (float)auVar21._4_4_;
      emitParams.m_Particle.m_Velocity.z = (float)auVar21._8_4_;
      emitParams.m_Particle.m_AnimatedVelocity.x = (float)auVar22._0_4_;
      emitParams.m_Particle.m_AnimatedVelocity.y = (float)auVar22._4_4_;
      emitParams.m_Particle.m_AnimatedVelocity.z = (float)auVar22._8_4_;
      emitParams.m_Particle.m_InitialVelocity.x = (float)auVar23._0_4_;
      emitParams.m_Particle.m_InitialVelocity.y = (float)auVar23._4_4_;
      emitParams.m_Particle.m_InitialVelocity.z = (float)auVar23._8_4_;
      emitParams.m_Particle.m_AxisOfRotation.x = (float)auVar24._0_4_;
      emitParams.m_Particle.m_AxisOfRotation.y = (float)auVar24._4_4_;
      emitParams.m_Particle.m_AxisOfRotation.z = (float)auVar24._8_4_;
      emitParams.m_Particle.m_Rotation.x = (float)auVar25._0_4_;
      emitParams.m_Particle.m_Rotation.y = (float)auVar25._4_4_;
      emitParams.m_Particle.m_Rotation.z = (float)auVar25._8_4_;
      emitParams.m_Particle.m_AngularVelocity.x = (float)auVar26._0_4_;
      emitParams.m_Particle.m_AngularVelocity.y = (float)auVar26._4_4_;
      emitParams.m_Particle.m_AngularVelocity.z = (float)auVar26._8_4_;
      emitParams.m_Particle.m_StartSize.x = (float)auVar27._0_4_;
      emitParams.m_Particle.m_StartSize.y = (float)auVar27._4_4_;
      emitParams.m_Particle.m_StartSize.z = (float)auVar27._8_4_;
      emitParams.m_Particle.m_StartColor.rgba = (int)uVar28;
      emitParams.m_Particle.m_StartColor.r = (char)((ulonglong)uVar28 >> 0x20);
      emitParams.m_Particle.m_StartColor.g = (char)((ulonglong)uVar28 >> 0x28);
      emitParams.m_Particle.m_StartColor.b = (char)((ulonglong)uVar28 >> 0x30);
      emitParams.m_Particle.m_StartColor.a = (char)((ulonglong)uVar28 >> 0x38);
      emitParams.m_Particle.m_RandomSeed = auVar18._104_4_;
      emitParams.m_Particle.m_Lifetime = (float)auVar18._108_4_;
      emitParams.m_Particle.m_StartLifetime = (float)auVar18._112_4_;
      emitParams.m_Particle.m_EmitAccumulator0 = (float)auVar18._116_4_;
      emitParams.m_Particle.m_EmitAccumulator1 = (float)auVar18._120_4_;
      emitParams.m_Particle.m_Flags = auVar18._124_4_;
      emitParams.m_PositionSet = in_stack_19[0x80];
      emitParams.m_VelocitySet = in_stack_19[0x81];
      emitParams.m_AxisOfRotationSet = in_stack_19[0x82];
      emitParams.m_RotationSet = in_stack_19[0x83];
      emitParams.m_AngularVelocitySet = in_stack_19[0x84];
      emitParams.m_StartSizeSet = in_stack_19[0x85];
      emitParams.m_StartColorSet = in_stack_19[0x86];
      emitParams.m_RandomSeedSet = in_stack_19[0x87];
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_3
                (this_00,emitParams,count,in_stack_29);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Update
               (RotatingShieldLine *this,MethodInfo *method)

{
  this_00 = (this->fields).lineTransform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_2
              (this_00,(this->fields).lineRotationSpeed.x,(this->fields).lineRotationSpeed.y,
               (this->fields).lineRotationSpeed.z,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* RotatingShieldLine() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine__ctor
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  (this->fields).positions = pVVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

