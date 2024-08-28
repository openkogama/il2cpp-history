
/* Void OnDestroy() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_OnDestroy
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__CullingApiWrapper->static_fields->cullingGroup == (CullingGroup *)0x0) {
    return;
  }
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (PostProcessEffectRenderer_1_System_Object_ *)
            TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
  if (this_00 != (PostProcessEffectRenderer_1_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    PostProcessEffectRenderer`1[System::Object]::
    PostProcessEffectRenderer_1_System_Object__set_settings(this_00,(Object *)0x0,(MethodInfo *)0x0)
    ;
    this_01 = TypeInfo__CullingApiWrapper->static_fields->cullingGroup;
    if (this_01 != (CullingGroup *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::CullingGroup::CullingGroup_Dispose
                (this_01,(MethodInfo *)0x0);
      TypeInfo__CullingApiWrapper->static_fields->cullingGroup = (CullingGroup *)0x0;
      func_?();
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Start
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  ppCVar2 = &(this->fields).mainCamera;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pCVar1 = *ppCVar2;
  if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  CullingApiWrapper::CullingApiWrapper_Init
            (0,pCVar1,TypeInfo__CullingApiWrapper->static_fields->baseDistance,(MethodInfo *)0x0);
  CullingApiTest_Subscribe(this,(MethodInfo *)0x0);
  return;
}


/* Void Subscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Subscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                   );
    func_?(&TypeInfo__CullingApiTest__TestClass);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).testClasses;
  method_00 = TypeInfo__CullingApiTest__TestClass;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (this_00 != (List_1_CullingApiTest_TestClass_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,value,
               MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__Add_CullingApiTest__TestClass_
              );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).testClasses;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      iCullingGroupSubscriber =
           mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_01,(this_01->fields)._size + -1,
                      MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                     );
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_Subscribe
                ((ICullingSubscriber *)iCullingGroupSubscriber,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UnSubscribe() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_UnSubscribe
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).testClasses;
  if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return;
    }
    index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (0,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).testClasses;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      unSubscriber = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                               );
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe
                ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 != (List_1_CullingApiTest_TestClass_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest_Update
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  if ((this->fields).addBoundingSphere != 0) {
    CullingApiTest_Subscribe(this,(MethodInfo *)0x0);
    (this->fields).addBoundingSphere = 0;
  }
  if ((this->fields).unSubscribe != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      func_?(&
                      MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).testClasses;
    if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size != 0) {
      index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (0,(pLVar1->fields)._size + -1,(MethodInfo *)0x0);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).testClasses;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      unSubscriber = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__get_Item_int_
                               );
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_UnSubscribe
                ((ICullingSubscriber *)unSubscriber,(MethodInfo *)0x0);
      pLVar1 = (this->fields).testClasses;
      if (pLVar1 == (List_1_CullingApiTest_TestClass_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__RemoveAt_int_
                );
    }
    (this->fields).unSubscribe = 0;
  }
  if ((this->fields).distancesChange != 0) {
    camera = (this->fields).mainCamera;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_ChangeDistances(10.0,camera,(MethodInfo *)0x0);
    (this->fields).distancesChange = 0;
  }
  uVar2 = 0;
  iVar3 = 0;
  while( true ) {
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CullingApiWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    if (TypeInfo__CullingApiWrapper->static_fields->_NumBoundSpheres_k__BackingField <= (int)uVar2)
    {
      return;
    }
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if ((pBVar4 == (BoundingSphere__Array *)0x0) ||
       (this_01 = (this->fields).movingTransform, this_01 == (Transform *)0x0))
    goto code_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    fVar6 = pVVar5->z;
    if (pBVar4->max_length <= uVar2) break;
    *(undefined8 *)((int)&pBVar4->vector[0].position.x + iVar3) = *(undefined8 *)pVVar5;
    *(float *)((int)&pBVar4->vector[0].position.z + iVar3) = fVar6;
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar4 == (BoundingSphere__Array *)0x0) goto code_?;
    if (pBVar4->max_length <= uVar2) break;
    *(undefined4 *)((int)&pBVar4->vector[0].radius + iVar3) = 0x40000000;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x10;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CullingApiTest() */

void Assembly-CSharp.dll::CullingApiTest::CullingApiTest__ctor
               (CullingApiTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<CullingApiTest::TestClass>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_CullingApiTest_TestClass_ *)
            func_?(TypeInfo__System__Collections__Generic__List<CullingApiTest::TestClass>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<CullingApiTest::TestClass>__List__);
  ppLVar1 = &(this->fields).testClasses;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

