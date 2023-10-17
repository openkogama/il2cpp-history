
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
     this = (KoGaMaPackageClient *)returnData,
     this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)(value->fields)._.id,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  bVar1 = func_?();
  in_AF = 9 < (bVar1 & 0xf) | in_AF;
  pbVar2 = (byte *)(extraout_ECX + 0x58);
  bVar1 = *pbVar2;
  bVar3 = *pbVar2 + (byte)extraout_ECX;
  *pbVar2 = bVar3 + in_AF;
  ppDVar4 = &(((Dictionary_2_System_Object_System_Object_ *)((int)this + -0x4fefb0d0))->fields).
             _values;
  *(char *)ppDVar4 =
       *(char *)ppDVar4 + unaff_BL + (CARRY1(bVar1,(byte)extraout_ECX) || CARRY1(bVar3,in_AF));
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
code_?:
    IStack_2.m_value = 0;
    uVar1 = func_?();
    func_?(uVar1);
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
    if (pSVar4 != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(pSVar4);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar4;
    IStack_2.m_value = (int32_t)pSVar4;
    func_?(values->vector + 1);
    if (StringLiteral_u000A_worldObjects_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(StringLiteral_u000A_worldObjects_Count_);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 3) goto code_?;
    IStack_2.m_value = (int32_t)StringLiteral_u000A_worldObjects_Count_;
    values->vector[2] = StringLiteral_u000A_worldObjects_Count_;
    func_?(values->vector + 2);
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
    if (pSVar4 != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(pSVar4);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar4;
    IStack_2.m_value = (int32_t)pSVar4;
    func_?(values->vector + 3);
    if (StringLiteral_u000A_links_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(StringLiteral_u000A_links_Count_);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 5) goto code_?;
    IStack_2.m_value = (int32_t)StringLiteral_u000A_links_Count_;
    values->vector[4] = StringLiteral_u000A_links_Count_;
    func_?(values->vector + 4);
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
    if (pSVar4 != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(pSVar4);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 6) goto code_?;
    values->vector[5] = pSVar4;
    IStack_2.m_value = (int32_t)pSVar4;
    func_?(values->vector + 5);
    if (StringLiteral_u000A_objectLinks_Count_ != (String *)0x0) {
      IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
      iVar3 = func_?(StringLiteral_u000A_objectLinks_Count_);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (values->max_length < 7) goto code_?;
    IStack_2.m_value = (int32_t)StringLiteral_u000A_objectLinks_Count_;
    values->vector[6] = StringLiteral_u000A_objectLinks_Count_;
    func_?(values->vector + 6);
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
    if (pSVar4 == (String *)0x0) {
code_?:
      if (7 < values->max_length) {
        values->vector[7] = pSVar4;
        IStack_2.m_value = (int32_t)pSVar4;
        func_?(values->vector + 7);
        pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        return pSVar4;
      }
      goto code_?;
    }
    IStack_2.m_value = (int32_t)(values->klass->_0).element_class;
    iVar3 = func_?(pSVar4);
    if (iVar3 != 0) goto code_?;
  }
  IStack_2.m_value = 0;
  uVar1 = func_?();
  func_?(uVar1);
code_?:
  IStack_2.m_value = (int32_t)&UNK_?;
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?();
  bVar2 = 0;
  if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (worldObjectData,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  bVar2 = 0;
  if (pOVar1 == (Object *)0x0) goto code_?;
  pIVar3 = (pOVar1->klass->_0).element_class;
  pIVar4 = (TypeInfo__System__Int32->_0).element_class;
  bVar2 = pIVar3 < pIVar4;
  if (pIVar3 != pIVar4) {
code_?:
    func_?();
    goto code_?;
  }
  piVar5 = (int *)func_?();
  iVar6 = *piVar5;
  if (0xab < iVar6) {
    if (iVar6 == 0xb4) {
      this = (TimeAttackFlag *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this != (TimeAttackFlag *)0x0) {
        TimeAttackFlag::TimeAttackFlag__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
    }
    else {
      if (iVar6 != 0xb5) goto code_?;
      this_00 = (MVGamePointChest *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_00 != (MVGamePointChest *)0x0) {
        MVGamePointChest::MVGamePointChest__ctor
                  (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
    }
    goto code_?;
  }
  switch(iVar6) {
  case 0:
    pOVar1 = (Object *)func_?();
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)worldObjectData,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                  HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)unaff_EDI,(MethodInfo *)0x0);
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,GUILoginHandler+PlanetData]::
      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)worldObjectData,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                );
      pOVar1 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar1,(MethodInfo *)0x0);
    }
    pOVar1 = (Object *)func_?();
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    bVar2 = 0;
    if (pOVar1 != (Object *)0x0) {
      pIVar3 = (pOVar1->klass->_0).element_class;
      pIVar4 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 != pIVar4) goto code_?;
      piVar5 = (int *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)*piVar5;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar8 != (MVNetworkGame *)0x0) {
        pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar9 != (MVLocalPlayer *)0x0) {
          if (unaff_EDI ==
              (Dictionary_2_System_Object_System_Object_ *)
              (pMVar9->fields)._._ActorNr_k__BackingField) {
            this_03 = (MVAvatarLocal *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_03 != (MVAvatarLocal *)0x0) {
              MVAvatarLocal::MVAvatarLocal__ctor
                        (this_03,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_03;
            }
          }
          else if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0xffffffff) {
            this_02 = (MVPreviewAvatar *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_02 != (MVPreviewAvatar *)0x0) {
              MVPreviewAvatar::MVPreviewAvatar__ctor
                        (this_02,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_02;
            }
          }
          else {
            this_01 = (MVAvatarRemote *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_01 != (MVAvatarRemote *)0x0) {
              MVAvatarRemote::MVAvatarRemote__ctor
                        (this_01,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_01;
            }
          }
        }
      }
    }
    break;
  case 1:
    this_04 = (MVCubeModelInstance *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_04 != (MVCubeModelInstance *)0x0) {
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    }
    break;
  case 2:
    this_05 = (MVPointLight *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_05 != (MVPointLight *)0x0) {
      MVPointLight::MVPointLight__ctor(this_05,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    }
    break;
  case 3:
    this_06 = (MVTriggerBox *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_06 != (MVTriggerBox *)0x0) {
      MVTriggerBox::MVTriggerBox__ctor(this_06,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
    pSVar10 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar10,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar10,(MethodInfo *)0x0);
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
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_07 != (MVCubeModelPrototypeTerrain *)0x0) {
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    }
    break;
  case 9:
    this_08 = (MVGroup *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_08 != (MVGroup *)0x0) {
      MVGroup::MVGroup__ctor_2(this_08,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    }
    break;
  case 0xd:
    this_09 = (MVSoundEmitter *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_09 != (MVSoundEmitter *)0x0) {
      MVSoundEmitter::MVSoundEmitter__ctor(this_09,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    }
    break;
  case 0x11:
    this_10 = (MVFlag *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_10 != (MVFlag *)0x0) {
      MVFlag::MVFlag__ctor(this_10,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    }
    break;
  case 0x13:
    this_11 = (MVBattery *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_11 != (MVBattery *)0x0) {
      MVBattery::MVBattery__ctor(this_11,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    }
    break;
  case 0x14:
    this_12 = (MVToggleBox *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_12 != (MVToggleBox *)0x0) {
      MVToggleBox::MVToggleBox__ctor(this_12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    }
    break;
  case 0x15:
    this_13 = (MVNegate *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_13 != (MVNegate *)0x0) {
      MVNegate::MVNegate__ctor(this_13,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    }
    break;
  case 0x16:
    this_14 = (MVAnd *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_14 != (MVAnd *)0x0) {
      MVAnd::MVAnd__ctor(this_14,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    }
    break;
  case 0x17:
    this_15 = (MVExplosives *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_15 != (MVExplosives *)0x0) {
      MVExplosives::MVExplosives__ctor(this_15,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    }
    break;
  case 0x18:
    this_16 = (MVTextMsg *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_16 != (MVTextMsg *)0x0) {
      MVTextMsg::MVTextMsg__ctor(this_16,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    }
    break;
  case 0x19:
    this_17 = (MVFire *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_17 != (MVFire *)0x0) {
      MVFire::MVFire__ctor(this_17,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    }
    break;
  case 0x1a:
    this_18 = (MVSmoke *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_18 != (MVSmoke *)0x0) {
      MVSmoke::MVSmoke__ctor(this_18,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    }
    break;
  case 0x1b:
    this_19 = (MVTimeTrigger *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_19 != (MVTimeTrigger *)0x0) {
      MVTimeTrigger::MVTimeTrigger__ctor(this_19,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    }
    break;
  case 0x1c:
    this_20 = (MVTeleporter *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_20 != (MVTeleporter *)0x0) {
      MVTeleporter::MVTeleporter__ctor(this_20,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    }
    break;
  case 0x1d:
    this_21 = (MVGoal *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_21 != (MVGoal *)0x0) {
      MVGoal::MVGoal__ctor(this_21,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    }
    break;
  case 0x20:
    this_22 = (MVCubeModelFineGrainedTerrain *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_22 != (MVCubeModelFineGrainedTerrain *)0x0) {
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    }
    break;
  case 0x21:
    this_23 = (MVPressurePlate *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_23 != (MVPressurePlate *)0x0) {
      MVPressurePlate::MVPressurePlate__ctor(this_23,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_23;
    }
    break;
  case 0x25:
    this_24 = (MVPickupItemBase *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_24 != (MVPickupItemBase *)0x0) {
      MVPickupItemBase::MVPickupItemBase__ctor
                (this_24,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    }
    break;
  case 0x26:
    this_25 = (MVSkybox *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_25 != (MVSkybox *)0x0) {
      MVSkybox::MVSkybox__ctor(this_25,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    }
    break;
  case 0x27:
    this_26 = (MVSpawnPointRed *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_26 != (MVSpawnPointRed *)0x0) {
      MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_26;
    }
    break;
  case 0x28:
    this_27 = (MVSpawnPointGreen *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_27 != (MVSpawnPointGreen *)0x0) {
      MVSpawnPointGreen::MVSpawnPointGreen__ctor
                (this_27,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    }
    break;
  case 0x29:
    this_28 = (MVSpawnPointYellow *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_28 != (MVSpawnPointYellow *)0x0) {
      MVSpawnPointYellow::MVSpawnPointYellow__ctor
                (this_28,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    }
    break;
  case 0x2a:
    this_29 = (MVSpawnPointBlue *)func_?();
code_?:
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_29 != (MVSpawnPointBlue *)0x0) {
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (this_29,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_29;
    }
    break;
  case 0x2b:
    this_30 = (MVObjectEnabler *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_30 != (MVObjectEnabler *)0x0) {
      MVObjectEnabler::MVObjectEnabler__ctor(this_30,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_30;
    }
    break;
  case 0x2c:
    this_31 = (MVWaterPlane *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_31 != (MVWaterPlane *)0x0) {
      MVWaterPlane::MVWaterPlane__ctor(this_31,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_31;
    }
    break;
  case 0x2d:
    pOVar1 = (Object *)func_?();
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (worldObjectData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    bVar2 = 0;
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
    bVar2 = (unaff_EDI->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth;
    if ((!(bool)bVar2) &&
       (pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                 (unaff_EDI->klass->_1).typeHierarchy
                 [(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth - 1],
       bVar2 = pDVar11 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar11 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
       ) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (unaff_EDI,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      bVar2 = 0;
      if (unaff_EDI != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar2 = 1;
        if (((unaff_EDI->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           (pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                     (unaff_EDI->klass->_1).typeHierarchy
                     [(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).typeHierarchyDepth - 1],
           bVar2 = pDVar11 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar11 != 
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (unaff_EDI,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        bVar2 = 0;
        if (pOVar1 != (Object *)0x0) {
          pIVar3 = (pOVar1->klass->_0).element_class;
          pIVar4 = (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class;
          bVar2 = pIVar3 < pIVar4;
          if (pIVar3 != pIVar4) goto code_?;
          puVar12 = (undefined1 *)func_?();
          switch(*puVar12) {
          case 7:
            this_32 = (MVMovable *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_32 != (MVMovable *)0x0) {
              MVMovable::MVMovable__ctor(this_32,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_32;
            }
            break;
          case 8:
            this_33 = (MVBody *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_33 != (MVBody *)0x0) {
              MVBody::MVBody__ctor(this_33,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_33;
            }
            break;
          case 9:
            this_34 = (MVTeleportGroup *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_34 != (MVTeleportGroup *)0x0) {
              MVTeleportGroup::MVTeleportGroup__ctor
                        (this_34,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_34;
            }
            break;
          case 10:
            this_35 = (MVSentryGunBlueprint *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_35 != (MVSentryGunBlueprint *)0x0) {
              MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                        (this_35,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_35;
            }
            break;
          case 0xb:
            this_36 = (MVMovingPlatform *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_36 != (MVMovingPlatform *)0x0) {
              MVMovingPlatform::MVMovingPlatform__ctor
                        (this_36,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_36;
            }
            break;
          case 0xc:
            this_37 = (MVMovingPlatformGroup *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_37 != (MVMovingPlatformGroup *)0x0) {
              MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                        (this_37,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_37;
            }
            break;
          case 0xd:
            this_38 = (MVRotator *)func_?();
            bVar2 = 0;
            unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (this_38 != (MVRotator *)0x0) {
              MVRotator::MVRotator__ctor(this_38,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_38;
            }
            break;
          case 0xe:
            goto code_?;
          default:
            pSVar10 = mscorlib.dll::System::Enum::Enum_ToString
                                ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_3
                                (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar10,
                                 (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar10,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          }
        }
      }
      break;
    }
    goto code_?;
  case 0x2e:
    this_39 = (MVPulseBox *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_39 != (MVPulseBox *)0x0) {
      MVPulseBox::MVPulseBox__ctor(this_39,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    }
    break;
  case 0x2f:
    this_40 = (MVRandomBox *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_40 != (MVRandomBox *)0x0) {
      MVRandomBox::MVRandomBox__ctor(this_40,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    }
    break;
  case 0x30:
    this_41 = (MVSentryGun *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_41 != (MVSentryGun *)0x0) {
      MVSentryGun::MVSentryGun__ctor(this_41,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    }
    break;
  case 0x31:
    this_42 = (MVCollectible *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_42 != (MVCollectible *)0x0) {
      MVCollectible::MVCollectible__ctor(this_42,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    }
    break;
  case 0x32:
    this_43 = (MVMovingPlatformNode *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_43 != (MVMovingPlatformNode *)0x0) {
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_43,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    }
    break;
  case 0x33:
    this_44 = (MVWaterPlanePreset *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_44 != (MVWaterPlanePreset *)0x0) {
      MVWaterPlanePreset::MVWaterPlanePreset__ctor
                (this_44,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    }
    break;
  case 0x34:
    this_45 = (MVPointLightPreset *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_45 != (MVPointLightPreset *)0x0) {
      MVPointLightPreset::MVPointLightPreset__ctor
                (this_45,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_45;
    }
    break;
  case 0x35:
code_?:
    this_46 = (MVGhostInstance *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_46 != (MVGhostInstance *)0x0) {
      MVGhostInstance::MVGhostInstance__ctor(this_46,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_46;
    }
    break;
  case 0x36:
    this_47 = (MVCubeGun *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_47 != (MVCubeGun *)0x0) {
      MVCubeGun::MVCubeGun__ctor(this_47,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    }
    break;
  case 0x37:
    this_48 = (MVCheckpoint *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_48 != (MVCheckpoint *)0x0) {
      MVCheckpoint::MVCheckpoint__ctor(this_48,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    }
    break;
  case 0x38:
    this_49 = (MVHoverCraft *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_49 != (MVHoverCraft *)0x0) {
      MVHoverCraft::MVHoverCraft__ctor(this_49,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    }
    break;
  case 0x39:
    this_50 = (MVWorldObjectSpawnerVehicle *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_50 != (MVWorldObjectSpawnerVehicle *)0x0) {
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_50,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    }
    break;
  case 0x3b:
    this_51 = (MVJetPack *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_51 != (MVJetPack *)0x0) {
      MVJetPack::MVJetPack__ctor(this_51,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    }
    break;
  case 0x3c:
    this_52 = (MVRoundCube *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_52 != (MVRoundCube *)0x0) {
      MVRoundCube::MVRoundCube__ctor(this_52,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_52;
    }
    break;
  case 0x3d:
    this_53 = (MVAdvancedGhost *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_53 != (MVAdvancedGhost *)0x0) {
      MVAdvancedGhost::MVAdvancedGhost__ctor(this_53,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_53;
    }
    break;
  case 0x3e:
    this_54 = (MVHamsterWheel *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_54 != (MVHamsterWheel *)0x0) {
      MVHamsterWheel::MVHamsterWheel__ctor(this_54,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    }
    break;
  case 0x3f:
    this_55 = (MVKillLimit *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_55 != (MVKillLimit *)0x0) {
      MVKillLimit::MVKillLimit__ctor(this_55,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    }
    break;
  case 0x40:
    this_56 = (MVOculusKillLimit *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_56 != (MVOculusKillLimit *)0x0) {
      MVOculusKillLimit::MVOculusKillLimit__ctor
                (this_56,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    }
    break;
  case 0x41:
    this_57 = (MVCountingCube *)func_?();
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (this_57 != (MVCountingCube *)0x0) {
      MVCountingCube::MVCountingCube__ctor(this_57,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_57;
    }
    break;
  default:
    switch(iVar6) {
    case 0x76:
      this_58 = (MVVehicleEnergy *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_58 != (MVVehicleEnergy *)0x0) {
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_58,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      }
      break;
    case 0x77:
      this_59 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_59 != (MVWorldObjectSpawnerVehicleEnergy *)0x0) {
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor
                  (this_59,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      }
      break;
    default:
      goto code_?;
    case 0x82:
      this_60 = (MVGamePoint *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_60 != (MVGamePoint *)0x0) {
        MVGamePoint::MVGamePoint__ctor(this_60,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_60;
      }
      break;
    case 0x83:
      pMVar13 = (MVWorldObjectClient *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar13 != (MVWorldObjectClient *)0x0) {
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar13,worldObjectData,worldObjects,
                   (MethodInfo *)0x0);
        return pMVar13;
      }
      break;
    case 0x85:
      pOVar1 = (Object *)func_?();
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (worldObjectData,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar8 == (MVNetworkGame *)0x0) break;
      pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar9 == (MVLocalPlayer *)0x0) break;
      unaff_EBX = (String *)(pMVar9->fields)._._ActorNr_k__BackingField;
      bVar2 = 0;
      if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      pIVar3 = (unaff_EDI->klass->_0).element_class;
      pIVar4 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar3 < pIVar4;
      if (pIVar3 == pIVar4) {
        piVar5 = (int *)func_?();
        if ((String *)*piVar5 == unaff_EBX) {
          this_62 = (MVBuildModeAvatarLocal *)func_?();
          bVar2 = 0;
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_62 != (MVBuildModeAvatarLocal *)0x0) {
            MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                      (this_62,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_62;
          }
        }
        else {
          this_61 = (MVBuildModeAvatarRemote *)func_?();
          bVar2 = 0;
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (this_61 != (MVBuildModeAvatarRemote *)0x0) {
            MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                      (this_61,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_61;
          }
        }
        break;
      }
      goto code_?;
    case 0x86:
      this_63 = (MVAvatarSpawnRoleCreator *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_63 != (MVAvatarSpawnRoleCreator *)0x0) {
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_63,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      }
      break;
    case 0x87:
      this_64 = (MVGameOptionDataObject *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_64 != (MVGameOptionDataObject *)0x0) {
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_64,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      }
      break;
    case 0x91:
      this_65 = (MVCameraSettings *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_65 != (MVCameraSettings *)0x0) {
        MVCameraSettings::MVCameraSettings__ctor
                  (this_65,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      }
      break;
    case 0x92:
      this_66 = (MVGravityCube *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_66 != (MVGravityCube *)0x0) {
        MVGravityCube::MVGravityCube__ctor(this_66,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      }
      break;
    case 0x94:
      this_67 = (MVGameCoin *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_67 != (MVGameCoin *)0x0) {
        MVGameCoin::MVGameCoin__ctor(this_67,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      }
      break;
    case 0x95:
      this_68 = (MVGameCoinChest *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_68 != (MVGameCoinChest *)0x0) {
        MVGameCoinChest::MVGameCoinChest__ctor
                  (this_68,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      }
      break;
    case 0x96:
      this_69 = (ThemeWorldObject *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_69 != (ThemeWorldObject *)0x0) {
        ThemeWorldObject::ThemeWorldObject__ctor
                  (this_69,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      }
      break;
    case 0x97:
      this_70 = (MVDoor *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_70 != (MVDoor *)0x0) {
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      }
      break;
    case 0x98:
      this_71 = (MVDoorBlueprint *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_71 != (MVDoorBlueprint *)0x0) {
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      }
      break;
    case 0x99:
      this_72 = (MVMeleeWeaponBase *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_72 != (MVMeleeWeaponBase *)0x0) {
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      }
      break;
    case 0x9a:
      pMVar14 = (MVCostumeBaseBlueprint *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar14 != (MVCostumeBaseBlueprint *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar14,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar14;
      }
      break;
    case 0x9b:
      this_73 = (MVCostumeBase *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_73 != (MVCostumeBase *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      }
      break;
    case 0x9c:
      pMVar14 = (MVCostumeBaseBlueprint *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (pMVar14 != (MVCostumeBaseBlueprint *)0x0) {
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar14,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar14;
      }
      break;
    case 0xa1:
      this_74 = (TeamEditor *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_74 != (TeamEditor *)0x0) {
        TeamEditor::TeamEditor__ctor(this_74,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      }
      break;
    case 0xa2:
      this_75 = (TriggerCube *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_75 != (TriggerCube *)0x0) {
        TriggerCube::TriggerCube__ctor(this_75,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      }
      break;
    case 0xa4:
      this_76 = (CollectTheItemCollectableInstance *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_76 != (CollectTheItemCollectableInstance *)0x0) {
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      }
      break;
    case 0xa5:
      this_77 = (ShootableButton *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_77 != (ShootableButton *)0x0) {
        ShootableButton::ShootableButton__ctor
                  (this_77,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      }
      break;
    case 0xa6:
      this_78 = (UseLever *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_78 != (UseLever *)0x0) {
        UseLever::UseLever__ctor(this_78,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      }
      break;
    case 0xa7:
      this_79 = (CollectTheItemDropOff *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_79 != (CollectTheItemDropOff *)0x0) {
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      }
      break;
    case 0xa8:
      this_80 = (CollectTheItemCollectable *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_80 != (CollectTheItemCollectable *)0x0) {
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      }
      break;
    case 0xa9:
      this_81 = (CollectTheItem *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_81 != (CollectTheItem *)0x0) {
        CollectTheItem::CollectTheItem__ctor(this_81,worldObjectData,worldObjects,(MethodInfo *)0x0)
        ;
        return (MVWorldObjectClient *)this_81;
      }
      break;
    case 0xaa:
      this_82 = (WindTurbine *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_82 != (WindTurbine *)0x0) {
        WindTurbine::WindTurbine__ctor(this_82,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      }
      break;
    case 0xab:
      this_83 = (MVGlobalSoundEmitter *)func_?();
      bVar2 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (this_83 != (MVGlobalSoundEmitter *)0x0) {
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
  puVar16 = (uint *)((ulonglong)uVar15 >> 0x20);
  iVar17 = (int)uVar15;
  iVar18 = extraout_ECX + -1;
  bVar19 = (byte)unaff_EBX;
  bVar20 = (byte)((uint)unaff_EBX >> 8);
  bVar21 = (byte)((ulonglong)uVar15 >> 0x28);
  iVar6 = iVar17;
  if (iVar18 == 0) {
    pbVar22 = (byte *)((int)&worldObjectData[2].klass + 3);
    bVar23 = CARRY1(*pbVar22,bVar21) || CARRY1(*pbVar22 + bVar21,bVar2);
    *pbVar22 = *pbVar22 + bVar21 + bVar2;
    bVar24 = *(byte *)(extraout_ECX + -0x26efb09e);
    bVar2 = CARRY1(bVar24,bVar23);
    *(byte *)(extraout_ECX + -0x26efb09e) = bVar24 + bVar23;
    puVar25 = (ushort *)((int)&(unaff_EDI->fields)._entries + 2);
    *puVar25 = *puVar25 + (ushort)(0 < (short)-(*puVar25 & 3)) * -(*puVar25 & 3);
    iVar6 = iVar17 + -1;
    if (iVar6 != 0) {
      unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                  ((int)&unaff_EDI[-1].fields._syncRoot + 1);
      goto code_?;
    }
    bVar24 = *(byte *)(iVar17 + 0x74);
    *(byte *)(iVar17 + 0x74) = bVar24 + bVar2;
    bVar26 = *(byte *)(iVar17 + 0x74);
    bVar23 = CARRY1(bVar26,CARRY1(bVar24,bVar2));
    *(byte *)(iVar17 + 0x74) = bVar26 + CARRY1(bVar24,bVar2);
    bVar27 = CARRY1(bRam_?,bVar23);
    bRam_? = bRam_? + bVar23;
    puVar28 = puVar16 + 0x19;
    bVar2 = (byte)*puVar28 + bVar19;
    bVar29 = CARRY1((byte)*puVar28,bVar19) || CARRY1(bVar2,bVar27);
    *(byte *)puVar28 = bVar2 + bVar27;
    puVar12 = (undefined1 *)((int)&unaff_EDI[-1].fields._values + 2);
    bVar23 = CARRY1(in_stack_30,bVar29);
    bVar24 = 0;
    bVar2 = 0;
    if ((byte)(in_stack_30 + bVar29) != '\0') goto code_?;
    bVar2 = *(byte *)(iVar17 + 0x74);
    *(byte *)(iVar17 + 0x74) = bVar2 + bVar23;
    bVar24 = *(byte *)(iVar17 + 0x74);
    bVar27 = CARRY1(bVar24,CARRY1(bVar2,bVar23));
    *(byte *)(iVar17 + 0x74) = bVar24 + CARRY1(bVar2,bVar23);
    ppDVar31 = &unaff_EDI[-1].fields._values;
    bVar23 = CARRY1(bVar20,bVar27);
    bVar24 = 0;
    bVar2 = 0;
    if ((byte)(bVar20 + bVar27) == '\0') {
      bVar2 = *(byte *)(iVar17 + 0x74);
      *(byte *)(iVar17 + 0x74) = bVar2 + bVar23;
      bVar24 = *(byte *)(iVar17 + 0x74);
      bVar27 = CARRY1(bVar24,CARRY1(bVar2,bVar23));
      *(byte *)(iVar17 + 0x74) = bVar24 + CARRY1(bVar2,bVar23);
      iVar18 = (uint)bVar27 << 8;
      *(undefined1 *)(iVar17 + 0x74) = *(undefined1 *)(iVar17 + 0x74);
      bVar23 = CARRY1(bRam_?,bVar19);
      bRam_? = bRam_? + bVar19;
      bVar29 = CARRY1(in_stack_32,bVar20);
      bVar2 = in_stack_32 + bVar20;
      in_stack_32 = bVar2 + bVar23;
      bVar23 = CARRY1(in_stack_33,bVar27) ||
               CARRY1(in_stack_33 + bVar27,bVar29 || CARRY1(bVar2,bVar23));
      puVar12 = (undefined1 *)((int)&unaff_EDI[-1].fields._comparer + 1);
      bVar29 = CARRY1(bRam_?,bVar23);
      bRam_? = bRam_? + bVar23;
      bVar23 = CARRY1(in_stack_34,bVar27) || CARRY1(in_stack_34 + bVar27,bVar29);
      in_stack_34 = in_stack_34 + bVar27 + bVar29;
      iVar17 = CONCAT22((short)((uint)puVar12 >> 0x10),(short)puVar12 + -1) + -1;
      goto code_?;
    }
  }
  else {
code_?:
    bVar23 = CARRY1(bRam_?,bVar20) || CARRY1(bRam_? + bVar20,bVar2);
    bRam_? = bRam_? + bVar20 + bVar2;
    iVar17 = CONCAT22((short)((uint)unaff_EDI >> 0x10),(short)unaff_EDI + -1);
code_?:
    bVar23 = CARRY1(in_stack_35,bVar19) || CARRY1(in_stack_35 + bVar19,bVar23);
    bVar24 = (byte)((uint)iVar18 >> 8);
    bVar2 = bVar24 + bVar20;
    bVar27 = CARRY1(bVar24,bVar20) || CARRY1(bVar2,bVar23);
    bVar24 = (byte)iVar18;
    bVar2 = bVar2 + bVar23;
    puVar12 = (undefined1 *)CONCAT22((short)((uint)iVar17 >> 0x10),(short)iVar17 + -2);
    pbVar22 = (byte *)(iVar6 + 0x75);
    bVar23 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar27);
    *pbVar22 = *pbVar22 + bVar24 + bVar27;
code_?:
    pbVar22 = (byte *)(iVar6 + 0x75);
    bVar27 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar23);
    *pbVar22 = *pbVar22 + bVar24 + bVar23;
    bVar29 = CARRY1(bRam_?,bVar2) || CARRY1(bRam_? + bVar2,bVar27);
    bRam_? = bRam_? + bVar2 + bVar27;
    ppDVar31 = (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ **)
               (puVar12 + -3);
    pbVar22 = (byte *)(iVar6 + 0x75);
    bVar23 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar29);
    *pbVar22 = *pbVar22 + bVar24 + bVar29;
  }
  pbVar22 = (byte *)(iVar6 + 0x75);
  bVar27 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar23);
  *pbVar22 = *pbVar22 + bVar24 + bVar23;
  pbVar22 = (byte *)(iVar6 + 0x75);
  bVar23 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar27);
  *pbVar22 = *pbVar22 + bVar24 + bVar27;
  pbVar22 = (byte *)(iVar6 + -0x3fefb099);
  bVar36 = (byte)((ulonglong)uVar15 >> 0x20);
  bVar27 = CARRY1(*pbVar22,bVar36) || CARRY1(*pbVar22 + bVar36,bVar23);
  *pbVar22 = *pbVar22 + bVar36 + bVar23;
  bVar24 = (byte)iVar6 + bVar21;
  bVar23 = CARRY1((byte)iVar6,bVar21) || CARRY1(bVar24,bVar27);
  bVar24 = bVar24 + bVar27;
  pbVar37 = (byte *)CONCAT31((int3)((uint)iVar6 >> 8),bVar24);
  bVar26 = (byte)((uint)iVar6 >> 8);
  bVar27 = CARRY1(*pbVar37,bVar26) || CARRY1(*pbVar37 + bVar26,bVar23);
  *pbVar37 = *pbVar37 + bVar26 + bVar23;
  pbVar22 = pbVar37 + -0x6cefb098;
  bVar23 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar27);
  *pbVar22 = *pbVar22 + bVar24 + bVar27;
  bVar38 = bVar19 + bVar21 + bVar23;
  bVar39 = bVar20 + bVar2 + (CARRY1(bVar19,bVar21) || CARRY1(bVar19 + bVar21,bVar23));
  lVar40 = (longlong)(int)ppDVar31[2] * 0x1f;
  bVar23 = (int)lVar40 != lVar40;
  uVar41 = (undefined2)((ulonglong)uVar15 >> 0x20);
  bVar2 = in(uVar41);
  *(byte *)(ppDVar31 + -2) = bVar2;
  pbVar22 = (byte *)(ppDVar31 + 0x19);
  bVar19 = (byte)lVar40;
  bVar27 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar23);
  *pbVar22 = *pbVar22 + bVar19 + bVar23;
  pbVar22 = (byte *)((int)ppDVar31 + 99);
  bVar23 = CARRY1(*pbVar22,bVar39) || CARRY1(*pbVar22 + bVar39,bVar27);
  *pbVar22 = *pbVar22 + bVar39 + bVar27;
  pbVar22 = (byte *)((int)ppDVar31 + -0x20efb09e);
  bVar20 = (byte)((ulonglong)lVar40 >> 8);
  bVar27 = CARRY1(*pbVar22,bVar20) || CARRY1(*pbVar22 + bVar20,bVar23);
  *pbVar22 = *pbVar22 + bVar20 + bVar23;
  bVar2 = in(uVar41);
  *(byte *)((int)ppDVar31 + -10) = bVar2;
  pbVar22 = (byte *)((int)ppDVar31 + -10);
  bVar23 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar27);
  *pbVar22 = *pbVar22 + bVar19 + bVar27;
  uVar42 = in(uVar41);
  *(undefined4 *)pbVar22 = uVar42;
  pbVar22 = (byte *)((int)ppDVar31 + -7);
  bVar27 = CARRY1(*pbVar22,bVar39) || CARRY1(*pbVar22 + bVar39,bVar23);
  *pbVar22 = *pbVar22 + bVar39 + bVar23;
  uVar42 = in(uVar41);
  *(undefined4 *)pbVar22 = uVar42;
  pbVar22 = (byte *)((int)ppDVar31 + 0x69);
  bVar23 = CARRY1(*pbVar22,bVar20) || CARRY1(*pbVar22 + bVar20,bVar27);
  *pbVar22 = *pbVar22 + bVar20 + bVar27;
  pbVar22 = (byte *)(ppDVar31 + -0xc3bec26);
  bVar27 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
  *pbVar22 = *pbVar22 + bVar38 + bVar23;
  uVar42 = in(uVar41);
  *(undefined4 *)((int)ppDVar31 + -5) = uVar42;
  pbVar22 = pbVar37 + 0x75;
  bVar23 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar27);
  *pbVar22 = *pbVar22 + bVar19 + bVar27;
  bVar27 = CARRY1(bVar39,bVar39) || CARRY1(bVar39 * '\x02',bVar23);
  bVar2 = bVar39 * '\x02' + bVar23;
  uVar42 = in(uVar41);
  *(undefined4 *)((int)ppDVar31 + -3) = uVar42;
  bVar23 = CARRY1(*(byte *)ppDVar31,bVar20) || CARRY1(*(byte *)ppDVar31 + bVar20,bVar27);
  *(byte *)ppDVar31 = *(byte *)ppDVar31 + bVar20 + bVar27;
  out(*(undefined1 *)&worldObjectData->klass,uVar41);
  pbVar22 = (byte *)((int)ppDVar31 + 0x6d);
  bVar27 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
  *pbVar22 = *pbVar22 + bVar38 + bVar23;
  pbVar22 = (byte *)(ppDVar31 + -0xADDR);
  bVar23 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar27);
  *pbVar22 = *pbVar22 + bVar19 + bVar27;
  out(*(undefined1 *)((int)&worldObjectData->klass + 1),uVar41);
  bVar19 = bVar2 + bVar20;
  bVar27 = CARRY1(bVar2,bVar20) || CARRY1(bVar19,bVar23);
  bVar19 = bVar19 + bVar23;
  iVar17 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar19,bVar38));
  out(*(undefined1 *)((int)&worldObjectData->klass + 2),uVar41);
  ppDVar43 = (Dictionary_2_TKey_TValue_KeyCollection_System_Object_System_Object_ **)(ppDVar31 + -1)
  ;
  bVar23 = CARRY1(*(byte *)ppDVar43,bVar38) || CARRY1(*(byte *)ppDVar43 + bVar38,bVar27);
  *(byte *)ppDVar43 = *(byte *)ppDVar43 + bVar38 + bVar27;
  pbVar44 = (byte *)((int)&worldObjectData->monitor + 3);
  out(*(undefined4 *)((int)&worldObjectData->klass + 3),uVar41);
  bVar27 = CARRY1(*pbVar44,bVar36) || CARRY1(*pbVar44 + bVar36,bVar23);
  *pbVar44 = *pbVar44 + bVar36 + bVar23;
  pbVar22 = (byte *)((int)&worldObjectData[2].fields._count + 1);
  bVar23 = CARRY1(*pbVar22,bVar24) || CARRY1(*pbVar22 + bVar24,bVar27);
  *pbVar22 = *pbVar22 + bVar24 + bVar27;
  pbVar22 = (byte *)((int)&worldObjectData[2].fields._count + 1);
  bVar27 = CARRY1(*pbVar22,bVar21) || CARRY1(*pbVar22 + bVar21,bVar23);
  *pbVar22 = *pbVar22 + bVar21 + bVar23;
  pbVar22 = (byte *)((int)&worldObjectData[-0xdfa903].klass + 1);
  bVar2 = *pbVar22;
  bVar21 = *pbVar22;
  *pbVar22 = bVar21 + bVar26 + bVar27;
  *pbVar44 = *pbVar44 + bVar24 + (CARRY1(bVar2,bVar26) || CARRY1(bVar21 + bVar26,bVar27));
  lVar40 = (longlong)*(int *)((int)ppDVar31 + 9) * 0xf;
  pbVar45 = (byte *)lVar40;
  uVar42 = in(uVar41);
  *(undefined4 *)((int)ppDVar31 + -7) = uVar42;
  pbVar22 = pbVar45 + 0x6f;
  bVar2 = (byte)((ulonglong)lVar40 >> 8);
  bVar23 = CARRY1(*pbVar22,bVar2) || CARRY1(*pbVar22 + bVar2,(int)pbVar45 != lVar40);
  *pbVar22 = *pbVar22 + bVar2 + ((int)pbVar45 != lVar40);
  pbVar22 = pbVar45 + 0x48104f6f;
  bVar27 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
  *pbVar22 = *pbVar22 + bVar38 + bVar23;
  if (*pbVar22 == 0) {
    bVar21 = (byte)lVar40;
    bVar23 = CARRY1(bVar21,bVar21) || CARRY1(bVar21 * '\x02',bVar27);
    bVar21 = bVar21 * '\x02' + bVar27;
    out(*(undefined4 *)pbVar44,uVar41);
    bVar20 = bVar21 + bVar19;
    bVar27 = CARRY1(bVar21,bVar19) || CARRY1(bVar20,bVar23);
    bVar20 = bVar20 + bVar23;
    pbVar45 = (byte *)CONCAT31((int3)((ulonglong)lVar40 >> 8),bVar20);
    pbVar44 = (byte *)((int)&(worldObjectData->fields)._entries + 3);
    out(*(undefined4 *)((int)&(worldObjectData->fields)._buckets + 3),uVar41);
    bVar21 = *pbVar45;
    bVar36 = *pbVar45 + bVar2;
    bVar23 = CARRY1(*pbVar45,bVar2) || CARRY1(bVar36,bVar27);
    *pbVar45 = bVar36 + bVar27;
    if (SCARRY1(bVar21,bVar2) == SCARRY1(bVar36,bVar27)) {
      bVar21 = bVar26 + bVar19;
      bVar27 = CARRY1(bVar26,bVar19) || CARRY1(bVar21,bVar23);
      uVar41 = (undefined2)((uint)iVar6 >> 0x10);
      bVar36 = bVar21 + bVar23;
      pbVar37 = (byte *)CONCAT22(uVar41,CONCAT11(bVar36,bVar24));
      if (SCARRY1(bVar26,bVar19) == SCARRY1(bVar21,bVar23)) {
        pbVar22 = pbVar45 + (int)pbVar44 * 2;
        bVar23 = CARRY1(*pbVar22,bVar2) || CARRY1(*pbVar22 + bVar2,bVar27);
        *pbVar22 = *pbVar22 + bVar2 + bVar27;
        pbVar22 = pbVar45 + (int)pbVar44 * 2 + 0x4f;
        bVar27 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
        *pbVar22 = *pbVar22 + bVar38 + bVar23;
        pbVar22 = pbVar45 + (int)pbVar44 * 2 + 0x71bc104f;
        bVar23 = CARRY1(*pbVar22,bVar20) || CARRY1(*pbVar22 + bVar20,bVar27);
        *pbVar22 = *pbVar22 + bVar20 + bVar27;
        bVar21 = bVar36 + bVar2;
        bVar27 = CARRY1(bVar36,bVar2) || CARRY1(bVar21,bVar23);
        bVar26 = bVar21 + bVar23;
        uVar42 = CONCAT22(uVar41,CONCAT11(bVar26,bVar24));
        if (SCARRY1(bVar36,bVar2) == SCARRY1(bVar21,bVar23)) goto code_?;
        pbVar22 = (byte *)((int)puVar16 + (int)pbVar44 * 2);
        bVar23 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar27);
        *pbVar22 = *pbVar22 + bVar38 + bVar27;
        pbVar22 = (byte *)((int)puVar16 + (int)pbVar44 * 2 + 0x4f);
        bVar27 = CARRY1(*pbVar22,bVar20) || CARRY1(*pbVar22 + bVar20,bVar23);
        *pbVar22 = *pbVar22 + bVar20 + bVar23;
        pbVar22 = (byte *)((int)puVar16 + (int)pbVar44 * 2 + 0x4f);
        bVar23 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar27);
        *pbVar22 = *pbVar22 + bVar19 + bVar27;
        pbVar22 = (byte *)((int)puVar16 + (int)pbVar44 * 2 + 0x72dc104f);
        bVar27 = CARRY1(*pbVar22,bVar2) || CARRY1(*pbVar22 + bVar2,bVar23);
        *pbVar22 = *pbVar22 + bVar2 + bVar23;
        pbVar22 = (byte *)(iVar17 + (int)pbVar44 * 2);
        bVar23 = CARRY1(*pbVar22,bVar20) || CARRY1(*pbVar22 + bVar20,bVar27);
        *pbVar22 = *pbVar22 + bVar20 + bVar27;
        pbVar22 = (byte *)(iVar17 + (int)pbVar44 * 2);
        bVar27 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar23);
        *pbVar22 = *pbVar22 + bVar19 + bVar23;
        pbVar22 = (byte *)(iVar17 + 0x4f + (int)pbVar44 * 2);
        bVar23 = CARRY1(*pbVar22,bVar2) || CARRY1(*pbVar22 + bVar2,bVar27);
        *pbVar22 = *pbVar22 + bVar2 + bVar27;
        pbVar22 = (byte *)(iVar17 + 0x73cc104f + (int)pbVar44 * 2);
        bVar29 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
        *pbVar22 = *pbVar22 + bVar38 + bVar23;
        bVar2 = bVar26 + bVar19;
        bVar23 = CARRY1(bVar2,bVar29);
        bVar27 = CARRY1(bVar26,bVar19) || bVar23;
        pbVar37 = (byte *)CONCAT22(uVar41,CONCAT11(bVar2 + bVar29,bVar24));
        if (!CARRY1(bVar26,bVar19) && !bVar23) {
          pcVar46 = (code *)swi(3);
          pMVar13 = (MVWorldObjectClient *)(*pcVar46)();
          return pMVar13;
        }
        goto code_?;
      }
      goto code_?;
    }
    pbVar22 = &stack0x74ec101f + (int)pbVar44 * 2;
    bVar29 = CARRY1(*pbVar22,bVar19) || CARRY1(*pbVar22 + bVar19,bVar23);
    *pbVar22 = *pbVar22 + bVar19 + bVar23;
  }
  else {
code_?:
    pbVar22 = &stack0xffffffd0 + (int)pbVar44 * 2;
    bVar21 = (byte)((uint)pbVar45 >> 8);
    bVar2 = *pbVar22 + bVar21;
    bVar23 = CARRY1(*pbVar22,bVar21) || CARRY1(bVar2,bVar27);
    *pbVar22 = bVar2 + bVar27;
    pbVar22 = &stack0x0000001f + (int)pbVar44 * 2;
    bVar29 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar23);
    *pbVar22 = *pbVar22 + bVar38 + bVar23;
    pbVar22 = &stack0x74bc101f + (int)pbVar44 * 2;
    bVar2 = *pbVar22 + (byte)pbVar45;
    bVar27 = CARRY1(*pbVar22,(byte)pbVar45) || CARRY1(bVar2,bVar29);
    *pbVar22 = bVar2 + bVar29;
code_?:
    bVar21 = (byte)((uint)pbVar37 >> 8);
    bVar19 = (byte)((uint)pbVar45 >> 8);
    bVar2 = bVar21 + bVar19;
    bVar29 = CARRY1(bVar21,bVar19) || CARRY1(bVar2,bVar27);
    cVar47 = bVar2 + bVar27;
    pbVar37 = (byte *)CONCAT22((short)((uint)pbVar37 >> 0x10),CONCAT11(cVar47,(char)pbVar37));
    if (cVar47 == '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pMVar13 = (MVWorldObjectClient *)
                (**(code **)(CONCAT31((int3)((uint)pbVar37 >> 8),bVar38) + -0x68))();
      return pMVar13;
    }
  }
  pcVar48 = (char *)((int)pbVar44 * 2 + 0x100104f);
  *pcVar48 = *pcVar48 + bVar38 + bVar29;
  uVar42 = CONCAT31((int3)((uint)pbVar37 >> 8),
                    (char)pbVar37 + (char)*puVar16 + (char)*puVar16 + (char)*puVar16 +
                    (char)*puVar16);
code_?:
  iVar6 = CONCAT31((int3)((uint)uVar42 >> 8),(char)uVar42 + (char)*puVar16);
  iVar6 = iVar6 + *(int *)((int)puVar16 + iVar6) + 0x2020706;
  *puVar16 = *puVar16 |
             CONCAT31((int3)((uint)iVar6 >> 8),
                      (char)iVar6 + (char)*puVar16 + (char)*puVar16 + (char)*puVar16);
  pcVar46 = (code *)swi(3);
  pMVar13 = (MVWorldObjectClient *)(*pcVar46)();
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

