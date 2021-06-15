
/* Void Destroy() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Destroy
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_UnSubscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  (this->fields).callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)0x0;
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_OnStateChanged
               (CullingSubscriberBase *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UnityEngine_Vector2_ *)(this->fields).callback;
  if (this_00 != (Action_1_UnityEngine_Vector2_ *)0x0) {
    mscorlib.dll::System::Action`1[UnityEngine::Vector2]::Action_1_UnityEngine_Vector2__Invoke
              (this_00,(Vector2)cullingGroupEvent,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__Invoke_UnityEngine__CullingGroupEvent_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Setup(Single, Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_Setup
               (CullingSubscriberBase *this,float radius,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CullingSubscriberBase_set_Position(this,position,(MethodInfo *)0x0);
  CullingSubscriberBase_set_Radius(this,radius,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  iVar1 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(0.0,(MethodInfo *)0x0);
  (this->fields)._DistanceBandIndex_k__BackingField = iVar1;
  return;
}


/* CullingSubscriberBase() */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor
               (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (pBVar1->max_length ==
      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField) {
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    array = &TypeInfo__CullingApiWrapper->static_fields->spheres;
    pBVar1 = *array;
    if (pBVar1 == (BoundingSphere__Array *)0x0) goto code_?;
    mscorlib.dll::System::Array::Array_Resize_161
              ((VoxelHit__Array **)array,pBVar1->max_length + 1000,
               void_MethodInfo__System__Array__Resize<UnityEngine::BoundingSphere>_UnityEngine__BoundingSphere___int_
              );
    this_00 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this_00 == (CullingGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_SetBoundingSpheres
              (this_00,TypeInfo__CullingApiWrapper->static_fields->spheres,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = (Dictionary_2_System_Int32_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingSubscribers;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (this_01 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              (this_01,TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField,
               in_stack_2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ICullingSubscriber>__Add_int__ICullingSubscriber_
              );
    CullingApiWrapper::CullingApiWrapper_AddBoundingSphere((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (in_stack_2 != (Object *)0x0) {
      func_?(2,TypeInfo__ICullingSubscriber,in_stack_2,
                      TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField +
                      -1);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* CullingSubscriberBase(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_1
               (CullingSubscriberBase *this,UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  (this->fields).callback = callback;
  return;
}


/* CullingSubscriberBase(Single, Vector3, UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase__ctor_2
               (CullingSubscriberBase *this,float radius,Vector3 position,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  CullingApiWrapper::CullingApiWrapper_Subscribe((ICullingSubscriber *)this,(MethodInfo *)0x0);
  bVar1 = cRam_? == '\0';
  (this->fields).callback = callback;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  CullingSubscriberBase_set_Position(this,position,(MethodInfo *)0x0);
  CullingSubscriberBase_set_Radius(this,radius,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  iVar2 = CullingApiWrapper::CullingApiWrapper_GetDistanceBand(radius,(MethodInfo *)0x0);
  (this->fields)._DistanceBandIndex_k__BackingField = iVar2;
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Position
                    (Vector3 *__return_storage_ptr__,CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < pBVar1->max_length) {
      fVar3 = pBVar1->vector[uVar2].position.y;
      fVar4 = pBVar1->vector[uVar2].position.z;
      __return_storage_ptr__->x = pBVar1->vector[uVar2].position.x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Single get_Radius() */

float Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_get_Radius
                (CullingSubscriberBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < pBVar1->max_length) {
      return pBVar1->vector[uVar2].radius;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Position
               (CullingSubscriberBase *this,Vector3 value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < pBVar1->max_length) {
      pBVar1->vector[uVar2].position.x = value.x;
      pBVar1->vector[uVar2].position.y = value.y;
      pBVar1->vector[uVar2].position.z = value.z;
      return;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::CullingSubscriberBase::CullingSubscriberBase_set_Radius
               (CullingSubscriberBase *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  pBVar1 = TypeInfo__CullingApiWrapper->static_fields->spheres;
  if (pBVar1 == (BoundingSphere__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (this->fields)._CullingIndex_k__BackingField;
    if (uVar2 < pBVar1->max_length) {
      pBVar1->vector[uVar2].radius = value;
      return;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

