
/* Void AnimateHullInertia() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullInertia
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).prevWorldRot.x;
  uVar2._0_4_ = (this->fields).prevWorldRot.y;
  uVar2._4_4_ = (this->fields).prevWorldRot.z;
  fVar3 = (this->fields).prevWorldRot.w;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar4->x;
  uVar5._4_4_ = pVVar4->y;
  fVar6 = pVVar4->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  rotation.y = (float)uVar2;
  rotation.x = fVar1;
  rotation.z = uVar2._4_4_;
  rotation.w = fVar3;
  VVar7.z = fVar6;
  VVar7.x = (float)(int)uVar5;
  VVar7.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffd4,rotation,VVar7,(MethodInfo *)0x0);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar8 != (Transform *)0x0) {
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffac,pTVar8,(MethodInfo *)0x0);
    fVar1 = pQVar9->x;
    uVar2._0_4_ = pQVar9->y;
    uVar2._4_4_ = pQVar9->z;
    fVar3 = pQVar9->w;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
    rotation_00.y = (float)uVar2;
    rotation_00.x = fVar1;
    rotation_00.z = uVar2._4_4_;
    rotation_00.w = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffd4,rotation_00,*pVVar4,(MethodInfo *)0x0);
    pVVar4 = (Vector3 *)func_?();
    uVar5._4_4_ = 0.0;
    VVar7 = *pVVar4;
    puVar10 = (undefined8 *)func_?();
    fVar1 = *(float *)(puVar10 + 1);
    uVar2._0_4_ = (float)*puVar10;
    uVar2._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
    v2.y = uVar2._4_4_;
    v2.x = (float)uVar2;
    v2.z = fVar1;
    uVar2._4_4_ = MathFunctions::MathFunctions_SignedAngle_1(VVar7,v2,*pVVar4,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = (this->fields).rotateRollFactor;
    uVar5._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    uVar2._0_4_ = (this->fields).rollSpeed;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                       (uVar5._4_4_,(uVar2._4_4_ / fVar3) * fVar1,(float)uVar2 * (float)uVar5,
                        (MethodInfo *)0x0);
    (this->fields).angleDiff = fVar1;
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)fVar1 >> 0x20) & _UNK_?,
                                SUB84((double)fVar1,0) & _UNK_?) < _UNK_?) {
      (this->fields).angleDiff = 0.0;
    }
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffac,pTVar8,(MethodInfo *)0x0);
      fVar1 = (this->fields).angleDiff;
      uVar2._0_4_ = (this->fields).rollMax;
      pTVar8 = (this->fields).hoverCraftHullRoot;
      uVar2._4_4_ = pQVar9->y;
      fVar3 = pQVar9->z;
      uVar5._0_4_ = pQVar9->w;
      (this->fields).prevWorldRot.x = pQVar9->x;
      (this->fields).prevWorldRot.y = uVar2._4_4_;
      (this->fields).prevWorldRot.z = fVar3;
      (this->fields).prevWorldRot.w = (float)uVar5;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                         ((float)((uint)fVar1 ^ _UNK_?),
                          (float)((uint)(float)uVar2 ^ _UNK_?),(float)uVar2,(MethodInfo *)0x0
                         );
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         ((Vector3 *)&stack0xffffffb0,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar4->x;
      uVar2._4_4_ = pVVar4->y;
      fVar3 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      axis.z = fVar3;
      axis.x = (float)(int)uVar2;
      axis.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffffac,fVar1,axis,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar8,*pQVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AnimateHullSpeed() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_AnimateHullSpeed
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffac,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->y;
    fVar4 = pQVar2->z;
    fVar5 = pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
    uVar7._0_4_ = pVVar6->x;
    uVar7._4_4_ = pVVar6->y;
    fVar8 = pVVar6->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    auVar9._4_4_ = fVar4;
    auVar9._0_4_ = fVar3;
    auVar9._8_4_ = fVar5;
    auVar9._12_4_ = 0;
    VVar10.z = fVar8;
    VVar10.x = (float)(int)uVar7;
    VVar10.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              ((Vector3 *)&stack0xffffffd8,(Quaternion)(auVar9 << 0x20),VVar10,(MethodInfo *)0x0);
    pVVar6 = (Vector3 *)func_?();
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                       (*pVVar6,(this->fields).smoothVelocity,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (fVar4 <= _UNK_?) {
      fVar3 = _UNK_?;
    }
    fVar4 = (this->fields).smoothAcceleration;
    fVar5 = (this->fields).signedAcceleration;
    uVar7._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    uVar7._0_4_ = (this->fields).smoothMoveSpeedTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                       (fVar4,fVar5 * fVar3,(float)uVar7 * uVar7._4_4_,(MethodInfo *)0x0);
    (this->fields).smoothAcceleration = fVar5;
    fVar3 = (this->fields).smoothPitchFactor;
    fVar4 = (this->fields).pitchFactor;
    uVar7._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                       (fVar3,fVar5 * fVar4,(this->fields).pitchSpeedTime * (float)uVar7,
                        (MethodInfo *)0x0);
    pTVar1 = (this->fields).hoverCraftHullRoot;
    (this->fields).smoothPitchFactor = fVar3;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffac,pTVar1,(MethodInfo *)0x0);
      fVar3 = (this->fields).pitchMax;
      fVar4 = (float)((uint)fVar3 ^ _UNK_?);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                         ((this->fields).smoothPitchFactor,fVar4,fVar3,(MethodInfo *)pQVar2->z);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                         ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
      VVar10 = *pVVar6;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar2 = (Quaternion *)&stack0xffffffbc;
      puVar11 = &UNK_?;
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         (pQVar2,fVar5,VVar10,(MethodInfo *)0x0);
      lhs.y = fVar3;
      lhs.x = fVar4;
      lhs.z = (float)puVar11;
      lhs.w = (float)pQVar2;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                         ((Quaternion *)&stack0xffffffac,lhs,*pQVar12,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Awake
               (HoverCraftVisualization *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).unoccupiedTime = fVar1;
  return;
}


/* Void CalculateMovementValues() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_CalculateMovementValues
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    fVar2 = (this->fields).prevWorldPosition.z;
    puVar3 = (undefined *)pVVar1->x;
    fVar4 = pVVar1->z;
    uVar5._0_4_ = (this->fields).prevWorldPosition.x;
    uVar5._4_4_ = (this->fields).prevWorldPosition.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.y = 0.0;
    a.x = (float)puVar3;
    a.z = fVar4;
    b_00.z = fVar2;
    b_00.x = (float)(int)uVar5;
    b_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe4,a,b_00,(MethodInfo *)0x0);
    uVar6 = 0;
    fVar2 = pVVar1->x;
    uVar5._0_4_ = pVVar1->z;
    puVar3 = &UNK_?;
    uVar5._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
    a_00.y = uVar5._4_4_;
    a_00.x = fVar2;
    a_00.z = (float)uVar5;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                       ((Vector3 *)&stack0xffffffd8,a_00,uVar5._4_4_,(MethodInfo *)0x0);
    uVar7 = pVVar1->x;
    uVar8 = pVVar1->y;
    b.y = (float)uVar8;
    b.x = (float)uVar7;
    fVar9 = pVVar1->z;
    fVar10 = (float10)func_?();
    fVar4 = (float)fVar10;
    (this->fields).moveSpeed = fVar4;
    uVar5._0_4_ = (this->fields).smoothMoveSpeed;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    uVar5._4_4_ = (this->fields).smoothMoveSpeedTime;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    uVar5._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothStep
                             ((float)uVar5,fVar4,uVar5._4_4_ * fVar11,(MethodInfo *)0x0);
    uVar12 = (this->fields).smoothVelocity.x;
    uVar13 = (this->fields).smoothVelocity.y;
    uVar5._0_4_ = (this->fields).smoothVelocity.z;
    (this->fields).smoothMoveSpeed = uVar5._4_4_;
    uVar5._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
    a_01.y = (float)uVar13;
    a_01.x = (float)uVar12;
    a_01.z = (float)uVar5;
    b.z = fVar9;
    fStack14 = fVar9;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                       ((Vector3 *)&stack0xffffffd8,a_01,b,
                        (this->fields).smoothMoveSpeedTime * uVar5._4_4_,(MethodInfo *)0x0);
    uVar5._4_4_ = pVVar1->y;
    uVar5._0_4_ = pVVar1->z;
    (this->fields).smoothVelocity.x = pVVar1->x;
    (this->fields).smoothVelocity.y = uVar5._4_4_;
    uVar5._4_4_ = (this->fields).smoothMoveSpeed - 3.487064e-29;
    (this->fields).smoothVelocity.z = (float)uVar5;
    uVar5._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
    (this->fields).prevWorldPosition.x = (float)puVar3;
    (this->fields).prevWorldPosition.y = (float)uVar6;
    (this->fields).signedAcceleration = uVar5._4_4_ / (float)uVar5;
    (this->fields).prevWorldPosition.z = fVar2;
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleSound() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleSound
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).smoothMoveSpeed;
  min = (this->fields).minVolume;
  this_00 = (this->fields).moving;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1 / _UNK_?,min,1.0,(MethodInfo *)0x0);
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,fVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleUnoccupiedVehicle() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_HandleUnoccupiedVehicle
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if ((this->fields).vehicleIsUnoccupied == 0) {
    pEVar1 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
              *)(this->fields).vehicleSeatManager;
    if (pEVar1 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                   *)0x0) goto code_?;
    pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (pEVar1,(MethodInfo *)0x0);
    if (pOVar2 == (Object *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).unoccupiedTime = fVar3;
      (this->fields).vehicleIsUnoccupied = 1;
    }
    if ((this->fields).vehicleIsUnoccupied == 0) {
      return;
    }
  }
  pEVar1 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
            *)(this->fields).vehicleSeatManager;
  if (pEVar1 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                 *)0x0) {
code_?:
    func_?(0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar2 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
           Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     (pEVar1,(MethodInfo *)0x0);
  if (0 < (int)pOVar2) {
    (this->fields).vehicleIsUnoccupied = 0;
  }
  if (((this->fields).vehicleIsUnoccupied != 0) &&
     (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     _UNK_? - (fVar3 - (this->fields).unoccupiedTime) <
     (this->fields).vehicleAboutToBeRemovedTime)) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
  }
  return;
}


/* Void Init(Transform, VehicleSeatManager, Single, MVRuntimeDataVariableClampedFloat, Boolean) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Init
               (HoverCraftVisualization *this,Transform *hoverCraftHull,
               VehicleSeatManager *vehicleSeatManager,float maxHealth,
               MVRuntimeDataVariableClampedFloat *health,bool isInSpawner,MethodInfo *method)

{
  pHVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields).hoverCraftHullRoot;
  if ((pTVar2 != (Transform *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar2,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    (pHVar1->fields).localHoverCraftHullRootBasePosition.x = pVVar3->x;
    (pHVar1->fields).localHoverCraftHullRootBasePosition.y = fVar4;
    (this->fields).localHoverCraftHullRootBasePosition.z = fVar5;
    (this->fields)._.isInSpawner = isInSpawner;
    (this->fields).vehicleSeatManager = vehicleSeatManager;
    if (hoverCraftHull != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffe4,hoverCraftHull,(MethodInfo *)0x0);
      puStack_6 = (undefined *)pVVar3->x;
      unique0x0000a404 = pVVar3->y;
      this = (HoverCraftVisualization *)pVVar3->z;
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffe0,hoverCraftHull,(MethodInfo *)0x0);
      pTVar2 = (Transform *)pQVar7->x;
      method_00 = (MethodInfo *)pQVar7->y;
      fVar5 = pQVar7->z;
      fVar4 = pQVar7->w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (hoverCraftHull,pTVar2,method_00);
      fVar8 = (float)_puStack_c;
      fVar9 = SUB84(_puStack_c,4);
      stack0xfffffff8 = (float)hoverCraftHull;
      value_00 = (Vector3)CONCAT84(uVar10,fVar8);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (hoverCraftHull,value_00,(MethodInfo *)0x0);
      value.y = (float)method_00;
      value.x = (float)pTVar2;
      value.z = fVar5;
      value.w = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (hoverCraftHull,value,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pHVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        fVar5 = pVVar3->z;
        (pHVar1->fields).prevWorldPosition.x = pVVar3->x;
        (pHVar1->fields).prevWorldPosition.y = fVar4;
        (pHVar1->fields).prevWorldPosition.z = fVar5;
        (pHVar1->fields).prevWorldPosition.y = 0.0;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pHVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
          fVar5 = pQVar7->y;
          fVar4 = pQVar7->z;
          fVar11 = pQVar7->w;
          (pHVar1->fields).prevWorldRot.x = pQVar7->x;
          (pHVar1->fields).prevWorldRot.y = fVar5;
          (pHVar1->fields).prevWorldRot.z = fVar4;
          (pHVar1->fields).prevWorldRot.w = fVar11;
          (pHVar1->fields).maxHealth = (float)method_00;
          fVar12 = (float10)(**(code **)(_UNK_? + 0xe0))();
          (pHVar1->fields).prevHealth = (float)fVar12;
          pDVar13 = _UNK_?;
          this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_00,(Object *)pHVar1,
                     MethodInfo__HoverCraftVisualization___Init_m__0_System__Object_,
                     (MethodInfo *)0x0);
          pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                              (pDVar13,(Delegate *)this_00,(MethodInfo *)0x0);
          pDVar13 = (Delegate *)0x0;
          if (pDVar14 != (Delegate *)0x0) {
            if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar14->klass ==
                TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pDVar13 = pDVar14;
            }
            pMVar15 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
            if (pDVar13 == (Delegate *)0x0) goto code_?;
          }
          pVVar16 = (pHVar1->fields).vehicleBlinker;
          _UNK_? = pDVar13;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)hoverCraftHull,(MethodInfo *)0x0);
          if ((this_01 != (GameObject *)0x0) &&
             (avatarBody = (MVBody *)
                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_GetComponentsInChildren_29
                                     (this_01,
                                      UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                     ), pVVar16 != (VehicleBlinker *)0x0)) {
            AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                      ((AccessoryPreviewPopup *)pVVar16,avatarBody,(MethodInfo *)0x0);
            pVVar16 = (pHVar1->fields).vehicleBlinker;
            if (pVVar16 != (VehicleBlinker *)0x0) {
              GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                        ((GamePassesTextBubble *)pVVar16,1,(MethodInfo *)0x0);
              isInSpawner = (bool)pHVar1;
              if (isInSpawner != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pHVar1,0,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pDVar14 = extraout_ECX;
  pMVar15 = extraout_EDX;
code_?:
  func_?(pDVar14,pMVar15);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  pVVar8 = (this->fields).vehicleBlinker;
  puStack_9 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xffffffb4, puStack_4 = &stack0xffffffb4,
     (TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pVVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar10 != 0) {
    pVVar8 = (this->fields).vehicleBlinker;
    if (pVVar8 == (VehicleBlinker *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pVVar8,0,(MethodInfo *)0x0);
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).thrusters;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_7.monitor = (MonitorData *)pLVar11->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                             );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        pOStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                               (this_01,(MethodInfo *)0x0);
        CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
        func_?();
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Clear_1
                  ((ParticleSystem *)this_01,(MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (this_02 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
      }
    }
    *puStack_9 = 0x87;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7);
    pPVar13 = (this->fields).fire;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pPVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      pPVar13 = (this->fields).fire;
      if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Clear_1
                (pPVar13,(MethodInfo *)0x0);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnEnable
               (HoverCraftVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (this->fields).vehicleBlinker;
  puStack_8 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if (this_00 != (VehicleBlinker *)0x0) {
    puStack_8 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).thrusters;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_01,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                         );
      CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar9->l
      ;
      CStack_7.monitor = (MonitorData *)pLVar9->next;
      CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
      CStack_7.fields.syncRoot = (Object *)(pLVar9->current).rgba;
      uStack_1 = 0;
      while( true ) {
        auStack_10._8_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
        ;
        auStack_10._4_4_ = &CStack_7;
        auStack_10._0_4_ = &UNK_?;
        cVar11 = func_?();
        if (cVar11 == '\0') break;
        unaff_ESI = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 (&CStack_7,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                                 );
        if (unaff_ESI ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        pOStack_6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                               (unaff_ESI,(MethodInfo *)0x0);
        auStack_10._4_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
        auStack_10._0_4_ = (List_1_UnityEngine_Color32_ *)0x1;
        func_?();
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)unaff_ESI,(MethodInfo *)0x0);
        if (this_02 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1,(MethodInfo *)0x0);
      }
      unaff_ESI = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0;
      *puStack_8 = 0x5f;
      uStack_1 = 0xffffffff;
      func_?(&CStack_7);
      (this->fields).smoothMoveSpeed = 0.0;
      (this->fields).smoothPitchFactor = 0.0;
      this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_03 != (Transform *)0x0) {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_13,this_03,(MethodInfo *)0x0);
        fVar14 = pVVar12->y;
        fVar15 = pVVar12->z;
        (this->fields).prevWorldPosition.x = pVVar12->x;
        (this->fields).prevWorldPosition.y = fVar14;
        (this->fields).prevWorldPosition.z = fVar15;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?(unaff_ESI,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnHealthChange(Single) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_OnHealthChange
               (HoverCraftVisualization *this,float newHealth,MethodInfo *method)

{
  if (newHealth < (this->fields).maxHealth) {
    pPVar1 = (this->fields).damageSmokeEmitter;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pPVar1 = (this->fields).damageSmokeEmitter;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar1,(MethodInfo *)0x0);
      pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).fire;
      if (pDVar3 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (pDVar3,(MethodInfo *)0x0);
      func_?();
    }
  }
  if (newHealth == (this->fields).maxHealth) {
    pPVar1 = (this->fields).damageSmokeEmitter;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pPVar1 = (this->fields).damageSmokeEmitter;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar1,(MethodInfo *)0x0);
        pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).fire;
        if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                    (pDVar3,(MethodInfo *)0x0);
          func_?();
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
    BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_00,type,0.3,(MethodInfo *)0x0);
  }
  else if (fVar4 < newHealth) {
    this_00 = (this->fields).vehicleBlinker;
    if (this_00 == (VehicleBlinker *)0x0) goto code_?;
    type = BlinkType__Enum_Healing;
    goto code_?;
  }
  pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).damageSmokeEmitter;
  if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (pDVar3,(MethodInfo *)0x0);
    func_?();
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).fire;
    (this->fields).prevHealth = newHealth;
    if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (pDVar3,(MethodInfo *)0x0);
      func_?();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    uStack_2._0_4_ = (this->fields).HoverOffset.x;
    uStack_2._4_4_ = (this->fields).HoverOffset.y;
    fVar3 = (this->fields).HoverOffset.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       (&VStack_5,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    fStack_7 = pVVar4->z;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                      ((MethodInfo *)0x0);
    fStack_9 = (this->fields).HoverPeriod;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      VStack_5.y = (float)TypeInfo__UnityEngine__Mathf;
      VStack_5.x = (float)&UNK_?;
      func_?();
    }
    VStack_5.y = 0.0;
    dVar10 = (double)(fVar8 / fStack_9);
    VStack_5.x = (float)&UNK_?;
    func_?();
    a.z = fStack_7;
    a.x = (float)(undefined4)uStack_6;
    a.y = (float)uStack_6._4_4_;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_5,a,(float)dVar10,in_stack_11);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_5,*pVVar4,(this->fields).HoverAmplitude,(MethodInfo *)0x0);
    a_00.z = fVar3;
    a_00.x = (float)(undefined4)uStack_2;
    a_00.y = (float)uStack_2._4_4_;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_5,a_00,*pVVar4,(MethodInfo *)0x0);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_5,*pVVar4,(this->fields).localHoverCraftHullRootBasePosition,
                        (MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,*pVVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization_Update
               (HoverCraftVisualization *this,MethodInfo *method)

{
  HoverCraftVisualization_AnimateHullInertia(this,(MethodInfo *)0x0);
  HoverCraftVisualization_CalculateMovementValues(this,(MethodInfo *)0x0);
  HoverCraftVisualization_AnimateHullSpeed(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).hoverCraftHullRoot;
  if (pTVar1 == (Transform *)0x0) goto code_?;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)pTVar1,(MethodInfo *)0x0);
  fVar2 = (this->fields).HoverOffset.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = 0xADDR;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  fVar7 = (this->fields).HoverPeriod;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar8 = (double)(fVar6 / fVar7);
  func_?();
  a.z = 0.0;
  a.x = (float)uVar4;
  a.y = (float)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd8,a,(float)dVar8,in_stack_9);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffd8,*pVVar3,(this->fields).HoverAmplitude,
                      (MethodInfo *)0x0);
  a_00.z = fVar2;
  a_00.x = (float)(int)uVar5;
  a_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd8,a_00,*pVVar3,(MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffd8,*pVVar3,
                      (this->fields).localHoverCraftHullRootBasePosition,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar1,*pVVar3,(MethodInfo *)0x0);
  if ((this->fields)._.isInSpawner == 0) {
    if ((this->fields).vehicleIsUnoccupied == 0) {
      pEVar10 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                *)(this->fields).vehicleSeatManager;
      if (pEVar10 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                     *)0x0) goto code_?;
      pOVar11 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         (pEVar10,(MethodInfo *)0x0);
      if (pOVar11 == (Object *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).unoccupiedTime = fVar2;
        (this->fields).vehicleIsUnoccupied = 1;
      }
      if ((this->fields).vehicleIsUnoccupied == 0) goto code_?;
    }
    pEVar10 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
              *)(this->fields).vehicleSeatManager;
    if (pEVar10 == (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                   *)0x0) goto code_?;
    pOVar11 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (pEVar10,(MethodInfo *)0x0);
    if (0 < (int)pOVar11) {
      (this->fields).vehicleIsUnoccupied = 0;
    }
    if ((this->fields).vehicleIsUnoccupied != 0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (_UNK_? - (fVar2 - (this->fields).unoccupiedTime) <
          (this->fields).vehicleAboutToBeRemovedTime) {
        this_00 = (this->fields).vehicleBlinker;
        if (this_00 == (VehicleBlinker *)0x0) goto code_?;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,0.3,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = (this->fields).smoothMoveSpeed;
  fVar7 = (this->fields).minVolume;
  this_01 = (this->fields).moving;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                     (fVar2 / _UNK_?,fVar7,1.0,(MethodInfo *)0x0);
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


/* Void <Init>m__0(Object) */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__Init_m__0
               (HoverCraftVisualization *this,Object *healthVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (healthVal == (Object *)0x0) {
    func_?(0);
    healthVal = extraout_ECX;
    pSVar1 = extraout_EDX;
  }
  else {
    pSVar1 = TypeInfo__System__Single;
    if ((healthVal->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar2 = (float *)func_?(healthVal);
      HoverCraftVisualization_OnHealthChange(this,*pfVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(healthVal,pSVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* HoverCraftVisualization() */

void Assembly-CSharp.dll::HoverCraftVisualization::HoverCraftVisualization__ctor
               (HoverCraftVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__);
  (this->fields).thrusters = (List_1_UnityEngine_ParticleSystem_ *)this_00;
  (this->fields).HoverPeriod = 0.8;
  (this->fields).HoverAmplitude = 0.2;
  (this->fields).rotateRollFactor = 7.0;
  (this->fields).rollSpeed = 9.5;
  (this->fields).rollMax = 30.0;
  (this->fields).pitchMax = 30.0;
  (this->fields).pitchSpeedTime = 10.0;
  (this->fields).pitchFactor = 20.0;
  (this->fields).damageParticleFactor = 10.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).HoverOffset.x = pVVar1->x;
  (this->fields).HoverOffset.y = fVar2;
  (this->fields).HoverOffset.z = fVar3;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  fVar3 = pQVar4->x;
  fVar2 = pQVar4->y;
  fVar5 = pQVar4->z;
  fVar6 = pQVar4->w;
  (this->fields).vehicleAboutToBeRemovedTime = 3.0;
  (this->fields).prevWorldRot.x = fVar3;
  (this->fields).prevWorldRot.y = fVar2;
  (this->fields).prevWorldRot.z = fVar5;
  (this->fields).prevWorldRot.w = fVar6;
  (this->fields).minVolume = 0.03;
  (this->fields).smoothMoveSpeedTime = 5.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).smoothVelocity.x = pVVar1->x;
  (this->fields).smoothVelocity.y = fVar2;
  (this->fields).smoothVelocity.z = fVar3;
  VehicleVisualizationBase::VehicleVisualizationBase__ctor
            ((VehicleVisualizationBase *)this,(MethodInfo *)0x0);
  return;
}

