
/* Single GetDeltaTime() */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetDeltaTime
                (DynamicLODDistance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
    iVar4 = (this->fields).prevTick;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
      iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar2,(MethodInfo *)0x0);
      (this->fields).prevTick = iVar3;
      return (float)(iVar5 - iVar4) / _UNK_?;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float)(*pcVar6)();
  return fVar7;
}


/* Single GetTargetVolume(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetTargetVolume
                (DynamicLODDistance *this,float numObjectsMaxObjectsRatio,MethodInfo *method)

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
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle
                     (_UNK_?,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Base_radius__,pSVar2,(MethodInfo *)0x0);
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
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle
                     (_UNK_?,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Area__,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(_UNK_?,_UNK_?);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = mscorlib.dll::System::Number::Number_FormatSingle
                     (fVar3,(String *)0x0,pNVar1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_VolumeToRadius__,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(_UNK_?,_UNK_?);
  if ((float)((uint)(fVar3 - _UNK_?) & _UNK_?) <= _UNK_?) {
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

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_RadiusToVolume
                (float radius,MethodInfo *method)

{
  return radius * _UNK_? * radius * radius;
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
  DynamicLODDistance__ctor(this,_UNK_?,_UNK_?,10,(MethodInfo *)0x0);
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
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                       (value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_DeltaTime__,pSVar3,(MethodInfo *)0x0);
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
  DynamicLODDistance__ctor(this,_UNK_?,_UNK_?,10,(MethodInfo *)0x0);
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
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = mscorlib.dll::System::Number::Number_FormatSingle
                       (value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_DeltaTime__,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void Update(Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_Update
               (DynamicLODDistance *this,int32_t numObjects,MethodInfo *method)

{
  fVar1 = (float)numObjects / (float)(this->fields).maxNumObjects;
  fVar2 = DynamicLODDistance_GetDeltaTime(this,(MethodInfo *)0x0);
  fVar3 = (this->fields).maxVolume;
  if (0.0 < fVar1) {
    fVar3 = fVar3 / fVar1;
  }
  else {
    fVar1 = (this->fields).currentRadius;
    fVar3 = fVar1 * _UNK_? * fVar1 * fVar1 +
            fVar2 * (this->fields).volumePercentChangePrSecond * fVar3;
  }
  fVar2 = (float)FUN_?(fVar3 / _UNK_?,_UNK_?);
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
  DynamicLODDistance__ctor(this_00,_UNK_?,_UNK_?,10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (this = (pMVar1->fields).game, this != (MVNetworkGame *)0x0)) &&
     (iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this,(MethodInfo *)0x0),
     this_00 != (DynamicLODDistance *)0x0)) {
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
      pNVar6 = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = mscorlib.dll::System::Number::Number_FormatSingle
                         (fVar5,(String *)0x0,pNVar6,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Radius__,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar7,(MethodInfo *)0x0);
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
      pNVar6 = mscorlib.dll::System::Globalization::NumberFormatInfo::
               NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar7 = mscorlib.dll::System::Number::Number_FormatSingle
                         (fVar5,(String *)0x0,pNVar6,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Radius__,pSVar7,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar7,(MethodInfo *)0x0);
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

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_VolumeToRadius
                (float volume,MethodInfo *method)

{
  auVar1._0_4_ = volume / _UNK_?;
  auVar1._4_60_ = in_register_00001204;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = _UNK_?;
  auVar3._16_48_ = in_ZMM1._16_48_;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar2;
  auVar5 = in_ZMM2._0_16_;
  if (iRam_? != 0) {
    auVar4 = vpunpckldq_avx(auVar4,auVar1._0_16_);
    auVar6 = (undefined1  [16])0x0;
    uVar7 = 0;
    fVar8 = auVar4._0_4_;
    fVar9 = ABS(fVar8);
    fVar10 = ABS(auVar1._0_4_);
    uVar11 = auVar4._0_8_;
    if ((uint)fVar9 < 0x7f800000) {
      if ((uint)fVar9 < 0x3f800001) {
        if (fVar9 == 0.0) {
          if ((uint)fVar10 < 0x7f800001) {
            return 1.0;
          }
          if (0x7fbfffff < (uint)fVar10) {
            return 1.0;
          }
          fVar9 = (float)FUN_?(fVar10,(uint)fVar10 | 0x400000,(uint)fVar10 | 0x400000,
                                       _UNK_?);
          return fVar9;
        }
        method = (MethodInfo *)(ulonglong)(uint)fVar8;
        if (fVar8 == 1.0) {
          if ((uint)fVar10 < 0x7f800001) {
            return auVar1._0_4_;
          }
          fVar9 = (float)FUN_?(fVar10,(uint)auVar1._0_4_ | 0x400000,
                                       (uint)auVar1._0_4_ | 0x400000,_UNK_?);
          return fVar9;
        }
      }
      if ((uint)fVar10 < 0x7f800000) {
        auVar12 = vcvtps2pd_avx(auVar4);
        dVar13 = auVar12._0_8_;
        if ((int)auVar1._0_4_ < 0x3f880000) {
          if ((int)auVar1._0_4_ < 1) {
            if (fVar10 == 0.0) {
              fVar9 = fVar8;
              if ((int)fVar8 < 0) {
                fVar9 = INFINITY;
              }
              fVar10 = 0.0;
              if ((int)fVar8 < 0) {
                fVar10 = INFINITY;
              }
              uVar14 = 0;
              if (0 < (int)fVar8) {
                fVar9 = 0.0;
              }
              if (((uint)fVar8 & 0x7f800000) < 0x4b000001) {
                auVar4 = vroundss_avx(auVar5,auVar4,8);
                uVar14 = 0;
                if (auVar4._0_4_ == fVar8) {
                  if (((int)ROUND(fVar8) & 1U) == 0) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = (uint)auVar1._0_4_ & 0x80000000;
                  }
                }
              }
              fVar9 = (float)(uVar14 | (uint)fVar9);
              if (fVar10 == 0.0) {
                return fVar9;
              }
              fVar9 = (float)FUN_?(fVar9,uVar11,fVar9,_UNK_?);
              return fVar9;
            }
            if (((uint)fVar8 & 0x7f800000) < 0x4b000001) {
              auVar4 = vroundss_avx(auVar5,auVar4,8);
              if (auVar4._0_4_ != fVar8) {
                fVar9 = (float)FUN_?(fVar10,0xffc00000,0xffc00000,_UNK_?);
                return fVar9;
              }
              if (((int)ROUND(fVar8) & 1U) != 0) {
                auVar6 = ZEXT416(_UNK_?);
              }
            }
          }
          uVar7 = auVar6._0_8_;
          auVar4 = vpshufd_avx(auVar12,0xee);
          dVar15 = auVar4._0_8_ - _UNK_?;
          method = (MethodInfo *)ABS(dVar15);
          if (method < _UNK_?) {
            vpshufd_avx(auVar6,0x44);
            dVar16 = dVar15 / (dVar15 + _UNK_?);
            dVar17 = dVar16 + dVar16;
            dVar18 = dVar17 * dVar17;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = dVar18;
            auVar4 = vpshufd_avx(auVar5,0x44);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = dVar18 * dVar18 * dVar17 * dVar18;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = dVar17 * dVar18;
            auVar5 = vunpcklpd_avx(auVar12,auVar6);
            auVar19._0_8_ = auVar5._0_8_ * (auVar4._0_8_ * _UNK_? + _UNK_?);
            auVar19._8_8_ = auVar5._8_8_ * (auVar4._8_8_ * _UNK_? + _UNK_?);
            auVar4 = vpshufd_avx(auVar19,0xee);
            auVar20._8_8_ = 0;
            auVar20._0_8_ = dVar16 * dVar15;
            auVar5 = vpshufd_avx(auVar20,0xee);
            uVar14 = auVar5._0_4_;
            dVar15 = dVar15 + ((auVar4._0_8_ + auVar19._0_8_) - dVar16 * dVar15);
            goto code_?;
          }
        }
        auVar4 = vpshufd_avx(auVar12,0xee);
        auVar4 = vpand_avx(auVar4,_UNK_?);
        uVar14 = (auVar4._4_4_ >> 0xc) + (uint)((auVar4._0_8_ >> 0x2b & 1) != 0);
        auVar21._8_8_ = _UNK_?;
        auVar21._0_8_ = _UNK_?;
        auVar5 = vpor_avx(auVar4,auVar21);
        auVar4 = vpshufd_avx(auVar5,0xee);
        auVar4 = vpsrlq_avx(auVar4,0x34);
        auVar22._8_8_ = _UNK_?;
        auVar22._0_8_ = _UNK_?;
        auVar4 = vpsubq_avx(auVar4,auVar22);
        auVar4 = vcvtdq2pd_avx(auVar4);
        dVar15 = ((double)((ulonglong)(uVar14 | 0x3fe00) << 0x2c) - auVar5._0_8_) *
                 *(double *)(&UNK_? + (ulonglong)uVar14 * 8);
        dVar13 = dVar13 * ((auVar4._0_8_ * _UNK_? +
                           *(double *)(&UNK_? + (ulonglong)uVar14 * 8)) -
                          dVar15 * (dVar15 * (dVar15 * _UNK_? + _UNK_?) +
                                   _UNK_?));
        if (_UNK_? < dVar13) {
          fVar9 = (float)FUN_?(&UNK_?,0x7f800000,
                                       SUB168(ZEXT416(0x7f800000),0) | uVar7,_UNK_?);
          return fVar9;
        }
        if (_UNK_? < dVar13) {
          auVar23._0_8_ = dVar13 * _UNK_?;
          auVar23._8_8_ = _UNK_? * 0.0;
          auVar5 = vcvtpd2dq_avx(auVar23);
          auVar4 = vcvtdq2pd_avx(auVar5);
          dVar13 = -(auVar4._0_8_ * _UNK_?) + dVar13;
          auVar24._0_8_ =
               *(double *)(&UNK_? + (ulonglong)(auVar5._0_4_ & 0x3f) * 8) *
               dVar13 * (dVar13 * (dVar13 * _UNK_? + _UNK_?) + _UNK_?) +
               *(double *)(&UNK_? + (ulonglong)(auVar5._0_4_ & 0x3f) * 8);
          auVar24._8_8_ = 0;
          auVar4 = vpsrad_avx(auVar5,6);
          auVar4 = vpsllq_avx(auVar4,0x34);
          auVar4 = vpaddq_avx(auVar4,auVar24);
          return (float)((uint)(float)auVar4._0_8_ | (uint)uVar7);
        }
        fVar9 = (float)FUN_?(&UNK_?,method,uVar7,_UNK_?);
        return fVar9;
      }
      if (fVar9 == 0.0) {
        return 1.0;
      }
      method = (MethodInfo *)(ulonglong)(uint)fVar8;
      if (auVar1._0_4_ == INFINITY) {
        if (-1 < (int)fVar8) {
          return INFINITY;
        }
        return 0.0;
      }
      if (auVar1._0_4_ == -INFINITY) {
        uVar14 = 0;
        fVar9 = fVar8;
        if ((int)fVar8 < 0) {
          fVar9 = 0.0;
        }
        if (0 < (int)fVar8) {
          fVar9 = INFINITY;
        }
        if (((uint)fVar8 & 0x7f800000) < 0x4b000001) {
          auVar4 = vroundss_avx(auVar5,auVar4,8);
          uVar14 = 0;
          if ((auVar4._0_4_ == fVar8) && (uVar14 = 0x80000000, ((int)ROUND(fVar8) & 1U) == 0)) {
            uVar14 = 0;
          }
        }
        return (float)(uVar14 | (uint)fVar9);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar9) {
        if (0x7f800000 < (uint)fVar10) {
          if (auVar1._0_4_ != -NAN) {
            fVar9 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,uVar11,
                                         (uint)auVar1._0_4_ | 0x400000,_UNK_?);
            return fVar9;
          }
          fVar9 = (float)FUN_?(fVar10,uVar11,(uint)fVar8 | 0x400000,_UNK_?);
          return fVar9;
        }
        if (auVar1._0_4_ == 1.0) {
          if (0x7fbfffff < (uint)fVar9) {
            return 1.0;
          }
          fVar9 = (float)FUN_?(fVar10,0x3f800000,0x3f800000,_UNK_?);
          return fVar9;
        }
        fVar9 = (float)FUN_?(uVar11,uVar11,(uint)fVar8 | 0x400000,_UNK_?);
        return fVar9;
      }
      if ((uint)fVar10 < 0x7f800001) {
        if (fVar10 == 1.0) {
          return 1.0;
        }
        if (-1 < (int)fVar8) {
          if (0x3f7fffff < (uint)fVar10) {
            return INFINITY;
          }
          return 0.0;
        }
        fVar9 = 0.0;
        if ((uint)fVar10 < 0x3f800000) {
          fVar9 = INFINITY;
        }
        return fVar9;
      }
    }
    fVar9 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,method,
                                 (uint)auVar1._0_4_ | 0x400000,_UNK_?);
    return fVar9;
  }
  auVar3._12_4_ = in_register_00001204._0_4_;
  auVar3._0_12_ = auVar2;
  auVar25._12_52_ = auVar3._12_52_;
  auVar25._0_8_ = (MethodInfo *)CONCAT44(0,_UNK_?);
  auVar25._8_4_ = 0;
  auVar26._8_56_ = auVar25._8_56_;
  auVar26._0_8_ = CONCAT44(auVar1._0_4_,_UNK_?);
  uVar14 = 0;
  fVar9 = ABS(_UNK_?);
  fVar10 = ABS(auVar1._0_4_);
  auVar4 = auVar26._0_16_;
  if (0x7f7fffff < (uint)fVar9) {
    if (0x7f800000 < (uint)fVar9) {
      if (0x7f800000 < (uint)fVar10) {
        if (auVar1._0_4_ != -NAN) {
          fVar9 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,auVar26._0_8_,in_R8,
                                       _UNK_?);
          return fVar9;
        }
        fVar9 = (float)FUN_?(fVar10,auVar26._0_8_,in_R8,_UNK_?);
        return fVar9;
      }
      if (auVar1._0_4_ == 1.0) {
        if (0x7fbfffff < (uint)fVar9) {
          return 1.0;
        }
        fVar9 = (float)FUN_?(fVar10,0x3f800000,in_R8,_UNK_?);
        return fVar9;
      }
      fVar9 = (float)FUN_?(fVar10,auVar26._0_8_,in_R8,_UNK_?);
      return fVar9;
    }
    if ((uint)fVar10 < 0x7f800001) {
      if (fVar10 == 1.0) {
        return 1.0;
      }
      if ((int)_UNK_? < 0) {
        if (fVar10 != 0.0) {
          fVar9 = 0.0;
          if ((uint)fVar10 < 0x3f800000) {
            fVar9 = INFINITY;
          }
          return fVar9;
        }
      }
      else if ((uint)fVar10 < 0x3f800000) {
        return 0.0;
      }
      return INFINITY;
    }
code_?:
    fVar9 = (float)FUN_?((uint)auVar1._0_4_ | 0x400000,method,in_R8,_UNK_?);
    return fVar9;
  }
  if ((uint)fVar9 < 0x3f800001) {
    if (fVar9 == 0.0) {
      if ((uint)fVar10 < 0x7f800001) {
        return 1.0;
      }
      if (0x7fbfffff < (uint)fVar10) {
        return 1.0;
      }
      fVar9 = (float)FUN_?(fVar10,(uint)fVar10 | 0x400000,in_R8,_UNK_?);
      return fVar9;
    }
    method = auVar25._0_8_;
    if (_UNK_? == 1.0) {
      if ((uint)ABS(auVar1._0_4_) < 0x7f800001) {
        return auVar1._0_4_;
      }
      fVar9 = (float)FUN_?(fVar10,(uint)auVar1._0_4_ | 0x400000,in_R8,_UNK_?);
      return fVar9;
    }
  }
  if (0x7f7fffff < (uint)fVar10) {
    if (fVar9 == 0.0) {
      return 1.0;
    }
    if (auVar1._0_4_ == INFINITY) {
      if (-1 < (int)_UNK_?) {
        return INFINITY;
      }
      return 0.0;
    }
    method = auVar25._0_8_;
    if (auVar1._0_4_ == -INFINITY) {
      uVar14 = 0;
      fVar9 = _UNK_?;
      if ((int)_UNK_? < 0) {
        fVar9 = 0.0;
      }
      if (0 < (int)_UNK_?) {
        fVar9 = INFINITY;
      }
      if (((uint)_UNK_? & 0x7f800000) < 0x4b000001) {
        if (uRam_? < 2) {
          fVar10 = (float)(int)ROUND(_UNK_?);
        }
        else {
          auVar4 = roundss(auVar5,auVar4,8);
          fVar10 = auVar4._0_4_;
        }
        uVar14 = 0;
        if ((fVar10 == _UNK_?) &&
           (uVar14 = 0x80000000, ((int)ROUND(_UNK_?) & 1U) == 0)) {
          uVar14 = 0;
        }
      }
      return (float)(uVar14 | (uint)fVar9);
    }
    goto code_?;
  }
  dVar13 = (double)_UNK_?;
  dVar15 = (double)auVar1._0_4_;
  uVar27 = (undefined4)((ulonglong)dVar15 >> 0x20);
  if ((int)auVar1._0_4_ < 0x3f880000) {
    if ((int)auVar1._0_4_ < 1) {
      if (fVar10 == 0.0) {
        fVar9 = _UNK_?;
        if ((int)_UNK_? < 0) {
          fVar9 = INFINITY;
        }
        fVar10 = 0.0;
        if ((int)_UNK_? < 0) {
          fVar10 = INFINITY;
        }
        uVar14 = 0;
        if (0 < (int)_UNK_?) {
          fVar9 = 0.0;
        }
        uVar7 = (ulonglong)((uint)_UNK_? & 0x7f800000);
        if (((uint)_UNK_? & 0x7f800000) < 0x4b000001) {
          if (uRam_? < 2) {
            uVar7 = (ulonglong)(uint)(int)ROUND(_UNK_?);
            fVar8 = (float)(int)ROUND(_UNK_?);
          }
          else {
            auVar4 = roundss(auVar5,auVar4,8);
            fVar8 = auVar4._0_4_;
          }
          uVar14 = 0;
          if (fVar8 == _UNK_?) {
            uVar7 = (ulonglong)(CONCAT14(fVar8 < _UNK_?,(int)ROUND(_UNK_?)) >> 1);
            if (((int)ROUND(_UNK_?) & 1U) == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (uint)auVar1._0_4_ & 0x80000000;
            }
          }
        }
        fVar9 = (float)(uVar14 | (uint)fVar9);
        if (fVar10 != 0.0) {
          fVar9 = (float)FUN_?(fVar9,auVar26._0_8_,uVar7,_UNK_?);
        }
        return fVar9;
      }
      if (((uint)_UNK_? & 0x7f800000) < 0x4b000001) {
        if (uRam_? < 2) {
          fVar9 = (float)(int)ROUND(_UNK_?);
        }
        else {
          auVar4 = roundss(auVar5,auVar4,8);
          fVar9 = auVar4._0_4_;
        }
        if (fVar9 != _UNK_?) {
          fVar9 = (float)FUN_?(fVar10,0xffc00000,in_R8,_UNK_?);
          return fVar9;
        }
        if (((int)ROUND(_UNK_?) & 1U) != 0) {
          uVar14 = _UNK_?;
        }
      }
    }
    auVar28._8_4_ = SUB84(dVar15,0);
    auVar28._0_8_ = dVar15;
    auVar28._16_48_ = in_ZMM3._16_48_;
    auVar28._12_4_ = uVar27;
    in_ZMM3._8_56_ = auVar28._8_56_;
    in_ZMM3._0_8_ = dVar15 - _UNK_?;
    method = (MethodInfo *)ABS(in_ZMM3._0_8_);
    if (method < _UNK_?) {
      dVar18 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + _UNK_?);
      dVar17 = dVar18 + dVar18;
      dVar15 = dVar17 * dVar17;
      auVar29._8_4_ = SUB84(dVar15,0);
      auVar29._0_8_ = dVar15;
      auVar29._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dVar15 = in_ZMM3._0_8_ +
               ((dVar17 * dVar15 * (dVar15 * _UNK_? + _UNK_?) +
                dVar15 * dVar15 * dVar17 * dVar15 *
                (auVar29._8_8_ * _UNK_? + _UNK_?)) - dVar18 * in_ZMM3._0_8_);
      goto code_?;
    }
  }
  auVar30._8_4_ = SUB84(dVar15,0);
  auVar30._0_8_ = dVar15;
  auVar30._12_4_ = uVar27;
  auVar30 = auVar30 & _UNK_?;
  uVar31 = (auVar30._4_4_ >> 0xc) + (uint)((auVar30._0_8_ >> 0x2b & 1) != 0);
  auVar32._8_8_ = _UNK_?;
  auVar32._0_8_ = _UNK_?;
  auVar33._4_56_ = in_ZMM3._8_56_;
  auVar33._0_4_ = SUB164(auVar30 | auVar32,0xc);
  dVar15 = ((double)((ulonglong)(uVar31 | 0x3fe00) << 0x2c) - SUB168(auVar30 | auVar32,0)) *
           *(double *)(&UNK_? + (ulonglong)uVar31 * 8);
  dVar15 = ((double)(int)(((auVar33._0_8_ & 0xffffffff) >> 0x14) - _UNK_?) * _UNK_? +
           *(double *)(&UNK_? + (ulonglong)uVar31 * 8)) -
           (dVar15 * dVar15 * (_UNK_? * dVar15 + _UNK_?) + dVar15);
code_?:
  dVar13 = dVar13 * dVar15;
  if (_UNK_? < dVar13) {
    fVar9 = (float)FUN_?(dVar13,0x7f800000,in_R8,_UNK_?);
    return fVar9;
  }
  if (_UNK_? < dVar13) {
    uVar31 = (uint)(dVar13 * _UNK_?);
    dVar13 = dVar13 - (double)(int)uVar31 * _UNK_?;
    return (float)((uint)(float)(double)(((ulonglong)(uint)((int)uVar31 >> 6) << 0x34) +
                                        (longlong)
                                        ((dVar13 * dVar13 *
                                          (_UNK_? * dVar13 + _UNK_?) + dVar13) *
                                         *(double *)(&UNK_? + (ulonglong)(uVar31 & 0x3f) * 8)
                                        + *(double *)
                                           (&UNK_? + (ulonglong)(uVar31 & 0x3f) * 8))) |
                  uVar14);
  }
  fVar9 = (float)FUN_?(dVar13,method,in_R8,_UNK_?);
  return fVar9;
}


/* DynamicLODDistance(Single, Single, Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance__ctor
               (DynamicLODDistance *this,float minRadius,float maxRadius,int32_t maxNumObjects,
               MethodInfo *method)

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
  if ((pMVar2 == (MVGameControllerBase *)0x0) ||
     (this_00 = (pMVar2->fields).game, this_00 == (MVNetworkGame *)0x0)) {
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
    uVar5 = func_?(&
                                MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_
                               );
    FUN_?(pEVar6,uVar5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0.0 < maxRadius) {
    if (0 < maxNumObjects) {
      (this->fields).minRadius = minRadius;
      fVar8 = maxRadius * _UNK_?;
      (this->fields).maxNumObjects = maxNumObjects;
      (this->fields).maxRadius = maxRadius;
      (this->fields).currentRadius = minRadius;
      (this->fields).maxVolume = fVar8 * maxRadius * maxRadius;
      return;
    }
    uVar5 = func_?(&TypeInfo__System__Exception);
    pEVar6 = (Exception *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_maxNumObjects____0);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&
                                MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_
                               );
    FUN_?(pEVar6,uVar5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = func_?(&TypeInfo__System__Exception);
  pEVar6 = (Exception *)func_?(uVar5);
  pSVar7 = (String *)func_?(&StringLiteral_maxRadius____0_0f);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar6,pSVar7,(MethodInfo *)0x0);
  uVar5 = func_?(&MethodInfo__DynamicLODDistance__DynamicLODDistance_float__float__int_
                             );
  FUN_?(pEVar6,uVar5);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

