
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x41200000;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&puStack_1);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Base_radius__,pOVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pOVar2 = (Object *)func_?(TypeInfo__System__Single);
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Area__,pOVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    pMStack4 = (Mathf__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    pMStack4 = TypeInfo__UnityEngine__Mathf;
    func_?();
  }
  dVar5 = _UNK_?;
  func_?();
  fVar6 = (float)dVar5;
  pMStack4 = (Mathf__Class *)&stack0xfffffff0;
  pOVar2 = (Object *)func_?();
  pSVar3 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_VolumeToRadius__,pOVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    pEStack7 = (Exception__Class *)_UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if (((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) {
    if ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0) {
      pEStack7 = (Exception__Class *)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      pEStack7 = (Exception__Class *)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
  }
  if ((float)(double)CONCAT44((uint)((ulonglong)(double)(fVar6 - _UNK_?) >> 0x20) &
                              _UNK_?,SUB84((double)(fVar6 - _UNK_?),0) & _UNK_?
                             ) <= _UNK_?) {
    return;
  }
  pEStack7 = TypeInfo__System__Exception;
  this = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this,StringLiteral_Failed_math_test,(MethodInfo *)0x0);
  pMStack8 = MethodInfo__DynamicLODDistance__MathTest__;
  uStack9 = 0;
  pIStack10 = this;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_DeltaTime__,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void TickTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_TickTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_DeltaTime__,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


/* Void Update(Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_Update
               (DynamicLODDistance *this,int32_t numObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float)numObjects / (float)(this->fields).maxNumObjects;
  iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar3 = WaitForTicks::WaitForTicks_Diff((this->fields).prevTick,(MethodInfo *)0x0);
  fVar4 = _UNK_?;
  (this->fields).prevTick = iVar2;
  fVar5 = (this->fields).maxVolume;
  if (fVar4 < fVar1) {
    numObjects = (int32_t)(fVar5 / fVar1);
  }
  else {
    fVar4 = (this->fields).currentRadius;
    numObjects = (int32_t)(((float)iVar3 / _UNK_?) *
                           (this->fields).volumePercentChangePrSecond * fVar5 +
                          fVar4 * _UNK_? * fVar4 * fVar4);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  auVar6._0_8_ = (double)((float)numObjects / _UNK_?);
  auVar6._8_8_ = 0;
  func_?();
  fVar5 = (this->fields).minRadius;
  max = (undefined *)(this->fields).maxRadius;
  (this->fields).currentRadius = (float)auVar6._0_8_;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    max = &UNK_?;
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    ((float)auVar6._0_8_,fVar5,(float)max,(MethodInfo *)0x0);
  (this->fields).currentRadius = fVar5;
  return;
}


/* Void UpdateTest() */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_UpdateTest(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (DynamicLODDistance *)func_?(TypeInfo__DynamicLODDistance);
  DynamicLODDistance__ctor(this,1.0,100.0,10,(MethodInfo *)0x0);
  iVar1 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  if (this != (DynamicLODDistance *)0x0) {
    (this->fields).prevTick = iVar1;
    DynamicLODDistance_Update(this,0,(MethodInfo *)0x0);
    iVar2 = 6;
    do {
      DynamicLODDistance_Update(this,9,(MethodInfo *)0x0);
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Radius__,pOVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 6;
    do {
      DynamicLODDistance_Update(this,0xb,(MethodInfo *)0x0);
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Radius__,pOVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar4,(MethodInfo *)0x0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single VolumeToRadius(Single) */

float Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance_VolumeToRadius
                (float volume,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar1 = (double)(volume / _UNK_?);
  func_?();
  return (float)dVar1;
}


/* DynamicLODDistance(Single, Single, Int32) */

void Assembly-CSharp.dll::DynamicLODDistance::DynamicLODDistance__ctor
               (DynamicLODDistance *this,float minRadius,float maxRadius,int32_t maxNumObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).volumePercentChangePrSecond = 0.1;
  iVar1 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  (this->fields).prevTick = iVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (minRadius <= 0.0) {
    this_00 = (IsolatedStorageException *)func_?();
    message = StringLiteral_minRadius____0_0f;
  }
  else if (maxRadius <= 0.0) {
    this_00 = (IsolatedStorageException *)func_?();
    message = StringLiteral_maxRadius____0_0f;
  }
  else {
    if (0 < maxNumObjects) {
      (this->fields).minRadius = minRadius;
      fVar2 = maxRadius * _UNK_?;
      (this->fields).maxNumObjects = maxNumObjects;
      (this->fields).maxRadius = maxRadius;
      (this->fields).currentRadius = minRadius;
      (this->fields).maxVolume = fVar2 * maxRadius * maxRadius;
      return;
    }
    this_00 = (IsolatedStorageException *)func_?();
    message = StringLiteral_maxNumObjects____0;
  }
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

