
/* Single GetDeltaTime() */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetDeltaTime(DynamicLODDistance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
    iVar4 = (this->fields).prevTick;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      (this->fields).prevTick = iVar3;
      return (float)(iVar5 - iVar4) / 1000.0;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float)(*pcVar6)();
  return fVar7;
}


/* Single GetTargetVolume(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetTargetVolume(DynamicLODDistance *this,float numObjectsMaxObjectsRatio,MethodInfo *method)

{
  fVar1 = (this->fields).maxVolume;
  if (numObjectsMaxObjectsRatio != 0.0) {
    fVar1 = fVar1 / numObjectsMaxObjectsRatio;
  }
  return fVar1;
}


/* Void MathTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_MathTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base_radius__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_VolumeToRadius__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle(10.0,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Base_radius__,pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle(3141.5928,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Area__,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(0x447a0000,0x3eaaaaab);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle(fVar3,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_VolumeToRadius__,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(0x447a0000,0x3eaaaaab);
  if (ABS(fVar3 - 10.0) <= 1e-05) {
    return;
  }
  uVar4 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar4);
  pSVar2 = (String *)func_?(&StringLiteral_Failed_math_test);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar2,(MethodInfo *)0x0);
  uVar4 = func_?(&MethodInfo__DynamicLODDistance__MathTest__);
  FUN_?(this,uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single RadiusToVolume(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_RadiusToVolume(float radius,MethodInfo *method)

{
  return radius * 3.1415927 * radius * radius;
}


/* Void Test() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_Test(MethodInfo *method)

{
  DynamicLODDistance_MathTest((MethodInfo *)0x0);
  DynamicLODDistance_UpdateTest((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DynamicLODDistance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DeltaTime__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (DynamicLODDistance *)FUN_?(TypeInfo__DynamicLODDistance);
  iVar1 = 0;
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  if (this == (DynamicLODDistance *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    value = DynamicLODDistance_GetDeltaTime(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle(value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_DeltaTime__,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void TickTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_TickTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DynamicLODDistance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DeltaTime__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (DynamicLODDistance *)FUN_?(TypeInfo__DynamicLODDistance);
  iVar1 = 0;
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  if (this == (DynamicLODDistance *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    value = DynamicLODDistance_GetDeltaTime(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle(value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_DeltaTime__,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void Update(Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_Update(DynamicLODDistance *this,int32_t numObjects,MethodInfo *method)

{
  fVar1 = (float)numObjects / (float)(this->fields).maxNumObjects;
  fVar2 = DynamicLODDistance_GetDeltaTime(this,(MethodInfo *)0x0);
  fVar3 = (this->fields).maxVolume;
  if (0.0 < fVar1) {
    fVar3 = fVar3 / fVar1;
  }
  else {
    fVar1 = (this->fields).currentRadius;
    fVar3 = fVar1 * 3.1415927 * fVar1 * fVar1 + fVar2 * (this->fields).volumePercentChangePrSecond * fVar3;
  }
  fVar2 = (float)FUN_?(fVar3 / 3.1415927,0x3eaaaaab);
  fVar3 = (this->fields).minRadius;
  if ((fVar3 <= fVar2) && (fVar3 = (this->fields).maxRadius, fVar2 <= fVar3)) {
    (this->fields).currentRadius = fVar2;
    return;
  }
  (this->fields).currentRadius = fVar3;
  return;
}


/* Void UpdateTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_UpdateTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DynamicLODDistance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DynamicLODDistance *)FUN_?(TypeInfo__DynamicLODDistance);
  DynamicLODDistance__ctor(this_00,1.0,100.0,10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) && (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) && (iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0), this_00 != (DynamicLODDistance *)0x0)) {
    (this_00->fields).prevTick = iVar2;
    DynamicLODDistance_Update(this_00,0,(MethodInfo *)0x0);
    lVar3 = 6;
    lVar4 = 6;
    do {
      DynamicLODDistance_Update(this_00,9,(MethodInfo *)0x0);
      fVar5 = (this_00->fields).currentRadius;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pNVar6 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = mscorlib.dll::System::Number::Number_FormatSingle(fVar5,(String *)0x0,pNVar6,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Radius__,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    do {
      DynamicLODDistance_Update(this_00,0xb,(MethodInfo *)0x0);
      fVar5 = (this_00->fields).currentRadius;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pNVar6 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = mscorlib.dll::System::Number::Number_FormatSingle(fVar5,(String *)0x0,pNVar6,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_Radius__,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar7,(MethodInfo *)0x0);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Single VolumeToRadius(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_VolumeToRadius(float volume,MethodInfo *method)

{
  auVar1._0_4_ = volume / 3.1415927;
  auVar1._4_60_ = in_register_00001204;
  auVar2._0_12_ = ZEXT812(0x3eaaaaab);
  auVar2._16_48_ = in_ZMM1._16_48_;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar2._0_12_;
  auVar4 = in_ZMM2._0_16_;
  if (iRam_? != 0) {
    auVar3 = vpunpckldq_avx(auVar3,auVar1._0_16_);
    auVar5 = (undefined1  [16])0x0;
    uVar6 = 0;
    fVar7 = auVar3._0_4_;
    fVar8 = ABS(fVar7);
    fVar9 = ABS(auVar1._0_4_);
    uVar10 = auVar3._0_8_;
    if ((uint)fVar8 < 0x7f800000) {
      if ((uint)fVar8 < 0x3f800001) {
        if (fVar8 == 0.0) {
          if ((uint)fVar9 < 0x7f800001) {
            return 1.0;
          }
          if (0x7fbfffff < (uint)fVar9) {
            return 1.0;
          }
          fVar8 = (float)FUN_?(fVar9,(uint)fVar9 | 0x400000,(uint)fVar9 | 0x400000,3);
          return fVar8;
        }
        method = (MethodInfo *)(ulonglong)(uint)fVar7;
        if (fVar7 == 1.0) {
          if ((uint)fVar9 < 0x7f800001) {
            return auVar1._0_4_;
          }
          fVar8 = (float)FUN_?(fVar9,(uint)auVar1._0_4_ | 0x400000,(uint)auVar1._0_4_ | 0x400000,3);
          return fVar8;
        }
      }
      if ((uint)fVar9 < 0x7f800000) {
        auVar11 = vcvtps2pd_avx(auVar3);
        dVar12 = auVar11._0_8_;
        if ((int)auVar1._0_4_ < 0x3f880000) {
          if ((int)auVar1._0_4_ < 1) {
            if (fVar9 == 0.0) {
              fVar8 = fVar7;
              if ((int)fVar7 < 0) {
                fVar8 = INFINITY;
              }
              fVar9 = 0.0;
              if ((int)fVar7 < 0) {
                fVar9 = INFINITY;
              }
              uVar13 = 0;
              if (0 < (int)fVar7) {
                fVar8 = 0.0;
              }
              if (((uint)fVar7 & 0x7f800000) < 0x4b000001) {
                auVar3 = vroundss_avx(auVar4,auVar3,8);
                uVar13 = 0;
                if (auVar3._0_4_ == fVar7) {
                  if (((int)ROUND(fVar7) & 1U) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (uint)auVar1._0_4_ & 0x80000000;
                  }
                }
              }
              fVar8 = (float)(uVar13 | (uint)fVar8);
              if (fVar9 == 0.0) {
                return fVar8;
              }
              fVar8 = (float)FUN_?(fVar8,uVar10,fVar8,2);
              return fVar8;
            }
            if (((uint)fVar7 & 0x7f800000) < 0x4b000001) {
              auVar3 = vroundss_avx(auVar4,auVar3,8);
              if (auVar3._0_4_ != fVar7) {
                fVar8 = (float)FUN_?(fVar9,0xffc00000,0xffc00000,6);
                return fVar8;
              }
              if (((int)ROUND(fVar7) & 1U) != 0) {
                auVar5 = SUB6416(ZEXT464(0x80000000),0);
              }
            }
          }
          uVar6 = auVar5._0_8_;
          auVar3 = vpshufd_avx(auVar11,0xee);
          dVar14 = auVar3._0_8_ - 1.0;
          method = (MethodInfo *)ABS(dVar14);
          if (method < (MethodInfo *)0x3fb0000000000000) {
            vpshufd_avx(auVar5,0x44);
            dVar15 = dVar14 / (dVar14 + 2.0);
            dVar16 = dVar15 + dVar15;
            dVar17 = dVar16 * dVar16;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = dVar17;
            auVar3 = vpshufd_avx(auVar4,0x44);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = dVar17 * dVar17 * dVar16 * dVar17;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = dVar16 * dVar17;
            auVar4 = vunpcklpd_avx(auVar11,auVar5);
            auVar18._0_8_ = auVar4._0_8_ * (auVar3._0_8_ * 0.012500000003771751 + 0.08333333333333179);
            auVar18._8_8_ = auVar4._8_8_ * (auVar3._8_8_ * 0.0004348877777076146 + 0.0022321399879194482);
            auVar3 = vpshufd_avx(auVar18,0xee);
            auVar19._8_8_ = 0;
            auVar19._0_8_ = dVar15 * dVar14;
            auVar4 = vpshufd_avx(auVar19,0xee);
            uVar13 = auVar4._0_4_;
            dVar14 = dVar14 + ((auVar3._0_8_ + auVar18._0_8_) - dVar15 * dVar14);
            goto code_?;
          }
        }
        auVar3 = vpshufd_avx(auVar11,0xee);
        auVar3 = vpand_avx(auVar3,_UNK_?);
        uVar13 = (auVar3._4_4_ >> 0xc) + (uint)((auVar3._0_8_ >> 0x2b & 1) != 0);
        auVar4 = vpor_avx(auVar3,_UNK_?);
        auVar3 = vpshufd_avx(auVar4,0xee);
        auVar3 = vpsrlq_avx(auVar3,0x34);
        auVar3 = vpsubq_avx(auVar3,_UNK_?);
        auVar3 = vcvtdq2pd_avx(auVar3);
        dVar14 = ((double)((ulonglong)(uVar13 | 0x3fe00) << 0x2c) - auVar4._0_8_) * *(double *)(&UNK_? + (ulonglong)uVar13 * 8);
        dVar12 = dVar12 * ((auVar3._0_8_ * 0.6931471805599453 + *(double *)(&UNK_? + (ulonglong)uVar13 * 8)) - dVar14 * (dVar14 * (dVar14 * 0.3333333333333333 + 0.5) + 1.0));
        if (88.72283935546875 < dVar12) {
          fVar8 = (float)FUN_?(&UNK_?,0x7f800000,SUB168(ZEXT416(0x7f800000),0) | uVar6,9);
          return fVar8;
        }
        if (-103.2789306640625 < dVar12) {
          auVar20._0_8_ = dVar12 * 92.33248261689366;
          auVar20._8_8_ = 0;
          auVar4 = vcvtpd2dq_avx(auVar20);
          auVar3 = vcvtdq2pd_avx(auVar4);
          dVar12 = -(auVar3._0_8_ * 0.010830424696249145) + dVar12;
          auVar21._0_8_ = *(double *)(&UNK_? + (ulonglong)(auVar4._0_4_ & 0x3f) * 8) * dVar12 * (dVar12 * (dVar12 * 0.16666666666666666 + 0.5) + 1.0) + *(double *)(&UNK_? + (ulonglong)(auVar4._0_4_ & 0x3f) * 8);
          auVar21._8_8_ = 0;
          auVar3 = vpsrad_avx(auVar4,6);
          auVar3 = vpsllq_avx(auVar3,0x34);
          auVar3 = vpaddq_avx(auVar3,auVar21);
          return (float)((uint)(float)auVar3._0_8_ | (uint)uVar6);
        }
        fVar8 = (float)FUN_?(&UNK_?,method,uVar6,7);
        return fVar8;
      }
      if (fVar8 == 0.0) {
        return 1.0;
      }
      method = (MethodInfo *)(ulonglong)(uint)fVar7;
      if (auVar1._0_4_ == INFINITY) {
        if (-1 < (int)fVar7) {
          return INFINITY;
        }
        return 0.0;
      }
      if (auVar1._0_4_ == -INFINITY) {
        uVar13 = 0;
        fVar8 = fVar7;
        if ((int)fVar7 < 0) {
          fVar8 = 0.0;
        }
        if (0 < (int)fVar7) {
          fVar8 = INFINITY;
        }
        if (((uint)fVar7 & 0x7f800000) < 0x4b000001) {
          auVar3 = vroundss_avx(auVar4,auVar3,8);
          uVar13 = 0;
          if ((auVar3._0_4_ == fVar7) && (uVar13 = 0x80000000, ((int)ROUND(fVar7) & 1U) == 0)) {
            uVar13 = 0;
          }
        }
        return (float)(uVar13 | (uint)fVar8);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar8) {
        if (0x7f800000 < (uint)fVar9) {
          if (auVar1._0_4_ != -NAN) {
            fVar8 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,uVar10,(uint)auVar1._0_4_ | 0x400000,5);
            return fVar8;
          }
          fVar8 = (float)FUN_?(fVar9,uVar10,(uint)fVar7 | 0x400000,5);
          return fVar8;
        }
        if (auVar1._0_4_ == 1.0) {
          if (0x7fbfffff < (uint)fVar8) {
            return 1.0;
          }
          fVar8 = (float)FUN_?(fVar9,0x3f800000,0x3f800000,4);
          return fVar8;
        }
        fVar8 = (float)FUN_?(uVar10,uVar10,(uint)fVar7 | 0x400000,4);
        return fVar8;
      }
      if ((uint)fVar9 < 0x7f800001) {
        if (fVar9 == 1.0) {
          return 1.0;
        }
        if (-1 < (int)fVar7) {
          if (0x3f7fffff < (uint)fVar9) {
            return INFINITY;
          }
          return 0.0;
        }
        fVar8 = 0.0;
        if ((uint)fVar9 < 0x3f800000) {
          fVar8 = INFINITY;
        }
        return fVar8;
      }
    }
    fVar8 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,method,(uint)auVar1._0_4_ | 0x400000,3);
    return fVar8;
  }
  auVar2._12_4_ = in_register_00001204._0_4_;
  auVar22._12_52_ = auVar2._12_52_;
  auVar22._0_12_ = ZEXT812(0x3eaaaaab);
  auVar23._8_56_ = auVar22._8_56_;
  fVar9 = auVar2._0_4_;
  auVar23._0_8_ = CONCAT44(auVar1._0_4_,fVar9);
  uVar13 = 0;
  fVar8 = ABS(auVar1._0_4_);
  auVar3 = auVar23._0_16_;
  if (0x7f7fffff < (uint)fVar9) {
    if (0x7f800000 < (uint)fVar9) {
      if (0x7f800000 < (uint)fVar8) {
        if (auVar1._0_4_ != -NAN) {
          fVar8 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,auVar23._0_8_,in_R8,5);
          return fVar8;
        }
        fVar8 = (float)FUN_?(fVar8,auVar23._0_8_,in_R8,5);
        return fVar8;
      }
      if (auVar1._0_4_ == 1.0) {
        if (0x7fbfffff < (uint)fVar9) {
          return 1.0;
        }
        fVar8 = (float)FUN_?(fVar8,0x3f800000,in_R8,4);
        return fVar8;
      }
      fVar8 = (float)FUN_?(fVar8,auVar23._0_8_,in_R8,4);
      return fVar8;
    }
    if ((uint)fVar8 < 0x7f800001) {
      if (fVar8 == 1.0) {
        return 1.0;
      }
      if (0x3f7fffff < (uint)fVar8) {
        return INFINITY;
      }
      return 0.0;
    }
code_?:
    fVar8 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,method,in_R8,3);
    return fVar8;
  }
  if ((uint)fVar9 < 0x3f800001) {
    if (fVar9 == 0.0) {
      if ((uint)fVar8 < 0x7f800001) {
        return 1.0;
      }
      if (0x7fbfffff < (uint)fVar8) {
        return 1.0;
      }
      fVar8 = (float)FUN_?(fVar8,(uint)fVar8 | 0x400000,in_R8,3);
      return fVar8;
    }
    method = (MethodInfo *)0x3eaaaaab;
    if (fVar9 == 1.0) {
      if ((uint)ABS(auVar1._0_4_) < 0x7f800001) {
        return auVar1._0_4_;
      }
      fVar8 = (float)FUN_?(fVar8,(uint)auVar1._0_4_ | 0x400000,in_R8,3);
      return fVar8;
    }
  }
  if (0x7f7fffff < (uint)fVar8) {
    if (fVar9 == 0.0) {
      return 1.0;
    }
    method = (MethodInfo *)0x3eaaaaab;
    if (auVar1._0_4_ == INFINITY) {
      return INFINITY;
    }
    if (auVar1._0_4_ == -INFINITY) {
      uVar13 = 0;
      if (((uint)fVar9 & 0x7f800000) < 0x4b000001) {
        if (uRam_? < 2) {
          fVar8 = (float)(int)ROUND(fVar9);
        }
        else {
          auVar3 = roundss(auVar4,auVar3,8);
          fVar8 = auVar3._0_4_;
        }
        uVar13 = 0;
        if ((fVar8 == fVar9) && (uVar13 = 0x80000000, ((int)ROUND(fVar9) & 1U) == 0)) {
          uVar13 = 0;
        }
      }
      return (float)(uVar13 | 0x7f800000);
    }
    goto code_?;
  }
  dVar12 = (double)fVar9;
  dVar14 = (double)auVar1._0_4_;
  uVar24 = (undefined4)((ulonglong)dVar14 >> 0x20);
  if ((int)auVar1._0_4_ < 0x3f880000) {
    if ((int)auVar1._0_4_ < 1) {
      if (fVar8 == 0.0) {
        fVar8 = 0.0;
        if (((uint)fVar9 & 0x7f800000) < 0x4b000001) {
          if (uRam_? < 2) {
            fVar7 = (float)(int)ROUND(fVar9);
          }
          else {
            auVar3 = roundss(auVar4,auVar3,8);
            fVar7 = auVar3._0_4_;
          }
          fVar8 = 0.0;
          if (fVar7 == fVar9) {
            if (((int)ROUND(fVar9) & 1U) == 0) {
              fVar8 = 0.0;
            }
            else {
              fVar8 = (float)((uint)auVar1._0_4_ & 0x80000000);
            }
          }
        }
        return fVar8;
      }
      if (((uint)fVar9 & 0x7f800000) < 0x4b000001) {
        if (uRam_? < 2) {
          fVar7 = (float)(int)ROUND(fVar9);
        }
        else {
          auVar3 = roundss(auVar4,auVar3,8);
          fVar7 = auVar3._0_4_;
        }
        if (fVar7 != fVar9) {
          fVar8 = (float)FUN_?(fVar8,0xffc00000,in_R8,6);
          return fVar8;
        }
        if (((int)ROUND(fVar9) & 1U) != 0) {
          uVar13 = 0x80000000;
        }
      }
    }
    auVar25._8_4_ = SUB84(dVar14,0);
    auVar25._0_8_ = dVar14;
    auVar25._16_48_ = in_ZMM3._16_48_;
    auVar25._12_4_ = uVar24;
    in_ZMM3._8_56_ = auVar25._8_56_;
    in_ZMM3._0_8_ = dVar14 - 1.0;
    method = (MethodInfo *)ABS(in_ZMM3._0_8_);
    if (method < (MethodInfo *)0x3fb0000000000000) {
      dVar17 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + 2.0);
      dVar16 = dVar17 + dVar17;
      dVar14 = dVar16 * dVar16;
      auVar26._8_4_ = SUB84(dVar14,0);
      auVar26._0_8_ = dVar14;
      auVar26._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      dVar14 = in_ZMM3._0_8_ + ((dVar16 * dVar14 * (dVar14 * 0.012500000003771751 + 0.08333333333333179) + dVar14 * dVar14 * dVar16 * dVar14 * (auVar26._8_8_ * 0.0004348877777076146 + 0.0022321399879194482)) - dVar17 * in_ZMM3._0_8_);
      goto code_?;
    }
  }
  auVar27._8_4_ = SUB84(dVar14,0);
  auVar27._0_8_ = dVar14;
  auVar27._12_4_ = uVar24;
  auVar27 = auVar27 & _UNK_?;
  uVar28 = (auVar27._4_4_ >> 0xc) + (uint)((auVar27._0_8_ >> 0x2b & 1) != 0);
  auVar29._4_56_ = in_ZMM3._8_56_;
  auVar29._0_4_ = SUB164(auVar27 | _UNK_?,0xc);
  dVar14 = ((double)((ulonglong)(uVar28 | 0x3fe00) << 0x2c) - SUB168(auVar27 | _UNK_?,0)) * *(double *)(&UNK_? + (ulonglong)uVar28 * 8);
  dVar14 = ((double)(int)(((auVar29._0_8_ & 0xffffffff) >> 0x14) - 0x3ff) * 0.6931471805599453 + *(double *)(&UNK_? + (ulonglong)uVar28 * 8)) - (dVar14 * dVar14 * (dVar14 * 0.3333333333333333 + 0.5) + dVar14);
code_?:
  dVar12 = dVar12 * dVar14;
  if (88.72283935546875 < dVar12) {
    fVar8 = (float)FUN_?(dVar12,0x7f800000,in_R8,9);
    return fVar8;
  }
  if (-103.2789306640625 < dVar12) {
    uVar28 = (uint)(dVar12 * 92.33248261689366);
    dVar12 = dVar12 - (double)(int)uVar28 * 0.010830424696249145;
    return (float)((uint)(float)(double)(((ulonglong)(uint)((int)uVar28 >> 6) << 0x34) + (longlong)((dVar12 * dVar12 * (dVar12 * 0.16666666666666666 + 0.5) + dVar12) * *(double *)(&UNK_? + (ulonglong)(uVar28 & 0x3f) * 8) + *(double *)(&UNK_? + (ulonglong)(uVar28 & 0x3f) * 8))) | uVar13);
  }
  fVar8 = (float)FUN_?(dVar12,method,in_R8,7);
  return fVar8;
}


/* DynamicLODDistance(Single, Single, Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance__ctor(DynamicLODDistance *this,float minRadius,float maxRadius,int32_t maxNumObjects,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).volumePercentChangePrSecond = 0.1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 == (MVGameControllerBase *)0x0) || (this_00 = (pMVar2->fields).game, this_00 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
  (this->fields).prevTick = iVar4;
  if (minRadius <= 0.0) {
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_minRadius____0_0f);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_);
    FUN_?(pEVar6,uVar5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0.0 < maxRadius) {
    if (0 < maxNumObjects) {
      (this->fields).minRadius = minRadius;
      (this->fields).maxNumObjects = maxNumObjects;
      (this->fields).maxRadius = maxRadius;
      (this->fields).currentRadius = minRadius;
      (this->fields).maxVolume = maxRadius * 3.1415927 * maxRadius * maxRadius;
      return;
    }
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_maxNumObjects____0);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_);
    FUN_?(pEVar6,uVar5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = func_?(&TypeInfo__System__Exception);
  pEVar6 = (Exception *)func_?(uVar5);
  pSVar7 = (String *)func_?(&StringLiteral_maxRadius____0_0f);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
  uVar5 = func_?(&MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_);
  FUN_?(pEVar6,uVar5);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

