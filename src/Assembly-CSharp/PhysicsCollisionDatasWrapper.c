
/* Void Add(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add
               (PhysicsCollisionDatasWrapper *this,RaycastHit hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (this->fields).length;
  if (index < 100) {
    this_00 = (this->fields).physicsCollisionDatas;
    if ((this_00 != (List_1_PhysicsCollisionData_ *)0x0) &&
       (pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                            MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                           ), pIVar1 != (IEventSystemHandler *)0x0)) {
      pIVar2 = (IEventSystemHandler *)func_?(&VStack_3,&stack0xffffffc4);
      pIVar4 = pIVar2[1].klass;
      pIVar1[1] = *pIVar2;
      pIVar1[2].klass = pIVar4;
      this_01 = (Component_1 *)func_?(&stack0xffffffc4,0);
      if (this_01 != (Component_1 *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           (this_01,(MethodInfo *)0x0);
        pIVar1[2].monitor = (MonitorData *)pTVar5;
        *(undefined1 *)&pIVar1[3].klass = 0;
        pMVar6 = (MonitorData *)
                 System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                             *)&stack0xffffffc4,(MethodInfo *)0x0);
        pIVar1[3].monitor = pMVar6;
        pVVar7 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           (&VStack_3,(InputToPlayerMovementAndroid *)&stack0xffffffc4,
                            (MethodInfo *)0x0);
        fVar8 = pVVar7->y;
        pIVar4 = (IEventSystemHandler__Class *)pVVar7->z;
        pIVar1[4].klass = (IEventSystemHandler__Class *)pVVar7->x;
        pIVar1[4].monitor = (MonitorData *)fVar8;
        pIVar1[5].klass = pIVar4;
        pMVar6 = (MonitorData *)func_?(&stack0xffffffc4);
        pIVar1[5].monitor = pMVar6;
        (this->fields).length = (this->fields).length + 1;
        return;
      }
    }
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_PhysicsCollisionData_length_exce,(MethodInfo *)0x0);
  return;
}


/* Void Add(Collider, Vector3) */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Add_1
               (PhysicsCollisionDatasWrapper *this,Collider *collider,Vector3 origin,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (this->fields).length;
  if (index < 100) {
    this_00 = (this->fields).physicsCollisionDatas;
    if (this_00 != (List_1_PhysicsCollisionData_ *)0x0) {
      pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
      if (pIVar1 != (IEventSystemHandler *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pIVar1[1].klass = (IEventSystemHandler__Class *)origin.x;
        pIVar1[1].monitor = (MonitorData *)origin.y;
        pIVar1[2].klass = (IEventSystemHandler__Class *)origin.z;
        if (collider != (Collider *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)collider,(MethodInfo *)0x0);
          pIVar1[2].monitor = (MonitorData *)pTVar2;
          *(undefined1 *)&pIVar1[3].klass = 1;
          pIVar1[3].monitor = (MonitorData *)0x0;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          fVar4 = pVVar3->y;
          pIVar5 = (IEventSystemHandler__Class *)pVVar3->z;
          pIVar1[4].klass = (IEventSystemHandler__Class *)pVVar3->x;
          pIVar1[4].monitor = (MonitorData *)fVar4;
          pIVar1[5].monitor = (MonitorData *)collider;
          pIVar1[5].klass = pIVar5;
          (this->fields).length = (this->fields).length + 1;
          return;
        }
      }
    }
    func_?(0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_PhysicsCollisionData_length_exce,(MethodInfo *)0x0);
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_Clear
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  if (0 < (this->fields).length) {
    do {
      pLVar1 = (this->fields).physicsCollisionDatas;
      if (pLVar1 == (List_1_PhysicsCollisionData_ *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
      if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
      pIVar3[5].monitor = (MonitorData *)0x0;
      pLVar1 = (this->fields).physicsCollisionDatas;
      if (pLVar1 == (List_1_PhysicsCollisionData_ *)0x0) goto code_?;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                         );
      if (pIVar3 == (IEventSystemHandler *)0x0) goto code_?;
      index = index + 1;
      pIVar3[2].monitor = (MonitorData *)0x0;
    } while (index < (this->fields).length);
  }
  (this->fields).length = 0;
  return;
}


/* PhysicsCollisionDatasWrapper() */

void Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper__ctor
               (PhysicsCollisionDatasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<PhysicsCollisionData>;
  this_01 = (List_1_PhysicsCollisionData_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            ((List_1_ThemeAttributes_ThemeAttribute_ *)this_01,100,
             MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__List_int_);
  (this->fields).physicsCollisionDatas = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  iVar1 = 0;
  this_00 = (List_1_VoxelHit_ *)(this->fields).physicsCollisionDatas;
  while (this_00 != (List_1_VoxelHit_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
            List_1_VoxelHit__get_Capacity
                      (this_00,
                       MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Capacity__
                      );
    if (iVar2 <= iVar1) {
      return;
    }
    this_03 = (List_1_PhysicsCollisionData___Class *)(this->fields).physicsCollisionDatas;
    this = (PhysicsCollisionDatasWrapper *)&UNK_?;
    this_02 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
    if (this_03 == (List_1_PhysicsCollisionData___Class *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)this_02,
               MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__Add_PhysicsCollisionData_
              );
    iVar1 = iVar1 + 1;
    this_00 = _UNK_?;
    method_00 = this_03;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PhysicsCollisionData get_Item(Int32) */

PhysicsCollisionData *
Assembly-CSharp.dll::PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
          (PhysicsCollisionDatasWrapper *this,int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).physicsCollisionDatas;
  if (this_00 != (List_1_PhysicsCollisionData_ *)0x0) {
    pPVar1 = (PhysicsCollisionData *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__List<PhysicsCollisionData>__get_Item_int_
                       );
    return pPVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pPVar1 = (PhysicsCollisionData *)(*pcVar2)();
  return pPVar1;
}

