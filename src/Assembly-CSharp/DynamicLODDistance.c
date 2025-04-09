
/* Single GetDeltaTime() */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetDeltaTime
                (DynamicLODDistance *this,MethodInfo *method)

{
  iVar1 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar2 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
  (this->fields).prevTick = iVar1;
  return (float)iVar2 / _UNK_?;
}


/* Single GetTargetVolume(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_GetTargetVolume
                (DynamicLODDistance *this,float numObjectsMaxObjectsRatio,MethodInfo *method)

{
  fVar1 = (this->fields).maxVolume;
  if (numObjectsMaxObjectsRatio != _UNK_?) {
    fVar1 = fVar1 / numObjectsMaxObjectsRatio;
  }
  return fVar1;
}


/* Void MathTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_MathTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Base_radius__);
    func_?(&StringLiteral_VolumeToRadius__);
    func_?(&StringLiteral_Area__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&stack0xfffffff4,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Base_radius__,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  SVar2.m_value = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)(SVar2.m_value * _UNK_? * SVar2.m_value * SVar2.m_value),
                      (MethodInfo *)0x0);
  SStack_3.m_value = (float)&UNK_?;
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Area__,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  dVar4 = (double)((float)pSVar1 / _UNK_?);
  func_?();
  SStack_3.m_value = (float)dVar4;
  pSVar1 = mscorlib.dll::System::Single::Single_ToString(&SStack_3,(MethodInfo *)0x0);
  SStack_3.m_value = (float)&UNK_?;
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_VolumeToRadius__,pSVar1,(MethodInfo *)0x0);
  SVar2.m_value = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  dVar4 = (double)((float)pSVar1 / _UNK_?);
  func_?();
  if ((float)((uint)((float)dVar4 - SVar2.m_value) & _UNK_?) <= _UNK_?) {
    return;
  }
  func_?();
  this = (Exception *)func_?();
  method_00 = (MethodInfo *)0x0;
  pSVar1 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar1,method_00);
  uStack5 = func_?();
  pEStack6 = this;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?();
    func_?();
    func_?(&StringLiteral_DeltaTime__);
    cRam_? = '\x01';
  }
  this = (DynamicLODDistance *)func_?(TypeInfo__DynamicLODDistance);
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  iVar1 = 0;
  do {
    if (this == (DynamicLODDistance *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
    (this->fields).prevTick = iVar3;
    pSVar4 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&stack0xfffffff8,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_DeltaTime__,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void TickTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_TickTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__DynamicLODDistance);
    func_?(&StringLiteral_DeltaTime__);
    cRam_? = '\x01';
  }
  this = (DynamicLODDistance *)func_?(TypeInfo__DynamicLODDistance);
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  iVar1 = 0;
  do {
    if (this == (DynamicLODDistance *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    iVar4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
    (this->fields).prevTick = iVar3;
    pSVar5 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)((float)iVar4 / _UNK_?),(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_DeltaTime__,pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar5,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void Update(Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_Update
               (DynamicLODDistance *this,int32_t numObjects,MethodInfo *method)

{
  fVar1 = (float)numObjects / (float)(this->fields).maxNumObjects;
  iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar3 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
  fVar4 = _UNK_?;
  (this->fields).prevTick = iVar2;
  fVar5 = (this->fields).maxVolume;
  if (fVar4 < fVar1) {
    fVar5 = fVar5 / fVar1;
  }
  else {
    fVar4 = (this->fields).currentRadius;
    fVar5 = ((float)iVar3 / _UNK_?) * (this->fields).volumePercentChangePrSecond * fVar5 +
            fVar4 * _UNK_? * fVar4 * fVar4;
  }
  dVar6 = (double)(fVar5 / _UNK_?);
  func_?();
  fVar4 = (float)dVar6;
  fVar5 = (this->fields).minRadius;
  if ((fVar5 <= fVar4) && (fVar5 = (this->fields).maxRadius, fVar4 <= fVar5)) {
    (this->fields).currentRadius = fVar4;
    return;
  }
  (this->fields).currentRadius = fVar5;
  return;
}


/* Void UpdateTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_UpdateTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__DynamicLODDistance);
    func_?(&StringLiteral_Radius__);
    cRam_? = '\x01';
  }
  SStack_1.m_value = 0.0;
  this = (DynamicLODDistance *)func_?(TypeInfo__DynamicLODDistance);
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  if (this != (DynamicLODDistance *)0x0) {
    (this->fields).prevTick = iVar2;
    fVar3 = 0.0 / (float)(this->fields).maxNumObjects;
    SStack_1.m_value = (float)&UNK_?;
    iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    SStack_1.m_value = (float)&UNK_?;
    iVar4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
    fVar5 = (this->fields).maxVolume;
    (this->fields).prevTick = iVar2;
    if (0.0 < fVar3) {
      fVar5 = fVar5 / fVar3;
    }
    else {
      fVar3 = (this->fields).currentRadius;
      fVar5 = ((float)iVar4 / _UNK_?) * (this->fields).volumePercentChangePrSecond * fVar5
               + fVar3 * _UNK_? * fVar3 * fVar3;
    }
    auVar6._0_8_ = (double)(fVar5 / _UNK_?);
    auVar6._8_8_ = 0;
    func_?();
    fVar5 = (this->fields).minRadius;
    fVar3 = (float)auVar6._0_8_;
    if ((fVar3 < fVar5) || (fVar5 = (this->fields).maxRadius, fVar5 < fVar3)) {
      fVar3 = fVar5;
    }
    (this->fields).currentRadius = fVar3;
    iVar7 = 6;
    do {
      fVar3 = _UNK_? / (float)(this->fields).maxNumObjects;
      iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
      iVar4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
      fVar5 = (this->fields).maxVolume;
      (this->fields).prevTick = iVar2;
      if (0.0 < fVar3) {
        fVar5 = fVar5 / fVar3;
      }
      else {
        fVar3 = (this->fields).currentRadius;
        fVar5 = ((float)iVar4 / _UNK_?) * (this->fields).volumePercentChangePrSecond *
                 fVar5 + fVar3 * _UNK_? * fVar3 * fVar3;
      }
      auVar8._0_8_ = (double)(fVar5 / _UNK_?);
      auVar8._8_8_ = 0;
      func_?();
      puVar9 = (undefined *)(this->fields).minRadius;
      SStack_1.m_value = (float)auVar8._0_8_;
      if ((SStack_1.m_value < (float)puVar9) ||
         (puVar9 = (undefined *)(this->fields).maxRadius, (float)puVar9 < SStack_1.m_value)) {
        SStack_1.m_value = (float)puVar9;
      }
      (this->fields).currentRadius = SStack_1.m_value;
      pSVar10 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Radius__,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = 6;
    do {
      fVar3 = _UNK_? / (float)(this->fields).maxNumObjects;
      iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
      iVar4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
      fVar5 = (this->fields).maxVolume;
      (this->fields).prevTick = iVar2;
      if (0.0 < fVar3) {
        fVar5 = fVar5 / fVar3;
      }
      else {
        fVar3 = (this->fields).currentRadius;
        fVar5 = ((float)iVar4 / _UNK_?) * (this->fields).volumePercentChangePrSecond *
                 fVar5 + fVar3 * _UNK_? * fVar3 * fVar3;
      }
      auVar11._0_8_ = (double)(fVar5 / _UNK_?);
      auVar11._8_8_ = 0;
      func_?();
      puVar9 = (undefined *)(this->fields).minRadius;
      SStack_1.m_value = (float)auVar11._0_8_;
      if ((SStack_1.m_value < (float)puVar9) ||
         (puVar9 = (undefined *)(this->fields).maxRadius, (float)puVar9 < SStack_1.m_value)) {
        SStack_1.m_value = (float)puVar9;
      }
      (this->fields).currentRadius = SStack_1.m_value;
      pSVar10 = mscorlib.dll::System::Single::Single_ToString(&SStack_1,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Radius__,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Single VolumeToRadius(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_VolumeToRadius
                (float volume,MethodInfo *method)

{
  dVar1 = (double)(volume / _UNK_?);
  func_?();
  return (float)dVar1;
}


/* DynamicLODDistance(Single, Single, Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance__ctor
               (DynamicLODDistance *this,float minRadius,float maxRadius,int32_t maxNumObjects,
               MethodInfo *method)

{
  (this->fields).volumePercentChangePrSecond = 0.1;
  iVar1 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  (this->fields).prevTick = iVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if (minRadius <= 0.0) {
    func_?();
    pEVar2 = (Exception *)func_?();
    pSVar3 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar3,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
  else {
    if (maxRadius <= 0.0) goto code_?;
    if (0 < maxNumObjects) {
      (this->fields).minRadius = minRadius;
      fVar4 = maxRadius * _UNK_?;
      (this->fields).maxNumObjects = maxNumObjects;
      (this->fields).maxRadius = maxRadius;
      (this->fields).currentRadius = minRadius;
      (this->fields).maxVolume = fVar4 * maxRadius * maxRadius;
      return;
    }
  }
  func_?();
  pEVar2 = (Exception *)func_?();
  pSVar3 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar3,(MethodInfo *)0x0);
  func_?();
  func_?();
code_?:
  func_?();
  pEVar2 = (Exception *)func_?();
  pSVar3 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar3,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

