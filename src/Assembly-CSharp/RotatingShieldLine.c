
/* Void CreatePoints() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_CreatePoints
               (RotatingShieldLine *this,MethodInfo *method)

{
  index = 0;
  fStack_1 = 0.0;
  iVar2 = (this->fields).segments;
  if (iVar2 != -1 && -1 < iVar2 + 1) {
    do {
      dVar3 = (double)(fStack_1 * _UNK_?);
      func_?();
      dVar4 = (double)(fStack_1 * _UNK_?);
      func_?();
      fVar5 = (this->fields).radius;
      this_00 = (this->fields).line;
      if (this_00 == (LineRenderer *)0x0) {
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      position.y = (float)dVar4 * fVar5;
      position.x = (float)dVar3 * fVar5;
      position.z = fVar5 * 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (this_00,index,position,(MethodInfo *)0x0);
      fVar7 = _UNK_?;
      if ((index % ((this->fields).segments / 3) == 0) && ((this->fields).currIndex < 3)) {
        iVar2 = (this->fields).currIndex;
        (this->fields).currIndex = iVar2 + 1;
        if ((this->fields).positions == (Vector3__Array *)0x0) goto code_?;
        func_?(iVar2,CONCAT44((float)dVar4 * fVar5 * fVar7,(float)dVar3 * fVar5 * fVar7),
                        fVar5 * 0.0 * fVar7);
      }
      index = index + 1;
      fStack_1 = _UNK_? / (float)(this->fields).segments + fStack_1;
    } while (index < (this->fields).segments + 1);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_Initialize
               (RotatingShieldLine *this,MethodInfo *method)

{
  func_?();
  index = 0;
  fStack_1 = 0.0;
  iVar2 = (this->fields).segments;
  if (iVar2 != -1 && -1 < iVar2 + 1) {
    do {
      dVar3 = (double)(fStack_1 * _UNK_?);
      func_?();
      dVar4 = (double)(fStack_1 * _UNK_?);
      func_?();
      fVar5 = (this->fields).radius;
      this_00 = (this->fields).line;
      if (this_00 == (LineRenderer *)0x0) goto code_?;
      position.y = (float)dVar4 * fVar5;
      position.x = (float)dVar3 * fVar5;
      position.z = fVar5 * _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                (this_00,index,position,(MethodInfo *)0x0);
      if ((index % ((this->fields).segments / 3) == 0) && ((this->fields).currIndex < 3)) {
        (this->fields).currIndex = (this->fields).currIndex + 1;
        if ((this->fields).positions == (Vector3__Array *)0x0) goto code_?;
        func_?();
      }
      index = index + 1;
      fStack_1 = _UNK_? / (float)(this->fields).segments + fStack_1;
    } while (index < (this->fields).segments + 1);
  }
  pVVar6 = (this->fields).positions;
  uStack_7 = 0;
  if (pVVar6 != (Vector3__Array *)0x0) {
    iStack_8 = 0;
    do {
      if ((int)pVVar6->max_length <= (int)uStack_7) {
        (this->fields).recreatOrbs = 0;
        return;
      }
      func_?();
      pVVar6 = (this->fields).positions;
      if (pVVar6 == (Vector3__Array *)0x0) break;
      if (pVVar6->max_length <= uStack_7) goto code_?;
      value_00.z = *(float *)((int)&pVVar6->vector[0].z + iStack_8);
      value_00._0_8_ = *(undefined8 *)((int)&pVVar6->vector[0].x + iStack_8);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_position
                ((ParticleSystem_EmitParams *)&stack0xffffff34,value_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_velocity
                ((ParticleSystem_EmitParams *)&stack0xffffff34,
                 TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startSize
                ((ParticleSystem_EmitParams *)&stack0xffffff34,0.3,(MethodInfo *)0x0);
      fVar9 = (float10)func_?();
      fVar10 = (float10)func_?();
      fVar11 = (float10)func_?();
      fVar12 = (float10)func_?();
      uStack_13 = (undefined1)(int)fVar12;
      uVar14 = CONCAT21((short)(int)fVar11,(char)(int)fVar10) & 0xffff;
      this_02 = (ParticleSystem_EmitParams *)&stack0xffffff34;
      uVar15 = CONCAT13(uStack_13,
                        CONCAT12((char)(uVar14 >> 8),CONCAT11((char)uVar14,(char)(int)fVar9)));
      uVar16 = 0;
      puVar17 = &UNK_?;
      value.r = 0;
      value.g = 0;
      value.b = 0;
      value.a = 0;
      value.rgba = uVar15;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startColor(this_02,value,in_stack_18);
      this_03 = (ParticleSystem_EmitParams *)&stack0xffffff34;
      uVar19 = 0;
      uVar20 = 0x47c35000;
      in_stack_18 = (MethodInfo *)&UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startLifetime(this_03,100000.0,(MethodInfo *)0x0);
      this_01 = (this->fields).orbSpawner;
      if (this_01 == (ParticleSystem *)0x0) break;
      count = 0;
      uVar21 = 1;
      puVar22 = (undefined4 *)&stack0xffffff34;
      puVar23 = (undefined4 *)&stack0xfffffdf0;
      for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar23 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar23 = puVar23 + 1;
      }
      emitParams.m_Particle.m_ParentRandomSeed = (uint32_t)puVar17;
      auVar24 = in_stack_25._0_12_;
      auVar26 = in_stack_25._12_12_;
      auVar27 = in_stack_25._24_12_;
      auVar28 = in_stack_25._36_12_;
      auVar29 = in_stack_25._48_12_;
      auVar30 = in_stack_25._60_12_;
      auVar31 = in_stack_25._72_12_;
      auVar32 = in_stack_25._84_12_;
      uVar33 = in_stack_25._96_8_;
      emitParams.m_Particle.m_Position.x = (float)auVar24._0_4_;
      emitParams.m_Particle.m_Position.y = (float)auVar24._4_4_;
      emitParams.m_Particle.m_Position.z = (float)auVar24._8_4_;
      emitParams.m_Particle.m_Velocity.x = (float)auVar26._0_4_;
      emitParams.m_Particle.m_Velocity.y = (float)auVar26._4_4_;
      emitParams.m_Particle.m_Velocity.z = (float)auVar26._8_4_;
      emitParams.m_Particle.m_AnimatedVelocity.x = (float)auVar27._0_4_;
      emitParams.m_Particle.m_AnimatedVelocity.y = (float)auVar27._4_4_;
      emitParams.m_Particle.m_AnimatedVelocity.z = (float)auVar27._8_4_;
      emitParams.m_Particle.m_InitialVelocity.x = (float)auVar28._0_4_;
      emitParams.m_Particle.m_InitialVelocity.y = (float)auVar28._4_4_;
      emitParams.m_Particle.m_InitialVelocity.z = (float)auVar28._8_4_;
      emitParams.m_Particle.m_AxisOfRotation.x = (float)auVar29._0_4_;
      emitParams.m_Particle.m_AxisOfRotation.y = (float)auVar29._4_4_;
      emitParams.m_Particle.m_AxisOfRotation.z = (float)auVar29._8_4_;
      emitParams.m_Particle.m_Rotation.x = (float)auVar30._0_4_;
      emitParams.m_Particle.m_Rotation.y = (float)auVar30._4_4_;
      emitParams.m_Particle.m_Rotation.z = (float)auVar30._8_4_;
      emitParams.m_Particle.m_AngularVelocity.x = (float)auVar31._0_4_;
      emitParams.m_Particle.m_AngularVelocity.y = (float)auVar31._4_4_;
      emitParams.m_Particle.m_AngularVelocity.z = (float)auVar31._8_4_;
      emitParams.m_Particle.m_StartSize.x = (float)auVar32._0_4_;
      emitParams.m_Particle.m_StartSize.y = (float)auVar32._4_4_;
      emitParams.m_Particle.m_StartSize.z = (float)auVar32._8_4_;
      emitParams.m_Particle.m_StartColor.rgba = (int)uVar33;
      emitParams.m_Particle.m_StartColor.r = (char)((ulonglong)uVar33 >> 0x20);
      emitParams.m_Particle.m_StartColor.g = (char)((ulonglong)uVar33 >> 0x28);
      emitParams.m_Particle.m_StartColor.b = (char)((ulonglong)uVar33 >> 0x30);
      emitParams.m_Particle.m_StartColor.a = (char)((ulonglong)uVar33 >> 0x38);
      emitParams.m_Particle.m_RandomSeed = in_stack_25._104_4_;
      emitParams.m_Particle.m_Lifetime = (float)this_02;
      emitParams.m_Particle.m_StartLifetime = (float)uVar15;
      emitParams.m_Particle.m_MeshIndex = uVar16;
      emitParams.m_Particle.m_EmitAccumulator0 = (float)in_stack_18;
      emitParams.m_Particle.m_EmitAccumulator1 = (float)this_03;
      emitParams.m_Particle.m_Flags = uVar20;
      emitParams.m_PositionSet = (char)uVar19;
      emitParams.m_VelocitySet = (char)((uint)uVar19 >> 8);
      emitParams.m_AxisOfRotationSet = (char)((uint)uVar19 >> 0x10);
      emitParams.m_RotationSet = (char)((uint)uVar19 >> 0x18);
      emitParams.m_AngularVelocitySet = (char)in_stack_34;
      emitParams.m_StartSizeSet = (char)((uint)in_stack_34 >> 8);
      emitParams.m_StartColorSet = (char)((uint)in_stack_34 >> 0x10);
      emitParams.m_RandomSeedSet = (char)((uint)in_stack_34 >> 0x18);
      emitParams.m_StartLifetimeSet = (char)uVar21;
      emitParams.m_MeshIndexSet = (char)((uint)uVar21 >> 8);
      emitParams.m_ApplyShapeToPosition = (char)((uint)uVar21 >> 0x10);
      emitParams._147_1_ = (char)((uint)uVar21 >> 0x18);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_3
                (this_01,emitParams,count,in_stack_35);
      uStack_7 = uStack_7 + 1;
      pVVar6 = (this->fields).positions;
      iStack_8 = iStack_8 + 0xc;
    } while (pVVar6 != (Vector3__Array *)0x0);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Void OnSetVisible() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine_OnSetVisible
               (RotatingShieldLine *this,MethodInfo *method)

{
  if ((this->fields).recreatOrbs != 0) {
    iStack_1 = 0;
    fStack_2 = 0.0;
    do {
      auVar3._0_8_ = (double)(fStack_2 * _UNK_?);
      auVar3._8_8_ = 0;
      func_?();
      dVar4 = (double)(fStack_2 * _UNK_?);
      func_?();
      fVar5 = (this->fields).radius;
      fVar6 = fVar5 * _UNK_?;
      fStack_2 = fStack_2 + _UNK_?;
      func_?();
      value_00.y = (float)dVar4 * fVar5 * _UNK_?;
      value_00.x = (float)auVar3._0_8_ * fVar5 * _UNK_?;
      value_00.z = fVar6 * _UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_position
                ((ParticleSystem_EmitParams *)&stack0xffffff10,value_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_velocity
                ((ParticleSystem_EmitParams *)&stack0xffffff10,
                 TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startSize
                ((ParticleSystem_EmitParams *)&stack0xffffff10,0.3,(MethodInfo *)0x0);
      fVar7 = (float10)func_?();
      fVar8 = (float10)func_?();
      fVar9 = (float10)func_?();
      fVar10 = (float10)func_?();
      uStack_11 = (undefined1)(int)fVar10;
      uVar12 = CONCAT21((short)(int)fVar9,(char)(int)fVar8) & 0xffff;
      this_01 = (ParticleSystem_EmitParams *)&stack0xffffff10;
      uVar13 = CONCAT13(uStack_11,
                        CONCAT12((char)(uVar12 >> 8),CONCAT11((char)uVar12,(char)(int)fVar7)));
      uVar14 = 0;
      puVar15 = &UNK_?;
      value.r = 0;
      value.g = 0;
      value.b = 0;
      value.a = 0;
      value.rgba = uVar13;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startColor(this_01,value,in_stack_16);
      this_02 = (ParticleSystem_EmitParams *)&stack0xffffff10;
      uVar17 = 0;
      uVar18 = 0x47c35000;
      in_stack_16 = (MethodInfo *)&UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmitParams::
      ParticleSystem_EmitParams_set_startLifetime(this_02,100000.0,(MethodInfo *)0x0);
      this_00 = (this->fields).orbSpawner;
      if (this_00 == (ParticleSystem *)0x0) {
        func_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      count = 0;
      uVar20 = 1;
      puVar21 = (undefined4 *)&stack0xffffff10;
      puVar22 = (undefined4 *)&stack0xfffffdc8;
      for (iVar23 = 0x24; iVar23 != 0; iVar23 = iVar23 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      emitParams.m_Particle.m_ParentRandomSeed = (uint32_t)puVar15;
      auVar24 = in_stack_25._0_12_;
      auVar26 = in_stack_25._12_12_;
      auVar27 = in_stack_25._24_12_;
      auVar28 = in_stack_25._36_12_;
      auVar29 = in_stack_25._48_12_;
      auVar30 = in_stack_25._60_12_;
      auVar31 = in_stack_25._72_12_;
      auVar32 = in_stack_25._84_12_;
      uVar33 = in_stack_25._96_8_;
      emitParams.m_Particle.m_Position.x = (float)auVar24._0_4_;
      emitParams.m_Particle.m_Position.y = (float)auVar24._4_4_;
      emitParams.m_Particle.m_Position.z = (float)auVar24._8_4_;
      emitParams.m_Particle.m_Velocity.x = (float)auVar26._0_4_;
      emitParams.m_Particle.m_Velocity.y = (float)auVar26._4_4_;
      emitParams.m_Particle.m_Velocity.z = (float)auVar26._8_4_;
      emitParams.m_Particle.m_AnimatedVelocity.x = (float)auVar27._0_4_;
      emitParams.m_Particle.m_AnimatedVelocity.y = (float)auVar27._4_4_;
      emitParams.m_Particle.m_AnimatedVelocity.z = (float)auVar27._8_4_;
      emitParams.m_Particle.m_InitialVelocity.x = (float)auVar28._0_4_;
      emitParams.m_Particle.m_InitialVelocity.y = (float)auVar28._4_4_;
      emitParams.m_Particle.m_InitialVelocity.z = (float)auVar28._8_4_;
      emitParams.m_Particle.m_AxisOfRotation.x = (float)auVar29._0_4_;
      emitParams.m_Particle.m_AxisOfRotation.y = (float)auVar29._4_4_;
      emitParams.m_Particle.m_AxisOfRotation.z = (float)auVar29._8_4_;
      emitParams.m_Particle.m_Rotation.x = (float)auVar30._0_4_;
      emitParams.m_Particle.m_Rotation.y = (float)auVar30._4_4_;
      emitParams.m_Particle.m_Rotation.z = (float)auVar30._8_4_;
      emitParams.m_Particle.m_AngularVelocity.x = (float)auVar31._0_4_;
      emitParams.m_Particle.m_AngularVelocity.y = (float)auVar31._4_4_;
      emitParams.m_Particle.m_AngularVelocity.z = (float)auVar31._8_4_;
      emitParams.m_Particle.m_StartSize.x = (float)auVar32._0_4_;
      emitParams.m_Particle.m_StartSize.y = (float)auVar32._4_4_;
      emitParams.m_Particle.m_StartSize.z = (float)auVar32._8_4_;
      emitParams.m_Particle.m_StartColor.rgba = (int)uVar33;
      emitParams.m_Particle.m_StartColor.r = (char)((ulonglong)uVar33 >> 0x20);
      emitParams.m_Particle.m_StartColor.g = (char)((ulonglong)uVar33 >> 0x28);
      emitParams.m_Particle.m_StartColor.b = (char)((ulonglong)uVar33 >> 0x30);
      emitParams.m_Particle.m_StartColor.a = (char)((ulonglong)uVar33 >> 0x38);
      emitParams.m_Particle.m_RandomSeed = in_stack_25._104_4_;
      emitParams.m_Particle.m_Lifetime = (float)this_01;
      emitParams.m_Particle.m_StartLifetime = (float)uVar13;
      emitParams.m_Particle.m_MeshIndex = uVar14;
      emitParams.m_Particle.m_EmitAccumulator0 = (float)in_stack_16;
      emitParams.m_Particle.m_EmitAccumulator1 = (float)this_02;
      emitParams.m_Particle.m_Flags = uVar18;
      emitParams.m_PositionSet = (char)uVar17;
      emitParams.m_VelocitySet = (char)((uint)uVar17 >> 8);
      emitParams.m_AxisOfRotationSet = (char)((uint)uVar17 >> 0x10);
      emitParams.m_RotationSet = (char)((uint)uVar17 >> 0x18);
      emitParams.m_AngularVelocitySet = (char)in_stack_34;
      emitParams.m_StartSizeSet = (char)((uint)in_stack_34 >> 8);
      emitParams.m_StartColorSet = (char)((uint)in_stack_34 >> 0x10);
      emitParams.m_RandomSeedSet = (char)((uint)in_stack_34 >> 0x18);
      emitParams.m_StartLifetimeSet = (char)uVar20;
      emitParams.m_MeshIndexSet = (char)((uint)uVar20 >> 8);
      emitParams.m_ApplyShapeToPosition = (char)((uint)uVar20 >> 0x10);
      emitParams._147_1_ = (char)((uint)uVar20 >> 0x18);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_3
                (this_00,emitParams,count,in_stack_35);
      iStack_1 = iStack_1 + 1;
    } while (iStack_1 < 3);
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RotatingShieldLine() */

void Assembly-CSharp.dll::RotatingShieldLine::RotatingShieldLine__ctor
               (RotatingShieldLine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  (this->fields).positions = pVVar1;
  func_?(&(this->fields).positions,pVVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

