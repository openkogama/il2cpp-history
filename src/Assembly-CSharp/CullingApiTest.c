
/* Void OnDestroy() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_OnDestroy
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  this_00 = (LockCursorManager3DMode *)TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this_00 != (LockCursorManager3DMode *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              (this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
    this_01 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this_01 != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_Dispose
                (this_01,(MethodInfo *)0x0);
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Start
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  camera = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = camera;
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_Init
            (0,camera,TypeInfo__CullingApiWrapper->static_fields->baseDistance,(MethodInfo *)0x0);
  CullingApiTest_Subscribe(this,(MethodInfo *)0x0);
  return;
}


/* Void Subscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Subscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).testClasses;
  method_00 = TypeInfo__CullingApiTest__TestClass;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)this_00,
               MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
              );
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                         );
      iCullingGroupSubscriber =
           (ICullingSubscriber *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                      (int32_t)((int)&pOVar2[-1].monitor + 3),
                      MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                     );
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_Subscribe(iCullingGroupSubscriber,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSubscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_UnSubscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).testClasses;
  if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                         );
      index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (0,(int32_t)((int)&pOVar2[-1].monitor + 3),(MethodInfo *)0x0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
        unSubscriber = (ICullingSubscriber *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                                 );
        if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        CullingApiWrapper::CullingApiWrapper_UnSubscribe(unSubscriber,(MethodInfo *)0x0);
        this_00 = (List_1_MVPlayer_ *)(this->fields).testClasses;
        if (this_00 != (List_1_MVPlayer_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    (this_00,index,
                     MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Update
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).addBoundingSphere != 0) {
    CullingApiTest_Subscribe(this,(MethodInfo *)0x0);
    (this->fields).addBoundingSphere = 0;
  }
  if ((this->fields).unSubscribe != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                       );
    if (pOVar2 != (Object *)0x0) {
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                         );
      index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (0,(int32_t)((int)&pOVar2[-1].monitor + 3),(MethodInfo *)0x0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
      unSubscriber = (ICullingSubscriber *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                               );
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe(unSubscriber,(MethodInfo *)0x0);
      this_00 = (List_1_MVPlayer_ *)(this->fields).testClasses;
      if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,index,
                 MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                );
    }
    (this->fields).unSubscribe = 0;
  }
  if ((this->fields).distancesChange != 0) {
    camera = (this->fields).mainCamera;
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_ChangeDistances(10.0,camera,(MethodInfo *)0x0);
    (this->fields).distancesChange = 0;
  }
  iVar3 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= iVar3) {
      return;
    }
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if ((TypeInfo__CullingApiWrapper->static_fields->spheres == (BoundingSphere__Array *)0x0) ||
       (this_01 = (this->fields).movingTransform, this_01 == (Transform *)0x0)) break;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar4->x;
    uVar5._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    puVar7 = (undefined8 *)func_?();
    *puVar7 = uVar5;
    *(float *)(puVar7 + 1) = fVar6;
    if (TypeInfo__CullingApiWrapper->static_fields->spheres == (BoundingSphere__Array *)0x0) break;
    iVar8 = func_?(iVar3);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar8 + 0xc) = 0x40000000;
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CullingApiTest() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest__ctor
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<CullingApiTest::TestClass>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__List__);
  (this->fields).testClasses = (List_1_CullingApiTest_TestClass_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

