
/* Void AddLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddLink
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    func_?(&TypeInfo__MV__WorldObject__Link);
    cRam_? = '\x01';
  }
  this_01 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
  if (this_01 != (Link *)0x0) {
    MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_01,(MethodInfo *)0x0);
    uStack_1 = uStack_1 & 0xffffff;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        (this_01->fields).id = *piVar4;
        uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
        pOVar2 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 2);
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          (this_01->fields).outputWOID = *piVar4;
          uStack_1._0_2_ = CONCAT11(2,(undefined1)uStack_1);
          pOVar2 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 1);
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?(pOVar2);
            (this_01->fields).inputWOID = *piVar4;
            this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).links;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)(this_01->fields).id,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                        );
              return;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddObjectLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddObjectLink
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    func_?(&TypeInfo__MV__WorldObject__ObjectLink);
    cRam_? = '\x01';
  }
  this_01 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
  if (this_01 != (ObjectLink *)0x0) {
    MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
    uStack_1 = uStack_1 & 0xffffff;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,(int)&uStack_1 + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        (this_01->fields).id = *piVar4;
        uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
        pOVar2 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                 (int)&uStack_1 + 2);
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          (this_01->fields).objectConnectorWOID = *piVar4;
          uStack_1._0_2_ = CONCAT11(2,(undefined1)uStack_1);
          pOVar2 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                   (int)&uStack_1 + 1);
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?(pOVar2);
            (this_01->fields).objectWOID = *piVar4;
            this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).objectLinks;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,(Object *)(this_01->fields).id,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                        );
              return;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddPrototype
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    func_?(&TypeInfo__RuntimePrototypeCubeModel);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1);
  authorProfileId = (RuntimePrototypeCubeModel *)0x0;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pIVar3 = extraout_ECX;
code_?:
    func_?(unaff_EBX,pIVar3);
    pIVar3 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar3);
    pSVar4 = extraout_ECX_01;
  }
  else {
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_5 = 3;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_5)
    ;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_6 = 1;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_6)
    ;
    authorProfileId =
         (RuntimePrototypeCubeModel *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__get_Item
                   (data,pOVar2,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    uStack_7 = 2;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_7)
    ;
    pOStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this_01 = (RuntimePrototypeCubeModel *)func_?();
    if (this_01 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    pBStack_9 = TypeInfo__System__Byte;
    if (pOStack_8 == (Object *)0x0) {
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)
             func_?(pOStack_8,TypeInfo__System__Byte);
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    if (authorProfileId == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((((Object__Class *)authorProfileId->klass)->_0).element_class ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar10 = (float *)func_?(authorProfileId);
      pOStack_8 = (Object *)*pfVar10;
      if (unaff_EDI == (Object *)0x0) goto code_?;
      pIVar3 = TypeInfo__System__Int32;
      if ((unaff_EDI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?(unaff_EDI);
        authorProfileId = (RuntimePrototypeCubeModel *)*piVar11;
        if (unaff_EBX == (Object *)0x0) goto code_?;
        pIVar3 = TypeInfo__System__Int32;
        if ((unaff_EBX->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          unaff_EDI = (Object *)&UNK_?;
          piVar11 = (int32_t *)func_?(unaff_EBX);
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                    (this_01,*piVar11,(int32_t)authorProfileId,(float)pOStack_8,(Byte__Array *)data,
                     (MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).prototypes;
          authorProfileId = this_01;
          if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_00,(Object *)(this_01->fields).prototypeId,(Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                      );
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(authorProfileId,pSVar4);
code_?:
  func_?(pOStack_8,pBStack_9);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddWorldObject
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  value = KoGaMaPackageClient_WorldObjectFactory
                    (data,(this->fields).worldObjects,(this->fields).prototypes,(MethodInfo *)0x0);
  if ((value != (MVWorldObjectClient *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects,
     this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)(value->fields)._.id,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single Compare(KoGaMaPackageClient, KoGaMaPackageClient) */

float Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_Compare
                (KoGaMaPackageClient *koGaMaPackageClientOriginal,
                KoGaMaPackageClient *koGaMaPackageClientDesendant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_Comparing_packages_with_differen);
    func_?(&StringLiteral_InvestigatedCubeCount__0__Matchi);
    cRam_? = '\x01';
  }
  if ((koGaMaPackageClientOriginal != (KoGaMaPackageClient *)0x0) &&
     (pDVar1 = (koGaMaPackageClientOriginal->fields).worldObjects,
     pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                        (koGaMaPackageClientOriginal->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if ((koGaMaPackageClientDesendant != (KoGaMaPackageClient *)0x0) &&
       (pDVar1 = (koGaMaPackageClientDesendant->fields).worldObjects,
       pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                          (koGaMaPackageClientDesendant->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pOVar3 != (Object *)0x0) && (pOVar2 != (Object *)0x0)) {
        if (pOVar3[10].monitor == pOVar2[10].monitor) {
          pIStack_4 = (Int32__Class *)&ppIStack_5;
          ppIStack_5 = &pIStack_4;
          (*(code *)pOVar2->klass[2]._1.genericContainerHandle)(pOVar2,pOVar3);
          if (ppIStack_5 != (Int32__Class **)0x0) {
            pIStack_4 = TypeInfo__System__Int32;
            pOVar2 = (Object *)func_?();
            ppIStack_5 = (Int32__Class **)&stack0xfffffff0;
            pOVar3 = (Object *)func_?();
            pSVar6 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_InvestigatedCubeCount__0__Matchi,pOVar2,pOVar3,
                                (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar6,(MethodInfo *)0x0);
            return (float)(int)pIStack_4 / (float)(int)ppIStack_5;
          }
        }
        else {
          pIStack_4 = (Int32__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
          pOVar2 = (Object *)func_?();
          ppIStack_5 = (Int32__Class **)&stack0xfffffff0;
          pOVar3 = (Object *)func_?();
          pSVar6 = mscorlib.dll::System::String::String_Format_1
                             (StringLiteral_Comparing_packages_with_differen,pOVar2,pOVar3,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar6,(MethodInfo *)0x0);
        }
        return 0.0;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void Destroy() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_Destroy
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    wo = (MVWorldObjectClient *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
         ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                   ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                    (this->fields).worldObjectRoot,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleDeserializedData(Dictionary`2[System.Object,System.Object], KogamaDataType) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_HandleDeserializedData
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *returnData,
               KogamaDataType__Enum dataType,MethodInfo *method)

{
  switch(dataType & 0xff) {
  case KogamaDataType__Enum_Prototypes:
    KoGaMaPackageClient_AddPrototype(this,returnData,(MethodInfo *)0x0);
    return;
  case KogamaDataType__Enum_WorldObjects:
    break;
  case KogamaDataType__Enum_Links:
    KoGaMaPackageClient_AddLink(this,returnData,(MethodInfo *)0x0);
    return;
  case KogamaDataType__Enum_ObjectLinks:
    KoGaMaPackageClient_AddObjectLink(this,returnData,(MethodInfo *)0x0);
  default:
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  value = KoGaMaPackageClient_WorldObjectFactory
                    (returnData,(this->fields).worldObjects,(this->fields).prototypes,
                     (MethodInfo *)0x0);
  if ((value != (MVWorldObjectClient *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).worldObjects,
     this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)(value->fields)._.id,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffffc);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                        (this->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      *(undefined1 *)(in_stack_2 + 0x35) = 1;
      (**(code **)(*in_stack_2 + 0x254))();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_ToString
                   (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_u000A_worldObjects_Count_);
    func_?(&StringLiteral_u000A_links_Count_);
    func_?(&StringLiteral_protypes_Count_);
    func_?(&StringLiteral_u000A_objectLinks_Count_);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,8);
  if (values == (String__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
code_?:
    IStack_2.m_value = (int32_t)&UNK_?;
    IStack_2.m_value = func_?();
    func_?();
  }
  else {
    if ((StringLiteral_protypes_Count_ != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_protypes_Count_,(values->klass->_0).element_class),
       iVar3 == 0)) goto code_?;
    pSVar4 = StringLiteral_protypes_Count_;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_protypes_Count_;
    func_?(values->vector,pSVar4);
    pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).prototypes;
    if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    IStack_2.m_value =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
         Regex+CachedCodeEntryKey,System::Object]::
         Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                   (pDVar5,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Count__
                   );
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (IStack_2.m_value = (int32_t)pSVar4, iVar3 = func_?(), iVar3 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 1);
    values->vector[1] = pSVar4;
    func_?();
    if (StringLiteral_u000A_worldObjects_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)StringLiteral_u000A_worldObjects_Count_;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 3) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 2);
    values->vector[2] = StringLiteral_u000A_worldObjects_Count_;
    func_?();
    pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).worldObjects;
    if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    IStack_2.m_value =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
         Regex+CachedCodeEntryKey,System::Object]::
         Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                   (pDVar5,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                   );
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (IStack_2.m_value = (int32_t)pSVar4, iVar3 = func_?(), iVar3 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 3);
    values->vector[3] = pSVar4;
    func_?();
    if (StringLiteral_u000A_links_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)StringLiteral_u000A_links_Count_;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 5) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 4);
    values->vector[4] = StringLiteral_u000A_links_Count_;
    func_?();
    pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).links;
    if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    IStack_2.m_value =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
         Regex+CachedCodeEntryKey,System::Object]::
         Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                   (pDVar5,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                   );
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (IStack_2.m_value = (int32_t)pSVar4, iVar3 = func_?(), iVar3 == 0))
    goto code_?;
    if (values->max_length < 6) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 5);
    values->vector[5] = pSVar4;
    func_?();
    if (StringLiteral_u000A_objectLinks_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)StringLiteral_u000A_objectLinks_Count_;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 7) goto code_?;
    IStack_2.m_value = (int32_t)(values->vector + 6);
    values->vector[6] = StringLiteral_u000A_objectLinks_Count_;
    func_?();
    pDVar5 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             (this->fields).objectLinks;
    if (pDVar5 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
    IStack_2.m_value =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
         Regex+CachedCodeEntryKey,System::Object]::
         Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                   (pDVar5,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                   );
    pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if ((pSVar4 == (String *)0x0) ||
       (IStack_2.m_value = (int32_t)pSVar4, iVar3 = func_?(), iVar3 != 0)) {
      if (7 < values->max_length) {
        IStack_2.m_value = (int32_t)(values->vector + 7);
        values->vector[7] = pSVar4;
        func_?();
        pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        return pSVar4;
      }
      goto code_?;
    }
  }
  IStack_2.m_value = (int32_t)&UNK_?;
  IStack_2.m_value = func_?();
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar6)();
  return pSVar4;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* MVWorldObjectClient WorldObjectFactory(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
          (Dictionary_2_System_Object_System_Object_ *worldObjectData,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__CollectTheItemCollectableInstance);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(0x14);
    func_?(&TypeInfo__CollectTheItem);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVAdvancedGhost);
    func_?(&TypeInfo__MVAnd);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__MVAvatarRemote);
    func_?();
    func_?();
    func_?(&TypeInfo__MVBody);
    func_?(&TypeInfo__MVBuildModeAvatarLocal);
    func_?(&TypeInfo__MVBuildModeAvatarRemote);
    func_?(0);
    func_?(&TypeInfo__MVCheckpoint);
    func_?(&TypeInfo__MVCollectible);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBaseBlueprint);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBase);
    func_?(&TypeInfo__MVCountingCube);
    func_?(&TypeInfo__MVCubeGun);
    func_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__MVCubeModelPrototypeTerrain);
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    func_?();
    func_?();
    func_?(&TypeInfo__MVFire);
    func_?(&TypeInfo__MVFlag);
    func_?(&TypeInfo__MVGameCoinChest);
    func_?(0x70);
    func_?(&TypeInfo__MVGameOptionDataObject);
    func_?(&TypeInfo__MVGamePassProgressionDataObject);
    func_?(&TypeInfo__MVGamePointChest);
    func_?(&TypeInfo__MVGamePoint);
    func_?(&TypeInfo__MVGhostInstance);
    func_?(&TypeInfo__MVGlobalSoundEmitter);
    func_?(&TypeInfo__MVGoal);
    func_?(&TypeInfo__MVGravityCube);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVHamsterWheel);
    func_?();
    func_?();
    func_?(&TypeInfo__MVKillLimit);
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBaseBlueprint
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBase);
    func_?(0);
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&TypeInfo__MVMovingPlatformNode);
    func_?(&TypeInfo__MVMovingPlatform);
    func_?(&TypeInfo__MVNegate);
    func_?(&TypeInfo__MVObjectEnabler);
    func_?(&TypeInfo__MVOculusKillLimit);
    func_?(&TypeInfo__MVPickupItemBase);
    func_?(&TypeInfo__MVPointLightPreset);
    func_?(&TypeInfo__MVPointLight);
    func_?(&TypeInfo__MVPressurePlate);
    func_?();
    func_?();
    func_?(&TypeInfo__MVRandomBox);
    func_?(&TypeInfo__MVRotator);
    func_?(&TypeInfo__MVRoundCube);
    func_?(0x88);
    func_?(&TypeInfo__MVSentryGun);
    func_?(&TypeInfo__MVSkybox);
    func_?(&TypeInfo__MVSmoke);
    func_?(&TypeInfo__MVSoundEmitter);
    func_?(&TypeInfo__MVSpawnPointBlue);
    func_?(&TypeInfo__MVSpawnPointGreen);
    func_?(&TypeInfo__MVSpawnPointRed);
    func_?(&TypeInfo__MVSpawnPointYellow);
    func_?(&TypeInfo__MVTeleportGroup);
    func_?(&TypeInfo__MVTeleporter);
    func_?();
    func_?();
    func_?(&TypeInfo__MVToggleBox);
    func_?(&TypeInfo__MVTriggerBox);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(0xcc);
    func_?(&TypeInfo__MVWaterPlane);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__ShootableButton);
    func_?(&TypeInfo__TeamEditor);
    func_?(&TypeInfo__ThemeWorldObject);
    func_?(&TypeInfo__TimeAttackFlag);
    func_?(&TypeInfo__TriggerCube);
    func_?(&TypeInfo__UseLever);
    func_?(&TypeInfo__WindTurbine);
    func_?();
    func_?();
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_ty);
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_bl);
    func_?(&StringLiteral_Attempt_to_create_abstract_Spawn);
    func_?(0xf8);
    cRam_? = '\x01';
  }
  bVar1 = 3;
  pOVar2 = (Object *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  this_85 = worldObjectData;
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (worldObjectData,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar2 == (Object *)0x0)) goto code_?;
  if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
code_?:
    func_?();
    goto code_?;
  }
  piVar3 = (int *)func_?();
  iVar4 = *piVar3;
  if (0xab < iVar4) {
    if (iVar4 == 0xb4) {
      this = (TimeAttackFlag *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this != (TimeAttackFlag *)0x0) {
        TimeAttackFlag::TimeAttackFlag__ctor(this,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
    }
    else {
      if (iVar4 != 0xb5) goto code_?;
      this_00 = (MVGamePointChest *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_00 != (MVGamePointChest *)0x0) {
        MVGamePointChest::MVGamePointChest__ctor(this_00,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
    }
    goto code_?;
  }
  switch(iVar4) {
  case 0:
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_)
    ;
    pOVar2 = (Object *)func_?();
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Object,GUILoginHandler+PlanetData]::
             Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                       ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_85,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar5 == 0) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                  HashtableFunctions_PrettyString(this_85,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_EDI,(MethodInfo *)0x0);
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
      in_stack_6 = SUB41(TypeInfo__MV__WorldObject__WorldObjectDataParameters,0);
      in_stack_7 =
           (undefined2)((uint)TypeInfo__MV__WorldObject__WorldObjectDataParameters >> 8);
      pOVar2 = (Object *)func_?();
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Object,GUILoginHandler+PlanetData]::
               Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                         ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_85,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
      pOVar2 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar2,(MethodInfo *)0x0);
    }
    in_stack_8 = (char)&worldObjectData + 3;
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_)
    ;
    pOVar2 = (Object *)func_?();
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (this_85,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)*piVar3;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
         pMVar10 != (MVLocalPlayer *)0x0)) {
        if (unaff_EDI ==
            (Dictionary_2_System_Object_System_Object_ *)
            (pMVar10->fields)._._ActorNr_k__BackingField) {
          this_03 = (MVAvatarLocal *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_03 != (MVAvatarLocal *)0x0) {
            MVAvatarLocal::MVAvatarLocal__ctor(this_03,this_85,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_03;
          }
        }
        else if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0xffffffff) {
          this_02 = (MVPreviewAvatar *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_02 != (MVPreviewAvatar *)0x0) {
            MVPreviewAvatar::MVPreviewAvatar__ctor(this_02,this_85,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_02;
          }
        }
        else {
          this_01 = (MVAvatarRemote *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_01 != (MVAvatarRemote *)0x0) {
            MVAvatarRemote::MVAvatarRemote__ctor(this_01,this_85,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_01;
          }
        }
      }
    }
    break;
  case 1:
    this_04 = (MVCubeModelInstance *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_04 != (MVCubeModelInstance *)0x0) {
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,this_85,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    }
    break;
  case 2:
    this_05 = (MVPointLight *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_05 != (MVPointLight *)0x0) {
      MVPointLight::MVPointLight__ctor(this_05,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    }
    break;
  case 3:
    this_06 = (MVTriggerBox *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_06 != (MVTriggerBox *)0x0) {
      MVTriggerBox::MVTriggerBox__ctor(this_06,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_06;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x1e:
  case 0x1f:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x3a:
code_?:
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar11,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar11,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  case 7:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
    this_29 = (MVSpawnPointBlue *)func_?();
    goto code_?;
  case 8:
    this_07 = (MVCubeModelPrototypeTerrain *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_07 != (MVCubeModelPrototypeTerrain *)0x0) {
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,this_85,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    }
    break;
  case 9:
    this_08 = (MVGroup *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_08 != (MVGroup *)0x0) {
      MVGroup::MVGroup__ctor_2(this_08,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    }
    break;
  case 0xd:
    this_09 = (MVSoundEmitter *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_09 != (MVSoundEmitter *)0x0) {
      MVSoundEmitter::MVSoundEmitter__ctor(this_09,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    }
    break;
  case 0x11:
    this_10 = (MVFlag *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_10 != (MVFlag *)0x0) {
      MVFlag::MVFlag__ctor(this_10,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    }
    break;
  case 0x13:
    this_11 = (MVBattery *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_11 != (MVBattery *)0x0) {
      MVBattery::MVBattery__ctor(this_11,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    }
    break;
  case 0x14:
    this_12 = (MVToggleBox *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_12 != (MVToggleBox *)0x0) {
      MVToggleBox::MVToggleBox__ctor(this_12,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    }
    break;
  case 0x15:
    this_13 = (MVNegate *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_13 != (MVNegate *)0x0) {
      MVNegate::MVNegate__ctor(this_13,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    }
    break;
  case 0x16:
    this_14 = (MVAnd *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_14 != (MVAnd *)0x0) {
      MVAnd::MVAnd__ctor(this_14,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    }
    break;
  case 0x17:
    this_15 = (MVExplosives *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_15 != (MVExplosives *)0x0) {
      MVExplosives::MVExplosives__ctor(this_15,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    }
    break;
  case 0x18:
    this_16 = (MVTextMsg *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_16 != (MVTextMsg *)0x0) {
      MVTextMsg::MVTextMsg__ctor(this_16,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    }
    break;
  case 0x19:
    this_17 = (MVFire *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_17 != (MVFire *)0x0) {
      MVFire::MVFire__ctor(this_17,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    }
    break;
  case 0x1a:
    this_18 = (MVSmoke *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_18 != (MVSmoke *)0x0) {
      MVSmoke::MVSmoke__ctor(this_18,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    }
    break;
  case 0x1b:
    this_19 = (MVTimeTrigger *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_19 != (MVTimeTrigger *)0x0) {
      MVTimeTrigger::MVTimeTrigger__ctor(this_19,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    }
    break;
  case 0x1c:
    this_20 = (MVTeleporter *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_20 != (MVTeleporter *)0x0) {
      MVTeleporter::MVTeleporter__ctor(this_20,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    }
    break;
  case 0x1d:
    this_21 = (MVGoal *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_21 != (MVGoal *)0x0) {
      MVGoal::MVGoal__ctor(this_21,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    }
    break;
  case 0x20:
    this_22 = (MVCubeModelFineGrainedTerrain *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_22 != (MVCubeModelFineGrainedTerrain *)0x0) {
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,this_85,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    }
    break;
  case 0x21:
    this_23 = (MVPressurePlate *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_23 != (MVPressurePlate *)0x0) {
      MVPressurePlate::MVPressurePlate__ctor(this_23,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_23;
    }
    break;
  case 0x25:
    this_24 = (MVPickupItemBase *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_24 != (MVPickupItemBase *)0x0) {
      MVPickupItemBase::MVPickupItemBase__ctor(this_24,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    }
    break;
  case 0x26:
    this_25 = (MVSkybox *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_25 != (MVSkybox *)0x0) {
      MVSkybox::MVSkybox__ctor(this_25,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    }
    break;
  case 0x27:
    this_26 = (MVSpawnPointRed *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_26 != (MVSpawnPointRed *)0x0) {
      MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_26;
    }
    break;
  case 0x28:
    this_27 = (MVSpawnPointGreen *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_27 != (MVSpawnPointGreen *)0x0) {
      MVSpawnPointGreen::MVSpawnPointGreen__ctor(this_27,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    }
    break;
  case 0x29:
    this_28 = (MVSpawnPointYellow *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_28 != (MVSpawnPointYellow *)0x0) {
      MVSpawnPointYellow::MVSpawnPointYellow__ctor(this_28,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    }
    break;
  case 0x2a:
    this_29 = (MVSpawnPointBlue *)func_?();
code_?:
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_29 != (MVSpawnPointBlue *)0x0) {
      MVSpawnPointBlue::MVSpawnPointBlue__ctor(this_29,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_29;
    }
    break;
  case 0x2b:
    this_30 = (MVObjectEnabler *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_30 != (MVObjectEnabler *)0x0) {
      MVObjectEnabler::MVObjectEnabler__ctor(this_30,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_30;
    }
    break;
  case 0x2c:
    this_31 = (MVWaterPlane *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_31 != (MVWaterPlane *)0x0) {
      MVWaterPlane::MVWaterPlane__ctor(this_31,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_31;
    }
    break;
  case 0x2d:
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_)
    ;
    pOVar2 = (Object *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_85,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <= (unaff_EDI->klass->_1).typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_EDI->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (unaff_EDI,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      in_stack_8 = 1;
      unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      if (unaff_EDI != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (((unaff_EDI->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (unaff_EDI->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (unaff_EDI,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class !=
              (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) goto code_?;
          puVar12 = (undefined1 *)func_?();
          switch(*puVar12) {
          case 7:
            this_32 = (MVMovable *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_32 != (MVMovable *)0x0) {
              MVMovable::MVMovable__ctor(this_32,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_32;
            }
            break;
          case 8:
            this_33 = (MVBody *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_33 != (MVBody *)0x0) {
              MVBody::MVBody__ctor(this_33,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_33;
            }
            break;
          case 9:
            this_34 = (MVTeleportGroup *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_34 != (MVTeleportGroup *)0x0) {
              MVTeleportGroup::MVTeleportGroup__ctor(this_34,this_85,worldObjects,(MethodInfo *)0x0)
              ;
              return (MVWorldObjectClient *)this_34;
            }
            break;
          case 10:
            this_35 = (MVSentryGunBlueprint *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_35 != (MVSentryGunBlueprint *)0x0) {
              MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                        (this_35,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_35;
            }
            break;
          case 0xb:
            this_36 = (MVMovingPlatform *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_36 != (MVMovingPlatform *)0x0) {
              MVMovingPlatform::MVMovingPlatform__ctor
                        (this_36,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_36;
            }
            break;
          case 0xc:
            this_37 = (MVMovingPlatformGroup *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_37 != (MVMovingPlatformGroup *)0x0) {
              MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                        (this_37,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_37;
            }
            break;
          case 0xd:
            this_38 = (MVRotator *)func_?();
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_38 != (MVRotator *)0x0) {
              MVRotator::MVRotator__ctor(this_38,this_85,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_38;
            }
            break;
          case 0xe:
            goto code_?;
          default:
            pSVar11 = mscorlib.dll::System::Enum::Enum_ToString
                                ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
            pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar11,
                                 (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar11,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          }
        }
      }
      break;
    }
    goto code_?;
  case 0x2e:
    this_39 = (MVPulseBox *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_39 != (MVPulseBox *)0x0) {
      MVPulseBox::MVPulseBox__ctor(this_39,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    }
    break;
  case 0x2f:
    this_40 = (MVRandomBox *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_40 != (MVRandomBox *)0x0) {
      MVRandomBox::MVRandomBox__ctor(this_40,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    }
    break;
  case 0x30:
    this_41 = (MVSentryGun *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_41 != (MVSentryGun *)0x0) {
      MVSentryGun::MVSentryGun__ctor(this_41,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    }
    break;
  case 0x31:
    this_42 = (MVCollectible *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_42 != (MVCollectible *)0x0) {
      MVCollectible::MVCollectible__ctor(this_42,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    }
    break;
  case 0x32:
    this_43 = (MVMovingPlatformNode *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_43 != (MVMovingPlatformNode *)0x0) {
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_43,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    }
    break;
  case 0x33:
    this_44 = (MVWaterPlanePreset *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_44 != (MVWaterPlanePreset *)0x0) {
      MVWaterPlanePreset::MVWaterPlanePreset__ctor(this_44,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    }
    break;
  case 0x34:
    this_45 = (MVPointLightPreset *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_45 != (MVPointLightPreset *)0x0) {
      MVPointLightPreset::MVPointLightPreset__ctor(this_45,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_45;
    }
    break;
  case 0x35:
code_?:
    this_46 = (MVGhostInstance *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_46 != (MVGhostInstance *)0x0) {
      MVGhostInstance::MVGhostInstance__ctor(this_46,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_46;
    }
    break;
  case 0x36:
    this_47 = (MVCubeGun *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_47 != (MVCubeGun *)0x0) {
      MVCubeGun::MVCubeGun__ctor(this_47,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    }
    break;
  case 0x37:
    this_48 = (MVCheckpoint *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_48 != (MVCheckpoint *)0x0) {
      MVCheckpoint::MVCheckpoint__ctor(this_48,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    }
    break;
  case 0x38:
    this_49 = (MVHoverCraft *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_49 != (MVHoverCraft *)0x0) {
      MVHoverCraft::MVHoverCraft__ctor(this_49,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    }
    break;
  case 0x39:
    this_50 = (MVWorldObjectSpawnerVehicle *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_50 != (MVWorldObjectSpawnerVehicle *)0x0) {
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_50,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    }
    break;
  case 0x3b:
    this_51 = (MVJetPack *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_51 != (MVJetPack *)0x0) {
      MVJetPack::MVJetPack__ctor(this_51,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    }
    break;
  case 0x3c:
    this_52 = (MVRoundCube *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_52 != (MVRoundCube *)0x0) {
      MVRoundCube::MVRoundCube__ctor(this_52,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_52;
    }
    break;
  case 0x3d:
    this_53 = (MVAdvancedGhost *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_53 != (MVAdvancedGhost *)0x0) {
      MVAdvancedGhost::MVAdvancedGhost__ctor(this_53,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_53;
    }
    break;
  case 0x3e:
    this_54 = (MVHamsterWheel *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_54 != (MVHamsterWheel *)0x0) {
      MVHamsterWheel::MVHamsterWheel__ctor(this_54,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    }
    break;
  case 0x3f:
    this_55 = (MVKillLimit *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_55 != (MVKillLimit *)0x0) {
      MVKillLimit::MVKillLimit__ctor(this_55,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    }
    break;
  case 0x40:
    this_56 = (MVOculusKillLimit *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_56 != (MVOculusKillLimit *)0x0) {
      MVOculusKillLimit::MVOculusKillLimit__ctor(this_56,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    }
    break;
  case 0x41:
    this_57 = (MVCountingCube *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_57 != (MVCountingCube *)0x0) {
      MVCountingCube::MVCountingCube__ctor(this_57,this_85,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_57;
    }
    break;
  default:
    switch(iVar4) {
    case 0x76:
      this_58 = (MVVehicleEnergy *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_58 != (MVVehicleEnergy *)0x0) {
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_58,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      }
      break;
    case 0x77:
      this_59 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_59 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor(this_59,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      }
      break;
    default:
      goto code_?;
    case 0x82:
      this_60 = (MVGamePoint *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_60 != (MVGamePoint *)0x0) {
        MVGamePoint::MVGamePoint__ctor(this_60,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_60;
      }
      break;
    case 0x83:
      pMVar13 = (MVWorldObjectClient *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar13 != (MVWorldObjectClient *)0x0) {
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar13,this_85,worldObjects,(MethodInfo *)0x0
                  );
        return pMVar13;
      }
      break;
    case 0x85:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar2 = (Object *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_85,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar9 == (MVNetworkGame *)0x0) ||
          (pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
          pMVar10 == (MVLocalPlayer *)0x0)) ||
         (unaff_EBX = (String *)(pMVar10->fields)._._ActorNr_k__BackingField,
         unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0)) break;
      if ((unaff_EDI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int *)func_?();
        if ((String *)*piVar3 == unaff_EBX) {
          this_62 = (MVBuildModeAvatarLocal *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_62 != (MVBuildModeAvatarLocal *)0x0) {
            MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                      (this_62,this_85,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_62;
          }
        }
        else {
          this_61 = (MVBuildModeAvatarRemote *)func_?();
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_61 != (MVBuildModeAvatarRemote *)0x0) {
            MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                      (this_61,this_85,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_61;
          }
        }
        break;
      }
      goto code_?;
    case 0x86:
      this_63 = (MVAvatarSpawnRoleCreator *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_63 != (MVAvatarSpawnRoleCreator *)0x0) {
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_63,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      }
      break;
    case 0x87:
      this_64 = (MVGameOptionDataObject *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_64 != (MVGameOptionDataObject *)0x0) {
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_64,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      }
      break;
    case 0x91:
      this_65 = (MVCameraSettings *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_65 != (MVCameraSettings *)0x0) {
        MVCameraSettings::MVCameraSettings__ctor(this_65,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      }
      break;
    case 0x92:
      this_66 = (MVGravityCube *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_66 != (MVGravityCube *)0x0) {
        MVGravityCube::MVGravityCube__ctor(this_66,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      }
      break;
    case 0x94:
      this_67 = (MVGameCoin *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_67 != (MVGameCoin *)0x0) {
        MVGameCoin::MVGameCoin__ctor(this_67,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      }
      break;
    case 0x95:
      this_68 = (MVGameCoinChest *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_68 != (MVGameCoinChest *)0x0) {
        MVGameCoinChest::MVGameCoinChest__ctor(this_68,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      }
      break;
    case 0x96:
      this_69 = (ThemeWorldObject *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_69 != (ThemeWorldObject *)0x0) {
        ThemeWorldObject::ThemeWorldObject__ctor(this_69,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      }
      break;
    case 0x97:
      this_70 = (MVDoor *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_70 != (MVDoor *)0x0) {
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      }
      break;
    case 0x98:
      this_71 = (MVDoorBlueprint *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_71 != (MVDoorBlueprint *)0x0) {
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      }
      break;
    case 0x99:
      this_72 = (MVMeleeWeaponBase *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_72 != (MVMeleeWeaponBase *)0x0) {
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      }
      break;
    case 0x9a:
      pMVar14 = (MVCostumeBaseBlueprint *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar14 != (MVCostumeBaseBlueprint *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar14,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar14;
      }
      break;
    case 0x9b:
      this_73 = (MVCostumeBase *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_73 != (MVCostumeBase *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      }
      break;
    case 0x9c:
      pMVar14 = (MVCostumeBaseBlueprint *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar14 != (MVCostumeBaseBlueprint *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar14,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar14;
      }
      break;
    case 0xa1:
      this_74 = (TeamEditor *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_74 != (TeamEditor *)0x0) {
        TeamEditor::TeamEditor__ctor(this_74,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      }
      break;
    case 0xa2:
      this_75 = (TriggerCube *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_75 != (TriggerCube *)0x0) {
        TriggerCube::TriggerCube__ctor(this_75,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      }
      break;
    case 0xa4:
      this_76 = (CollectTheItemCollectableInstance *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_76 != (CollectTheItemCollectableInstance *)0x0) {
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      }
      break;
    case 0xa5:
      this_77 = (ShootableButton *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_77 != (ShootableButton *)0x0) {
        ShootableButton::ShootableButton__ctor(this_77,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      }
      break;
    case 0xa6:
      this_78 = (UseLever *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_78 != (UseLever *)0x0) {
        UseLever::UseLever__ctor(this_78,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      }
      break;
    case 0xa7:
      this_79 = (CollectTheItemDropOff *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_79 != (CollectTheItemDropOff *)0x0) {
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      }
      break;
    case 0xa8:
      this_80 = (CollectTheItemCollectable *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_80 != (CollectTheItemCollectable *)0x0) {
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      }
      break;
    case 0xa9:
      this_81 = (CollectTheItem *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_81 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem__ctor(this_81,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_81;
      }
      break;
    case 0xaa:
      this_82 = (WindTurbine *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_82 != (WindTurbine *)0x0) {
        WindTurbine::WindTurbine__ctor(this_82,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      }
      break;
    case 0xab:
      this_83 = (MVGlobalSoundEmitter *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_83 != (MVGlobalSoundEmitter *)0x0) {
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,this_85,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_83;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  uVar15 = func_?();
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  iVar4 = (int)uVar15;
  bVar17 = (byte)unaff_EBX & *(byte *)((int)&unaff_EDI[1].fields._version + 3);
  pDVar18 = this_85 + -0x7a53ae;
  bVar19 = (byte)((ulonglong)uVar15 >> 0x28);
  bVar20 = CARRY1(*(byte *)&pDVar18->klass,bVar19);
  *(byte *)&pDVar18->klass = *(char *)&pDVar18->klass + bVar19;
  bVar21 = CARRY1(*extraout_ECX,bVar17) || CARRY1(*extraout_ECX + bVar17,bVar20);
  *extraout_ECX = *extraout_ECX + bVar17 + bVar20;
  pDVar18 = (Dictionary_2_System_Object_System_Object_ *)((int)&unaff_EDI[-1].fields._syncRoot + 3);
  pbVar22 = (byte *)(iVar4 + -0x77efb08e);
  bVar23 = *pbVar22;
  bVar24 = (byte)extraout_ECX;
  bVar19 = *pbVar22;
  *pbVar22 = bVar19 + bVar24 + bVar21;
  bVar20 = true;
  pbVar22 = extraout_ECX;
  pcVar25 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8),bVar17));
  pDVar26 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)&stack0xfffffffc;
  if (CARRY1(bVar23,bVar24) || CARRY1(bVar19 + bVar24,bVar21)) {
code_?:
    in_stack_27 = (uint *)((ulonglong)uVar15 >> 0x20);
    pcVar28 = (char *)((int)&pDVar26[-0xba53ae].klass + 3);
    *pcVar28 = *pcVar28 + (char)((uint)pbVar22 >> 8) + bVar20;
    puVar29 = (ushort *)((int)&(pDVar18->fields)._entries + 3);
    sVar30 = ((ushort)pbVar22 & 3) - (*puVar29 & 3);
    *puVar29 = *puVar29 + (ushort)(0 < sVar30) * sVar30;
    in_stack_31 = (byte *)((uint)uVar15 | 0x3d104f64);
    pbVar32 = in_stack_31 + -0x77efb08e;
    bVar20 = CARRY1(*pbVar32,(byte)pbVar22);
    *pbVar32 = *pbVar32 + (byte)pbVar22;
    in_stack_33 = pbVar22;
    in_stack_34 = pcVar25;
    in_stack_35 = pDVar26;
    in_stack_36 = this_85;
    if (!bVar20) {
code_?:
      uVar37 = SUB42(in_stack_33,0);
      ppMVar38 = &in_stack_35[2].monitor;
      bVar23 = (byte)((uint)in_stack_33 >> 8);
      bVar19 = *(char *)ppMVar38 + bVar23;
      bVar21 = CARRY1(*(byte *)ppMVar38,bVar23) || CARRY1(bVar19,bVar20);
      *(byte *)ppMVar38 = bVar19 + bVar20;
      ppOVar39 = (Object **)((int)&pDVar18[-1].fields._syncRoot + 1);
      pbVar22 = in_stack_31 + -0x77efb09c;
      bVar19 = *pbVar22;
      bVar24 = (byte)((uint)in_stack_31 >> 8);
      bVar23 = *pbVar22 + bVar24;
      *pbVar22 = bVar23 + bVar21;
      bVar20 = true;
      if (CARRY1(bVar19,bVar24) || CARRY1(bVar23,bVar21)) goto code_?;
      pbVar22 = in_stack_31 + -0x77efb08e;
      bVar19 = *pbVar22;
      *pbVar22 = *pbVar22 + (byte)in_stack_33;
      if (CARRY1(bVar19,(byte)in_stack_33)) {
        ppOVar39 = &pDVar18[-1].fields._syncRoot;
        bVar20 = true;
        goto code_?;
      }
      bVar20 = CARRY1((byte)in_stack_31,(byte)in_stack_27);
      in_stack_31 =
           (byte *)CONCAT31((int3)((uint)in_stack_31 >> 8),
                            (byte)in_stack_31 + (byte)in_stack_27);
code_?:
      bVar23 = (byte)in_stack_31;
      bVar21 = CARRY1(*in_stack_31,bVar23) || CARRY1(*in_stack_31 + bVar23,bVar20);
      *in_stack_31 = *in_stack_31 + bVar23 + bVar20;
      bVar17 = (byte)((uint)in_stack_27 >> 8);
      bVar20 = CARRY1(*in_stack_31,bVar17) || CARRY1(*in_stack_31 + bVar17,bVar21);
      *in_stack_31 = *in_stack_31 + bVar17 + bVar21;
      pbVar22 = in_stack_31 + 0x65;
      bVar24 = (byte)((uint)in_stack_31 >> 8);
      bVar19 = *pbVar22 + bVar24;
      bVar21 = CARRY1(*pbVar22,bVar24) || CARRY1(bVar19,bVar20);
      *pbVar22 = bVar19 + bVar20;
      pbVar22 = in_stack_31 + -0x3fefb09b;
      bVar19 = (byte)in_stack_27;
      bVar20 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar21);
      *pbVar22 = *pbVar22 + bVar19 + bVar21;
      bVar24 = (byte)in_stack_34 + bVar19;
      bVar21 = CARRY1((byte)in_stack_34,bVar19) || CARRY1(bVar24,bVar20);
      bVar24 = bVar24 + bVar20;
      pbVar22 = (byte *)CONCAT31((int3)((uint)in_stack_34 >> 8),bVar24);
      bVar20 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar21);
      *pbVar22 = *pbVar22 + bVar23 + bVar21;
      bVar21 = CARRY1(*pbVar22,bVar17) || CARRY1(*pbVar22 + bVar17,bVar20);
      *pbVar22 = *pbVar22 + bVar17 + bVar20;
      iVar4 = CONCAT22((short)((uint)((int)ppOVar39 + -6) >> 0x10),
                        (short)(undefined1 *)((int)ppOVar39 + -6) + -2);
      bVar19 = (byte)((uint)in_stack_34 >> 8);
      bVar20 = CARRY1(bVar19,bVar19) || CARRY1(bVar19 * '\x02',bVar21);
      in_stack_34 =
           (char *)CONCAT22((short)((uint)in_stack_34 >> 0x10),
                            CONCAT11(bVar19 * '\x02' + bVar21,bVar24));
      pbVar22 = (byte *)(iVar4 + 0x68);
      bVar19 = *pbVar22;
      bVar23 = *pbVar22;
      *pbVar22 = bVar23 + bVar24 + bVar20;
      pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(iVar4 + -2);
      *(char *)(iVar4 + -0x40efb099) =
           *(char *)(iVar4 + -0x40efb099) + (char)in_stack_33 +
           (CARRY1(bVar19,bVar24) || CARRY1(bVar23 + bVar24,bVar20));
      goto code_?;
    }
    pDVar18 = (Dictionary_2_System_Object_System_Object_ *)((int)&pDVar18[-1].fields._syncRoot + 1);
    bVar19 = *(char *)&pDVar18->klass + (byte)pcVar25;
    bVar20 = CARRY1(*(byte *)&pDVar18->klass,(byte)pcVar25) || 0xfe < bVar19;
    *(byte *)&pDVar18->klass = bVar19 + 1;
  }
  else {
    pbVar22 = (byte *)(iVar4 + 0x49104f72);
    bVar19 = *pbVar22;
    *pbVar22 = *pbVar22 + bVar24;
    pbVar22 = (byte *)(CONCAT13(bVar1,CONCAT21(in_stack_7,in_stack_6)) + -0x32efb09f)
    ;
    bVar20 = CARRY1(*pbVar22,in_stack_8) ||
             CARRY1(*pbVar22 + in_stack_8,CARRY1(bVar19,bVar24));
    *pbVar22 = *pbVar22 + in_stack_8 + CARRY1(bVar19,bVar24);
    pbVar22 = in_stack_40 + -0x77efb08e;
    bVar19 = *pbVar22;
    bVar24 = (byte)in_stack_41;
    bVar23 = *pbVar22;
    *pbVar22 = bVar23 + bVar24 + bVar20;
    if (CARRY1(bVar19,bVar24) || CARRY1(bVar23 + bVar24,bVar20)) {
      bVar20 = true;
      in_stack_31 = in_stack_40;
      in_stack_33 = in_stack_41;
      in_stack_27 = in_stack_42;
      in_stack_34 = in_stack_43;
      in_stack_35 = prototypes;
      in_stack_36 = (Dictionary_2_System_Object_System_Object_ *)worldObjects;
      pDVar18 = worldObjectData;
      goto code_?;
    }
    in_stack_40 = in_stack_40 + -0x2efb08e;
    bVar19 = *in_stack_40;
    *in_stack_40 = *in_stack_40 + bVar24;
    pbVar22 = in_stack_31 + -0x77efb08e;
    bVar23 = *pbVar22;
    bVar44 = (byte)in_stack_33;
    bVar17 = *pbVar22;
    *pbVar22 = bVar17 + bVar44 + CARRY1(bVar19,bVar24);
    if (CARRY1(bVar23,bVar44) || CARRY1(bVar17 + bVar44,CARRY1(bVar19,bVar24))) {
      ppOVar39 = (Object **)(in_stack_45 + -2);
      pbVar22 = in_stack_31 + -0x2fefb08e;
      bVar20 = CARRY1(*pbVar22,bVar44) || 0xfe < (byte)(*pbVar22 + bVar44);
      *pbVar22 = *pbVar22 + bVar44 + 1;
      goto code_?;
    }
    in_stack_31 = in_stack_31 + 0x2d104f72;
    bVar19 = *in_stack_31;
    *in_stack_31 = *in_stack_31 + bVar44;
    *(char *)((int)in_stack_27 + 0x4f) = (char)((uint)in_stack_27 >> 8);
    pbVar22 = (byte *)((int)&in_stack_35[2].klass + 2);
    bVar23 = *pbVar22 + (byte)in_stack_34;
    bVar20 = CARRY1(*pbVar22,(byte)in_stack_34) || CARRY1(bVar23,CARRY1(bVar19,bVar44));
    *pbVar22 = bVar23 + CARRY1(bVar19,bVar44);
    pDVar18 = (Dictionary_2_System_Object_System_Object_ *)(in_stack_45 + -2);
    pbVar22 = (byte *)((int)&in_stack_35[-0x164fe59].fields._count + 2);
    bVar19 = *pbVar22;
    bVar23 = *pbVar22;
    *pbVar22 = bVar23 + bVar44 + bVar20;
    uVar46 = in((short)in_stack_27);
    uVar47 = (uint)(CARRY1(bVar19,bVar44) || CARRY1(bVar23 + bVar44,bVar20));
    uVar48 = uVar46 + 0xb2efb09d;
    bVar20 = uVar46 < 0x4d104f63 || uVar48 < uVar47;
    in_stack_31 = (byte *)(uVar48 - uVar47);
    uVar15 = CONCAT44(in_stack_27,in_stack_31);
    puVar29 = (ushort *)(in_stack_45 + 0xe);
    sVar30 = ((ushort)in_stack_33 & 3) - (*puVar29 & 3);
    *puVar29 = *puVar29 + (ushort)(0 < sVar30) * sVar30;
    pbVar22 = in_stack_33;
    pcVar25 = in_stack_34;
    pDVar26 = in_stack_35;
    this_85 = in_stack_36;
    if ((SBORROW4(uVar46,0x4d104f63) != SBORROW4(uVar48,uVar47)) != (int)in_stack_31 < 0)
    goto code_?;
code_?:
    lVar49 = (longlong)(pDVar18->fields)._count * 0xADDR;
    pbVar22 = (byte *)lVar49;
    bVar20 = (int)pbVar22 != lVar49;
    pcVar25 = in_stack_34;
    pDVar26 = in_stack_35;
    this_85 = in_stack_36;
  }
  uVar37 = SUB42(pbVar22,0);
  iVar4 = 0x4f;
  pbVar32 = (byte *)((int)&pDVar18[2].fields._buckets + 2);
  bVar19 = *pbVar32 + (byte)pbVar22;
  bVar21 = CARRY1(*pbVar32,(byte)pbVar22) || CARRY1(bVar19,bVar20);
  *pbVar32 = bVar19 + bVar20;
  ppOVar39 = (Object **)((int)&pDVar18[-1].fields._syncRoot + 3);
  pbVar22 = (byte *)((int)&pDVar18[2].fields._buckets + 1);
  bVar23 = (byte)((uint)pcVar25 >> 8);
  bVar19 = *pbVar22 + bVar23;
  bVar20 = CARRY1(*pbVar22,bVar23) || CARRY1(bVar19,bVar21);
  *pbVar22 = bVar19 + bVar21;
  in_stack_34 = pcVar25;
  in_stack_35 = pDVar26;
  in_stack_36 = this_85;
code_?:
  ppOVar50 = (Object **)((int)ppOVar39 + -1);
  pbVar22 = (byte *)((int)ppOVar39 + -0x20efb097);
  bVar19 = *pbVar22;
  bVar24 = (byte)((ushort)uVar37 >> 8);
  bVar23 = *pbVar22 + bVar24;
  *pbVar22 = bVar23 + bVar20;
  *(char *)ppOVar50 =
       *(char *)ppOVar50 + (char)uVar37 + (CARRY1(bVar19,bVar24) || CARRY1(bVar23,bVar20));
  lVar49 = (longlong)*(int *)((int)ppOVar39 + 0xf) * -0x78;
  pbVar22 = (byte *)lVar49;
  bVar20 = (int)pbVar22 != lVar49;
  bVar17 = (byte)((uint)in_stack_34 >> 8);
  bVar24 = (byte)in_stack_34;
  bVar19 = (byte)in_stack_31;
  bVar23 = (byte)((uint)in_stack_31 >> 8);
  if (!bVar20) {
    *(byte *)ppOVar50 = *(char *)ppOVar50 + bVar17;
    lVar49 = (longlong)*(int *)((int)ppOVar39 + 0xf) * 0x2f;
    pbVar22 = (byte *)lVar49;
    cVar51 = in((short)in_stack_27);
    *(char *)ppOVar50 = cVar51;
    pbVar32 = (byte *)((int)ppOVar39 + 0x6b);
    bVar20 = CARRY1(*pbVar32,bVar24) || CARRY1(*pbVar32 + bVar24,(int)pbVar22 != lVar49);
    *pbVar32 = *pbVar32 + bVar24 + ((int)pbVar22 != lVar49);
    pbVar32 = (byte *)((int)&in_stack_36[2].monitor + 3);
    bVar52 = (byte)in_stack_27;
    bVar21 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar20);
    *pbVar32 = *pbVar32 + bVar52 + bVar20;
    pbVar32 = (byte *)((int)&in_stack_36[-0x18a53ae].monitor + 3);
    bVar20 = CARRY1(*pbVar32,bVar19) || CARRY1(*pbVar32 + bVar19,bVar21);
    *pbVar32 = *pbVar32 + bVar19 + bVar21;
    bVar53 = (byte)((uint)in_stack_27 >> 8);
    bVar44 = bVar53 + bVar23;
    bVar21 = CARRY1(bVar53,bVar23) || CARRY1(bVar44,bVar20);
    bVar44 = bVar44 + bVar20;
    uVar37 = CONCAT11(bVar44,bVar52);
    in_stack_27 = (uint *)CONCAT22((short)((uint)in_stack_27 >> 0x10),uVar37);
    bVar53 = *(char *)&in_stack_36->klass + bVar52;
    bVar20 = CARRY1(*(byte *)&in_stack_36->klass,bVar52) || CARRY1(bVar53,bVar21);
    *(byte *)&in_stack_36->klass = bVar53 + bVar21;
    uVar16 = 0x6846104f;
    pDVar54 = &in_stack_36[2].fields;
    bVar53 = *(char *)&pDVar54->_buckets + bVar44;
    bVar21 = CARRY1(*(byte *)&pDVar54->_buckets,bVar44) || CARRY1(bVar53,bVar20);
    *(byte *)&pDVar54->_buckets = bVar53 + bVar20;
    pbVar32 = (byte *)((int)ppOVar39 + 99);
    bVar53 = (byte)lVar49;
    bVar20 = CARRY1(*pbVar32,bVar53) || CARRY1(*pbVar32 + bVar53,bVar21);
    *pbVar32 = *pbVar32 + bVar53 + bVar21;
    pbVar32 = pbVar22 + -0x26efb094;
    bVar52 = (byte)((ulonglong)lVar49 >> 8);
    bVar44 = *pbVar32 + bVar52;
    bVar21 = CARRY1(*pbVar32,bVar52) || CARRY1(bVar44,bVar20);
    *pbVar32 = bVar44 + bVar20;
    uVar55 = in(uVar37);
    *(undefined1 *)(ppOVar39 + -2) = uVar55;
    pbVar32 = in_stack_31 + 0x9104f72;
    bVar56 = CARRY1(*pbVar32,bVar53) || CARRY1(*pbVar32 + bVar53,bVar21);
    *pbVar32 = *pbVar32 + bVar53 + bVar21;
    pDVar57 = (Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ *)in(uVar37);
    ppOVar39[-2] = (Object *)pDVar57;
    bVar20 = CARRY1(*pbVar22,bVar17) || CARRY1(*pbVar22 + bVar17,bVar56);
    *pbVar22 = *pbVar22 + bVar17 + bVar56;
    pDVar58 = (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)in(uVar37);
    *(Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ **)((int)ppOVar39 + -5)
         = pDVar58;
  }
  pbVar32 = pbVar22 + 0x6d;
  bVar52 = (byte)((uint)pbVar22 >> 8);
  bVar21 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar20);
  *pbVar32 = *pbVar32 + bVar52 + bVar20;
  pbVar32 = (byte *)((int)&in_stack_36->klass + (int)in_stack_35 * 2);
  bVar20 = CARRY1(*pbVar32,bVar17) || CARRY1(*pbVar32 + bVar17,bVar21);
  *pbVar32 = *pbVar32 + bVar17 + bVar21;
  pbVar32 = (byte *)((int)&in_stack_36[1].fields._version + (int)in_stack_35 * 2 + 3);
  bVar21 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar20);
  *pbVar32 = *pbVar32 + bVar52 + bVar20;
  pbVar32 = (byte *)((int)&in_stack_36[0x24eeb01].fields._version +
                   (int)in_stack_35 * 2 + 3);
  bVar20 = CARRY1(*pbVar32,bVar24) || CARRY1(*pbVar32 + bVar24,bVar21);
  *pbVar32 = *pbVar32 + bVar24 + bVar21;
  bVar21 = CARRY1(bVar23,bVar17) || CARRY1(bVar23 + bVar17,bVar20);
  uVar37 = (undefined2)((uint)in_stack_31 >> 0x10);
  bVar44 = bVar23 + bVar17 + bVar20;
  sVar30 = (short)in_stack_27;
  out(*(undefined1 *)&in_stack_36->klass,sVar30);
  pbVar32 = (byte *)((int)ppOVar39 + (int)in_stack_35 * 2 + -6);
  bVar20 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar21);
  *pbVar32 = *pbVar32 + bVar52 + bVar21;
  pbVar32 = (byte *)((int)ppOVar39 + (int)in_stack_35 * 2 + 0x48);
  bVar21 = CARRY1(*pbVar32,bVar24) || CARRY1(*pbVar32 + bVar24,bVar20);
  *pbVar32 = *pbVar32 + bVar24 + bVar20;
  pbVar32 = (byte *)((int)ppOVar39 + (int)in_stack_35 * 2 + 0x6fbc1048);
  bVar53 = (byte)pbVar22;
  bVar20 = CARRY1(*pbVar32,bVar53) || CARRY1(*pbVar32 + bVar53,bVar21);
  *pbVar32 = *pbVar32 + bVar53 + bVar21;
  bVar23 = bVar44 + bVar52;
  bVar21 = CARRY1(bVar44,bVar52) || CARRY1(bVar23,bVar20);
  bVar23 = bVar23 + bVar20;
  iVar59 = CONCAT22(uVar37,CONCAT11(bVar23,bVar19));
  puVar12 = (undefined1 *)((int)&in_stack_36->monitor + 1);
  out(*(undefined4 *)((int)&in_stack_36->klass + 1),sVar30);
  pbVar32 = (byte *)(iVar59 + (int)puVar12 * 2);
  bVar20 = CARRY1(*pbVar32,bVar24) || CARRY1(*pbVar32 + bVar24,bVar21);
  *pbVar32 = *pbVar32 + bVar24 + bVar21;
  pbVar32 = (byte *)(iVar59 + 0x4f + (int)puVar12 * 2);
  bVar21 = CARRY1(*pbVar32,bVar53) || CARRY1(*pbVar32 + bVar53,bVar20);
  *pbVar32 = *pbVar32 + bVar53 + bVar20;
  pbVar32 = (byte *)(iVar59 + 0x4f + (int)puVar12 * 2);
  bVar20 = CARRY1(*pbVar32,bVar17) || CARRY1(*pbVar32 + bVar17,bVar21);
  *pbVar32 = *pbVar32 + bVar17 + bVar21;
  pbVar32 = (byte *)(iVar59 + 0x70dc104f + (int)puVar12 * 2);
  bVar21 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar20);
  *pbVar32 = *pbVar32 + bVar52 + bVar20;
  pbVar32 = pbVar22 + (int)puVar12 * 2;
  bVar20 = CARRY1(*pbVar32,bVar53) || CARRY1(*pbVar32 + bVar53,bVar21);
  *pbVar32 = *pbVar32 + bVar53 + bVar21;
  pbVar32 = pbVar22 + (int)puVar12 * 2;
  bVar21 = CARRY1(*pbVar32,bVar17) || CARRY1(*pbVar32 + bVar17,bVar20);
  *pbVar32 = *pbVar32 + bVar17 + bVar20;
  pbVar32 = pbVar22 + (int)puVar12 * 2 + 0x4f;
  bVar20 = CARRY1(*pbVar32,bVar52) || CARRY1(*pbVar32 + bVar52,bVar21);
  *pbVar32 = *pbVar32 + bVar52 + bVar21;
  pbVar22 = pbVar22 + (int)puVar12 * 2 + 0x71cc104f;
  bVar21 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar20);
  *pbVar22 = *pbVar22 + bVar24 + bVar20;
  bVar44 = bVar23 + bVar17;
  bVar20 = CARRY1(bVar23,bVar17) || CARRY1(bVar44,bVar21);
  pcVar25 = (char *)CONCAT22(uVar37,CONCAT11(bVar44 + bVar21,bVar19));
  if (SCARRY1(bVar23,bVar17) != SCARRY1(bVar44,bVar21)) {
    pbVar22 = (byte *)((int)in_stack_27 + (int)puVar12 * 2);
    bVar21 = CARRY1(*pbVar22,bVar52) || CARRY1(*pbVar22 + bVar52,bVar20);
    *pbVar22 = *pbVar22 + bVar52 + bVar20;
    pbVar22 = (byte *)((int)in_stack_27 + (int)puVar12 * 2 + 0x4f);
    bVar23 = *pbVar22;
    bVar17 = *pbVar22;
    *pbVar22 = bVar17 + bVar24 + bVar21;
    *pcVar25 = *pcVar25 + bVar19 + (CARRY1(bVar23,bVar24) || CARRY1(bVar17 + bVar24,bVar21));
    *in_stack_27 = (uint)(pcVar25 + *in_stack_27);
    iVar59 = CONCAT31((int3)((uint)pcVar25 >> 8),
                      bVar19 + (char)*in_stack_27 + (char)*in_stack_27 +
                      (char)*in_stack_27 + (char)*in_stack_27 + *in_stack_34 +
                      '\x02') + 0x2020706;
    *in_stack_27 =
         *in_stack_27 |
         CONCAT31((int3)((uint)iVar59 >> 8),
                  (char)iVar59 + (char)*in_stack_27 + (char)*in_stack_27 +
                  (char)*in_stack_27);
    pcVar60 = (code *)swi(3);
    pMVar13 = (MVWorldObjectClient *)(*pcVar60)(uVar16,0x4f,iVar4);
    return pMVar13;
  }
  out(sVar30,bVar19);
  bVar21 = CARRY1(bVar19,bVar52) || CARRY1(bVar19 + bVar52,bVar20);
  bVar19 = bVar19 + bVar52 + bVar20;
  sVar30 = sVar30 + -1;
  out(sVar30,bVar19);
  bVar20 = CARRY1(bVar19,bVar17) || CARRY1(bVar19 + bVar17,bVar21);
  bVar19 = bVar19 + bVar17 + bVar21 + 1;
  out(sVar30,bVar19);
  cVar51 = bVar19 + bVar17 + bVar20;
  out(sVar30,cVar51);
  out(sVar30,cVar51 + bVar17 + (CARRY1(bVar19,bVar17) || CARRY1(bVar19 + bVar17,bVar20)) + 'C');
  iVar4 = (int)puVar12 * 0x10;
  func_?();
  func_?(0x9c);
  func_?();
  func_?();
  func_?();
  func_?();
  uRam_? = 1;
  pOVar61 = (Object__Class *)func_?();
  if (pOVar61 != (Object__Class *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pOVar61,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
              );
    pOVar2 = *(Object **)(iVar4 + 8);
    pOVar2[1].klass = pOVar61;
    func_?();
    pPVar62 = (ParameterOverride_1_System_Object_ *)func_?();
    if (pPVar62 != (ParameterOverride_1_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                (pPVar62,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      pOVar2[1].monitor = (MonitorData *)pPVar62;
      func_?();
      pOVar61 = (Object__Class *)func_?();
      if (pOVar61 != (Object__Class *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pOVar61,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                  );
        pOVar2[2].klass = pOVar61;
        func_?();
        pPVar62 = (ParameterOverride_1_System_Object_ *)func_?();
        if (pPVar62 != (ParameterOverride_1_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    (pPVar62,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                    );
          pOVar2[2].monitor = (MonitorData *)pPVar62;
          uVar63 = SUB43(&pOVar2[2].monitor,0);
          uVar55 = (undefined1)((uint)&pOVar2[2].monitor >> 0x18);
          func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar2,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT13(uVar55,uVar63));
          this_84 = (UnityAction_2_System_Object_System_ByteEnum_ *)func_?();
          if (this_84 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                      (this_84,pOVar2,
                       MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar61 = (Object__Class *)
                      KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                                (*(BytePacker **)(iVar4 + 0xc),
                                 (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                                  *)this_84,(bool)*(undefined4 *)(iVar4 + 0x10),(MethodInfo *)0x0);
            pOVar2[3].klass = pOVar61;
            return (MVWorldObjectClient *)pOVar61;
          }
        }
      }
    }
  }
  func_?();
  pcVar60 = (code *)swi(3);
  pMVar13 = (MVWorldObjectClient *)(*pcVar60)();
  return pMVar13;
}


/* KoGaMaPackageClient(BytePacker, Boolean) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient__ctor
               (KoGaMaPackageClient *this,BytePacker *koGaMaData,bool readRuntimeValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>)
    ;
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&
                    MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                           );
  if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
              );
    (this->fields).prototypes = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields).worldObjects = this_01;
      func_?(&(this->fields).worldObjects,this_01);
      this_02 = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                               );
      if (this_02 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                  );
        (this->fields).links = this_02;
        func_?(&(this->fields).links,this_02);
        this_03 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                                 );
        if (this_03 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                    );
          method_00 = (MethodInfo *)&(this->fields).objectLinks;
          (this->fields).objectLinks = this_03;
          func_?(method_00,this_03);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,method_00);
          this_04 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                                   );
          if (this_04 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                      (this_04,(Object *)this,
                       MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            iVar1 = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                              (koGaMaData,
                               (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                                *)this_04,readRuntimeValues,(MethodInfo *)0x0);
            (this->fields).worldObjectRoot = iVar1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

