
/* Void Validate(MVWorldObjectClient, String, Object) */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator_Validate
               (MVWorldObjectClient *wo,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__WorldObjectDataValidator);
    func_?(&StringLiteral_item);
    func_?(&StringLiteral_blueprint);
    func_?(&StringLiteral_itemData);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  wo = (MVWorldObjectClient *)(wo->fields)._.data;
  if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectDataValidator);
  }
  bVar1 = WorldObjectDataValidator_ValidateForGivenData
                    ((Dictionary_2_System_Object_System_Object_ *)wo,key,value,::StringLiteral__,
                     (MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  pMVar2 = (MethodInfo *)&stack0xfffffff8;
  data = 
  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
  ;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)wo,
                     (Object *)StringLiteral_BlueprintData,(Object **)pMVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar1 == 0) {
code_?:
    data = pMVar2;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)wo,
                       (Object *)StringLiteral_itemData,(Object **)&stack0xfffffff4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((data != (MethodInfo *)0x0) &&
         (((byte)data->methodPointer[0xb4] <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth ||
          (*(Dictionary_2_System_Object_System_Object___Class **)
            (*(int *)(data->methodPointer + 100) + -4 +
            (uint)(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth * 4) !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
      goto code_?;
      bVar1 = WorldObjectDataValidator_ValidateForGivenData
                        ((Dictionary_2_System_Object_System_Object_ *)data,key,value,
                         StringLiteral_item,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
    }
    if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__WorldObjectDataValidator);
    }
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
    if (this == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__WorldObjectDataValidator);
      }
      this_00 = TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData;
      if (((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
          (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_00,(Object *)key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar3 == (Object *)0x0)) ||
         (left._source = (CancellationTokenSource *)
                         mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0),
         value == (Object *)0x0)) goto code_?;
      right._source =
           (CancellationTokenSource *)
           mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                        (left,right,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
      wo = (MVWorldObjectClient *)&UNK_?;
      func_?();
    }
    if ((data == (MethodInfo *)0x0) ||
       (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (byte)data->methodPointer[0xb4] &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(data->methodPointer + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth * 4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      bVar1 = WorldObjectDataValidator_ValidateForGivenData
                        ((Dictionary_2_System_Object_System_Object_ *)data,key,value,
                         StringLiteral_blueprint,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      goto code_?;
    }
code_?:
    func_?(data,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
code_?:
    func_?();
    func_?();
    func_?();
    puVar4 = (undefined4 *)func_?();
    uVar5 = *puVar4;
    func_?();
    func_?();
    pOVar3 = (Object *)func_?(uVar5,key);
    func_?(pOVar3);
    arg1 = mscorlib.dll::System::Object::Object_GetType(pOVar3,(MethodInfo *)0x0);
    func_?(value);
    arg2 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
    pSVar6 = (String *)func_?();
    pSVar6 = mscorlib.dll::System::String::String_Format_2
                       (pSVar6,(Object *)key,(Object *)arg1,(Object *)arg2,(MethodInfo *)0x0);
    func_?();
    value = (Object *)func_?();
    func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1((Exception *)value,pSVar6,(MethodInfo *)0x0);
    func_?();
    func_?();
  }
  pMVar2 = (MethodInfo *)0x0;
  pSVar6 = (String *)func_?(&StringLiteral_Data_not_in_wo_or_in_lazyAddedDa);
  pSVar6 = mscorlib.dll::System::String::String_Format_1(pSVar6,(Object *)key,value,pMVar2);
  uVar5 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar5);
  func_?(this_01);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar6,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__WorldObjectDataValidator__Validate_MVWorldObjectClient__System__String__System__Object_
                 );
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean ValidateForGivenData(Dictionary`2[System.Object,System.Object], String, Object, String)
    */

bool Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator_ValidateForGivenData
               (Dictionary_2_System_Object_System_Object_ *data,String *key,Object *value,
               String *dataName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)data,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      key = (String *)0x0;
      left._source = (CancellationTokenSource *)
                     mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        dataName = (String *)mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        key = (String *)&UNK_?;
        bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                          (left,(CancellationToken)dataName,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return 1;
        }
        goto code_?;
      }
    }
  }
  dataName = (String *)&UNK_?;
  func_?();
code_?:
  pSStack3 = (String *)0x4;
  ppOStack4 = &TypeInfo__System__Object;
  ppOStack4 = (Object__Array__Class **)func_?();
  args = (Object__Array *)func_?();
  pOStack5 = args;
  func_?();
  func_?();
  pSStack3 = dataName;
  ppOStack4 = (Object__Array__Class **)0x0;
  func_?();
  pOStack5 = args;
  func_?();
  func_?();
  pOStack5 = (Object__Array *)key;
  func_?();
  func_?();
  func_?();
  pOVar2 = (Object *)func_?();
  func_?(pOVar2);
  pTVar6 = mscorlib.dll::System::Object::Object_GetType(pOVar2,(MethodInfo *)0x0);
  func_?(args);
  func_?(args,pTVar6);
  pOStack5 = (Object__Array *)pTVar6;
  func_?();
  func_?();
  pTVar6 = mscorlib.dll::System::Object::Object_GetType
                     ((Object *)
                      &
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      ,(MethodInfo *)0x0);
  func_?();
  func_?();
  pOStack5 = (Object__Array *)pTVar6;
  func_?();
  pSVar7 = (String *)func_?();
  pSVar7 = mscorlib.dll::System::String::String_Format_3(pSVar7,args,(MethodInfo *)0x0);
  func_?();
  this = (Exception *)func_?();
  func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar7,(MethodInfo *)0x0);
  uStack8 = func_?();
  pEStack9 = this;
  func_?();
  pcVar10 = (code *)swi(3);
  bVar1 = (*pcVar10)();
  return bVar1;
}


/* WorldObjectDataValidator() */

void Assembly-CSharp.dll::WorldObjectDataValidator::WorldObjectDataValidator__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__WorldObjectDataValidator);
    func_?(&StringLiteral_starAmount);
    func_?(&StringLiteral_gameCoinAmount);
    func_?(&StringLiteral_test);
    func_?(&StringLiteral_levelAmount);
    func_?(&StringLiteral_Lives);
    func_?(&StringLiteral_RequiredRank);
    func_?(&StringLiteral_rewardedAd);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_test,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_levelAmount,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_gameCoinAmount,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_starAmount,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_RequiredRank,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack2 = &stack0xffffffe0;
    pIStack3 = TypeInfo__System__Int32;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_team,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_rewardedAd,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,(Object *)StringLiteral_Lives,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__WorldObjectDataValidator->static_fields->lazyAddedData = this;
    pWStack4 = TypeInfo__WorldObjectDataValidator->static_fields;
    pDStack5 = this;
    func_?();
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

