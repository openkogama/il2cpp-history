
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
  MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_01,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_01 != (Link *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pOVar1 = (Object *)
               func_?(CONCAT13((char)((uint)TypeInfo__MV__WorldObject__LinkDataParameter >>
                                              0x18),
                                        CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).outputWOID = *piVar3;
        pOVar1 = (Object *)
                 func_?(CONCAT22((short)((uint)TypeInfo__MV__WorldObject__LinkDataParameter
                                                 >> 0x10),
                                          CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar3 = (int32_t *)func_?();
          (this_01->fields).inputWOID = *piVar3;
          this_00 = (this->fields).links;
          if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this_01->fields).id,
                       (Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_01 != (ObjectLink *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pOVar1 = (Object *)
               func_?(CONCAT13((char)((uint)
                                               TypeInfo__MV__WorldObject__ObjectLinkDataParameter >>
                                              0x18),
                                        CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                )));
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).objectConnectorWOID = *piVar3;
        pOVar1 = (Object *)
                 func_?(CONCAT22((short)((uint)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                 >> 0x10),
                                          CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  )));
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar3 = (int32_t *)func_?();
          (this_01->fields).objectWOID = *piVar3;
          this_00 = (this->fields).objectLinks;
          if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this_01->fields).id,
                       (Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  authorProfileId.m_Index = 0;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pIVar3 = extraout_ECX;
code_?:
    func_?(unaff_EBX.m_Index,pIVar3);
    pIVar3 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI.m_Index,pIVar3);
    pSVar4 = extraout_ECX_01;
  }
  else {
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_5 = 3;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_5)
    ;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_6 = 1;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_6)
    ;
    authorProfileId =
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
         UIElements::TextureId]::
         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    uStack_7 = 2;
    pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_7)
    ;
    fStack_8 = (float)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 data,pOVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
    this_01 = (RuntimePrototypeCubeModel *)func_?();
    pBStack_9 = TypeInfo__System__Byte;
    if (fStack_8 == 0.0) {
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)
             func_?(fStack_8,TypeInfo__System__Byte);
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    if (authorProfileId.m_Index == 0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if (*(Il2CppClass **)(*(int *)authorProfileId.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar10 = (float *)func_?(authorProfileId.m_Index);
      fStack_8 = *pfVar10;
      if (unaff_EDI.m_Index == 0) goto code_?;
      pIVar3 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)unaff_EDI.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar11 = (int32_t *)func_?(unaff_EDI.m_Index);
        authorProfileId.m_Index = *piVar11;
        if (unaff_EBX.m_Index == 0) goto code_?;
        pIVar3 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_EBX.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar11 = (int32_t *)func_?(unaff_EBX.m_Index);
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                    (this_01,*piVar11,authorProfileId.m_Index,fStack_8,(Byte__Array *)data,
                     (MethodInfo *)0x0);
          unaff_EBX.m_Index = (int32_t)this_01;
          if ((this_01 != (RuntimePrototypeCubeModel *)0x0) &&
             (this_00 = (this->fields).prototypes,
             this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                       (this_01->fields).prototypeId,(Object *)this_01,
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
  func_?(authorProfileId.m_Index,pSVar4);
code_?:
  func_?(fStack_8,pBStack_9);
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
     (this_00 = (this->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(value->fields)._.id,
               (Object *)value,
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                        (koGaMaPackageClientOriginal->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if ((koGaMaPackageClientDesendant != (KoGaMaPackageClient *)0x0) &&
       (pDVar1 = (koGaMaPackageClientDesendant->fields).worldObjects,
       pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                          (koGaMaPackageClientDesendant->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pOVar3 != (Object *)0x0) && (pOVar2 != (Object *)0x0)) {
        if (pOVar3[10].monitor == pOVar2[10].monitor) {
          pIStack_4 = (Int32__Class *)&ppIStack_5;
          ppIStack_5 = &pIStack_4;
          (*(code *)pOVar2->klass[2]._1.cctor_thread)(pOVar2,pOVar3);
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
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
         Dictionary_2_System_Int32_System_Object__get_Item
                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
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
     (this_00 = (this->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(value->fields)._.id,
               (Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  func_?();
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                        (this->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      *(undefined1 *)(in_stack_2 + 0x35) = 1;
      (**(code **)(*in_stack_2 + 0x250))();
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
  pSVar1 = StringLiteral_protypes_Count_;
  if (values != (String__Array *)0x0) {
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_protypes_Count_;
    func_?(values->vector,pSVar1);
    pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).prototypes;
    if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      IStack_3.m_value =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
           StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
           Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                     (pDVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Count__
                     );
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      if (values->max_length < 2) goto code_?;
      values->vector[1] = pSVar1;
      func_?(values->vector + 1,pSVar1);
      pSVar1 = StringLiteral_u000A_worldObjects_Count_;
      if (values->max_length < 3) goto code_?;
      values->vector[2] = StringLiteral_u000A_worldObjects_Count_;
      func_?(values->vector + 2,pSVar1);
      pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields).worldObjects;
      if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        IStack_3.m_value =
             mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                       (pDVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                       );
        pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
        if (values->max_length < 4) goto code_?;
        values->vector[3] = pSVar1;
        func_?(values->vector + 3,pSVar1);
        pSVar1 = StringLiteral_u000A_links_Count_;
        if (values->max_length < 5) goto code_?;
        values->vector[4] = StringLiteral_u000A_links_Count_;
        func_?(values->vector + 4,pSVar1);
        pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(this->fields).links;
        if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          IStack_3.m_value =
               mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                         (pDVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                         );
          pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
          if (values->max_length < 6) goto code_?;
          values->vector[5] = pSVar1;
          func_?(values->vector + 5,pSVar1);
          pSVar1 = StringLiteral_u000A_objectLinks_Count_;
          if (values->max_length < 7) goto code_?;
          values->vector[6] = StringLiteral_u000A_objectLinks_Count_;
          func_?(values->vector + 6,pSVar1);
          pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this->fields).objectLinks;
          if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)0x0) {
            IStack_3.m_value =
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           (pDVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                           );
            pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
            if (7 < values->max_length) {
              values->vector[7] = pSVar1;
              func_?(values->vector + 7,pSVar1);
              pSVar1 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              return pSVar1;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* MVWorldObjectClient WorldObjectFactory(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
          (Dictionary_2_System_Object_System_Object_ *worldObjectData,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  bVar1 = (byte)((uint)in_stack_2 >> 8);
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
    ppMStack_3 = (MVCubeGun__Class **)&TypeInfo__System__Int32;
    func_?();
    ppMStack_4 = (MVCubeModelFineGrainedTerrain__Class **)&TypeInfo__MVAdvancedGhost;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
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
    ppMStack_3 = &TypeInfo__MVCubeGun;
    func_?();
    ppMStack_4 = &TypeInfo__MVCubeModelFineGrainedTerrain;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
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
    ppMStack_3 = (MVCubeGun__Class **)&TypeInfo__MVGlobalSoundEmitter;
    func_?();
    ppMStack_4 = (MVCubeModelFineGrainedTerrain__Class **)&TypeInfo__MVGoal;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
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
    ppMStack_3 = (MVCubeGun__Class **)
                  &TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency;
    func_?();
    ppMStack_4 = (MVCubeModelFineGrainedTerrain__Class **)&TypeInfo__MVOculusKillLimit;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
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
    ppMStack_3 = (MVCubeGun__Class **)&TypeInfo__MVSpawnPointBlue;
    func_?();
    ppMStack_4 = (MVCubeModelFineGrainedTerrain__Class **)&TypeInfo__MVSpawnPointGreen;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
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
    ppMStack_3 = (MVCubeGun__Class **)&TypeInfo__TeamEditor;
    func_?();
    ppMStack_4 = (MVCubeModelFineGrainedTerrain__Class **)&TypeInfo__ThemeWorldObject;
    func_?();
    func_?();
    func_?();
    puStackY_58 = &UNK_?;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    bVar1 = 0x53;
    func_?();
    cRam_? = '\x01';
  }
  bVar5 = (byte)((uint)&stack0xfffffffb >> 0x10);
  pOVar6 = (Object *)func_?();
  this_84 = worldObjectData;
  uVar7 = 0;
  uVar8 = 1;
  if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar1 = 0xd1;
    pMVar9 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        worldObjectData,pOVar6,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    bVar5 = (byte)((uint)pMVar9 >> 0x10);
    uVar7 = 0;
    uVar8 = 1;
    if (TVar10.m_Index == 0) goto code_?;
    pIVar11 = (TypeInfo__System__Int32->_0).element_class;
    uVar7 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) < pIVar11;
    uVar8 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) == pIVar11;
    if (!(bool)uVar8) {
code_?:
      func_?();
      goto code_?;
    }
    piVar12 = (int *)func_?();
    iVar13 = *piVar12;
    if (0xab < iVar13) {
      if (iVar13 == 0xb4) {
        this = (TimeAttackFlag *)func_?();
        TimeAttackFlag::TimeAttackFlag__ctor(this,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
      if (iVar13 == 0xb5) {
        this_00 = (MVGamePointChest *)func_?();
        MVGamePointChest::MVGamePointChest__ctor(this_00,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
code_?:
      pSVar14 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      unaff_ESI.m_Index =
           (int32_t)mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar14,
                               (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      unaff_EBP = (MethodInfo *)0x0;
      goto code_?;
    }
    switch(iVar13) {
    case 0:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar6 = (Object *)func_?();
      bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                          pOVar6,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
      bVar5 = (byte)((uint)pOVar6 >> 0x10);
      if (bVar15 == 0) {
        unaff_ESI.m_Index =
             (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString(this_84,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
        unaff_EBP = (MethodInfo *)((int)&worldObjectData + 3);
        worldObjectData =
             (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  );
        pOVar6 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar6,(MethodInfo *)0x0);
      }
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar6 = (Object *)func_?();
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                          pOVar6,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      bVar1 = (byte)((uint)pOVar6 >> 8);
      uVar7 = 0;
      uVar8 = TVar10.m_Index == 0;
      if (!(bool)uVar8) {
        pIVar11 = (TypeInfo__System__Int32->_0).element_class;
        uVar7 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) < pIVar11;
        uVar8 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) == pIVar11;
        if (!(bool)uVar8) goto code_?;
        piVar12 = (int *)func_?();
        unaff_ESI.m_Index = *piVar12;
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar7 = 0;
        uVar8 = pMVar16 == (MVNetworkGame *)0x0;
        if (!(bool)uVar8) {
          pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
          bVar5 = (byte)((uint)pMVar16 >> 0x10);
          uVar7 = 0;
          uVar8 = pMVar17 == (MVLocalPlayer *)0x0;
          if (!(bool)uVar8) {
            if ((String *)unaff_ESI.m_Index ==
                (String *)(pMVar17->fields)._._ActorNr_k__BackingField) {
              this_03 = (MVAvatarLocal *)func_?();
              MVAvatarLocal::MVAvatarLocal__ctor(this_03,this_84,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_03;
            }
            if ((String *)unaff_ESI.m_Index == (String *)0xffffffff) {
              this_02 = (MVPreviewAvatar *)func_?();
              MVPreviewAvatar::MVPreviewAvatar__ctor(this_02,this_84,worldObjects,(MethodInfo *)0x0)
              ;
              return (MVWorldObjectClient *)this_02;
            }
            this_01 = (MVAvatarRemote *)func_?();
            MVAvatarRemote::MVAvatarRemote__ctor(this_01,this_84,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_01;
          }
        }
      }
      goto code_?;
    case 1:
      this_04 = (MVCubeModelInstance *)func_?();
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    case 2:
      this_05 = (MVPointLight *)func_?();
      MVPointLight::MVPointLight__ctor(this_05,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    case 3:
      this_06 = (MVTriggerBox *)func_?();
      MVTriggerBox::MVTriggerBox__ctor(this_06,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_06;
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
      goto code_?;
    case 7:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
      pMVar18 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar18,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar18;
    case 8:
      this_07 = (MVCubeModelPrototypeTerrain *)func_?();
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    case 9:
      this_08 = (MVGroup *)func_?();
      MVGroup::MVGroup__ctor_2(this_08,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    case 0xd:
      this_09 = (MVSoundEmitter *)func_?();
      MVSoundEmitter::MVSoundEmitter__ctor(this_09,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    case 0x11:
      this_10 = (MVFlag *)func_?();
      MVFlag::MVFlag__ctor(this_10,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    case 0x13:
      this_11 = (MVBattery *)func_?();
      MVBattery::MVBattery__ctor(this_11,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    case 0x14:
      this_12 = (MVToggleBox *)func_?();
      MVToggleBox::MVToggleBox__ctor(this_12,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    case 0x15:
      this_13 = (MVNegate *)func_?();
      MVNegate::MVNegate__ctor(this_13,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    case 0x16:
      this_14 = (MVAnd *)func_?();
      MVAnd::MVAnd__ctor(this_14,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    case 0x17:
      this_15 = (MVExplosives *)func_?();
      MVExplosives::MVExplosives__ctor(this_15,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    case 0x18:
      this_16 = (MVTextMsg *)func_?();
      MVTextMsg::MVTextMsg__ctor(this_16,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    case 0x19:
      this_17 = (MVFire *)func_?();
      MVFire::MVFire__ctor(this_17,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    case 0x1a:
      this_18 = (MVSmoke *)func_?();
      MVSmoke::MVSmoke__ctor(this_18,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    case 0x1b:
      this_19 = (MVTimeTrigger *)func_?();
      MVTimeTrigger::MVTimeTrigger__ctor(this_19,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    case 0x1c:
      this_20 = (MVTeleporter *)func_?();
      MVTeleporter::MVTeleporter__ctor(this_20,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    case 0x1d:
      this_21 = (MVGoal *)func_?();
      MVGoal::MVGoal__ctor(this_21,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    case 0x20:
      this_22 = (MVCubeModelFineGrainedTerrain *)func_?();
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    case 0x21:
      this_23 = (MVPressurePlate *)func_?();
      MVPressurePlate::MVPressurePlate__ctor(this_23,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_23;
    case 0x25:
      this_24 = (MVPickupItemBase *)func_?();
      MVPickupItemBase::MVPickupItemBase__ctor(this_24,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    case 0x26:
      this_25 = (MVSkybox *)func_?();
      MVSkybox::MVSkybox__ctor(this_25,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    case 0x27:
      this_26 = (MVSpawnPointRed *)func_?();
      MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_26;
    case 0x28:
      this_27 = (MVSpawnPointGreen *)func_?();
      MVSpawnPointGreen::MVSpawnPointGreen__ctor(this_27,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    case 0x29:
      this_28 = (MVSpawnPointYellow *)func_?();
      MVSpawnPointYellow::MVSpawnPointYellow__ctor(this_28,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    case 0x2a:
      pMVar18 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar18,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar18;
    case 0x2b:
      this_29 = (MVObjectEnabler *)func_?();
      MVObjectEnabler::MVObjectEnabler__ctor(this_29,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_29;
    case 0x2c:
      this_30 = (MVWaterPlane *)func_?();
      MVWaterPlane::MVWaterPlane__ctor(this_30,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_30;
    case 0x2d:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_);
      pOVar6 = (Object *)func_?();
      puStackY_58 = &UNK_?;
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84
                             ,pOVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uVar7 = 0;
      uVar8 = 1;
      if (unaff_ESI.m_Index == 0) goto code_?;
      bVar19 = *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8);
      bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      uVar7 = bVar19 < bVar20;
      uVar8 = bVar19 == bVar20;
      if (!(bool)uVar7) {
        pDVar21 = *(Dictionary_2_System_Object_System_Object___Class **)
                  (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                  (uint)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment * 4);
        uVar7 = pDVar21 < 
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        uVar8 = 0;
        if (pDVar21 == 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>) {
          unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                                ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
          uVar7 = 0;
          uVar8 = 1;
          if (unaff_ESI.m_Index == 0) goto code_?;
          bVar19 = *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8);
          bVar20 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment;
          uVar7 = bVar19 < bVar20;
          uVar8 = bVar19 == bVar20;
          if (!(bool)uVar7) {
            pDVar21 = *(Dictionary_2_System_Object_System_Object___Class **)
                      (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                      (uint)(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment * 4);
            uVar7 = pDVar21 < 
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            uVar8 = 0;
            if (pDVar21 == 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
            {
              bVar1 = 0xd9;
              pMVar9 = 
              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              ;
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (unaff_ESI.m_Index,(Object *)unaff_EBX,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              bVar5 = (byte)((uint)pMVar9 >> 0x10);
              uVar7 = 0;
              uVar8 = TVar10.m_Index == 0;
              if (!(bool)uVar8) {
                pIVar11 = (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class;
                uVar7 = *(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) < pIVar11;
                uVar8 = false;
                if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) == pIVar11) {
                  puVar22 = (undefined1 *)func_?();
                  switch(*puVar22) {
                  case 7:
                    this_31 = (MVMovable *)func_?();
                    MVMovable::MVMovable__ctor(this_31,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_31;
                  case 8:
                    this_32 = (MVBody *)func_?();
                    MVBody::MVBody__ctor(this_32,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_32;
                  case 9:
                    this_33 = (MVTeleportGroup *)func_?();
                    MVTeleportGroup::MVTeleportGroup__ctor
                              (this_33,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_33;
                  case 10:
                    this_34 = (MVSentryGunBlueprint *)func_?();
                    MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                              (this_34,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_34;
                  case 0xb:
                    this_35 = (MVMovingPlatform *)func_?();
                    MVMovingPlatform::MVMovingPlatform__ctor
                              (this_35,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_35;
                  case 0xc:
                    this_36 = (MVMovingPlatformGroup *)func_?();
                    MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                              (this_36,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_36;
                  case 0xd:
                    this_37 = (MVRotator *)func_?();
                    MVRotator::MVRotator__ctor(this_37,this_84,worldObjects,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)this_37;
                  case 0xe:
                    goto code_?;
                  default:
                    pSVar14 = mscorlib.dll::System::Enum::Enum_ToString
                                        ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                    pSVar14 = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar14,
                                         (MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)pSVar14,(MethodInfo *)0x0);
                    return (MVWorldObjectClient *)0x0;
                  }
                }
                goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
      goto code_?;
    case 0x2e:
      this_38 = (MVPulseBox *)func_?();
      MVPulseBox::MVPulseBox__ctor(this_38,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_38;
    case 0x2f:
      this_39 = (MVRandomBox *)func_?();
      MVRandomBox::MVRandomBox__ctor(this_39,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    case 0x30:
      this_40 = (MVSentryGun *)func_?();
      MVSentryGun::MVSentryGun__ctor(this_40,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    case 0x31:
      this_41 = (MVCollectible *)func_?();
      MVCollectible::MVCollectible__ctor(this_41,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    case 0x32:
      this_42 = (MVMovingPlatformNode *)func_?();
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_42,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    case 0x33:
      this_43 = (MVWaterPlanePreset *)func_?();
      MVWaterPlanePreset::MVWaterPlanePreset__ctor(this_43,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    case 0x34:
      this_44 = (MVPointLightPreset *)func_?();
      MVPointLightPreset::MVPointLightPreset__ctor(this_44,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    case 0x35:
code_?:
      this_45 = (MVGhostInstance *)func_?();
      MVGhostInstance::MVGhostInstance__ctor(this_45,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_45;
    case 0x36:
      this_46 = (MVCubeGun *)func_?();
      MVCubeGun::MVCubeGun__ctor(this_46,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_46;
    case 0x37:
      this_47 = (MVCheckpoint *)func_?();
      MVCheckpoint::MVCheckpoint__ctor(this_47,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    case 0x38:
      this_48 = (MVHoverCraft *)func_?();
      MVHoverCraft::MVHoverCraft__ctor(this_48,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    case 0x39:
      this_49 = (MVWorldObjectSpawnerVehicle *)func_?();
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_49,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    case 0x3b:
      this_50 = (MVJetPack *)func_?();
      MVJetPack::MVJetPack__ctor(this_50,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    case 0x3c:
      this_51 = (MVRoundCube *)func_?();
      MVRoundCube::MVRoundCube__ctor(this_51,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    case 0x3d:
      this_52 = (MVAdvancedGhost *)func_?();
      MVAdvancedGhost::MVAdvancedGhost__ctor(this_52,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_52;
    case 0x3e:
      this_53 = (MVHamsterWheel *)func_?();
      MVHamsterWheel::MVHamsterWheel__ctor(this_53,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_53;
    case 0x3f:
      this_54 = (MVKillLimit *)func_?();
      MVKillLimit::MVKillLimit__ctor(this_54,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    case 0x40:
      this_55 = (MVOculusKillLimit *)func_?();
      MVOculusKillLimit::MVOculusKillLimit__ctor(this_55,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    case 0x41:
      this_56 = (MVCountingCube *)func_?();
      MVCountingCube::MVCountingCube__ctor(this_56,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    default:
      switch(iVar13) {
      case 0x76:
        this_57 = (MVVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_57,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_57;
      case 0x77:
        this_58 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor(this_58,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      default:
        goto code_?;
      case 0x82:
        this_59 = (MVGamePoint *)func_?();
        MVGamePoint::MVGamePoint__ctor(this_59,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      case 0x83:
        pMVar23 = (MVWorldObjectClient *)func_?();
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar23,this_84,worldObjects,(MethodInfo *)0x0
                  );
        return pMVar23;
      case 0x85:
        worldObjectData =
             (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
        pOVar6 = (Object *)func_?();
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               this_84,pOVar6,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar7 = 0;
        uVar8 = 1;
        if (pMVar16 == (MVNetworkGame *)0x0) goto code_?;
        pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        bVar5 = (byte)((uint)pMVar16 >> 0x10);
        uVar7 = 0;
        uVar8 = 1;
        if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EBX = (String *)(pMVar17->fields)._._ActorNr_k__BackingField;
        uVar7 = 0;
        uVar8 = 1;
        if (unaff_ESI.m_Index == 0) goto code_?;
        pIVar11 = (TypeInfo__System__Int32->_0).element_class;
        uVar7 = *(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) < pIVar11;
        uVar8 = 0;
        if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) == pIVar11) {
          piVar12 = (int *)func_?();
          if ((String *)*piVar12 == unaff_EBX) {
            this_61 = (MVBuildModeAvatarLocal *)func_?();
            MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                      (this_61,this_84,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_61;
          }
          this_60 = (MVBuildModeAvatarRemote *)func_?();
          MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                    (this_60,this_84,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_60;
        }
        break;
      case 0x86:
        this_62 = (MVAvatarSpawnRoleCreator *)func_?();
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_62,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_62;
      case 0x87:
        this_63 = (MVGameOptionDataObject *)func_?();
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_63,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      case 0x88:
        this_64 = (MVObjectTransparency *)func_?();
        WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                  (this_64,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      case 0x91:
        this_65 = (MVCameraSettings *)func_?();
        MVCameraSettings::MVCameraSettings__ctor(this_65,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      case 0x92:
        this_66 = (MVGravityCube *)func_?();
        MVGravityCube::MVGravityCube__ctor(this_66,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      case 0x94:
        this_67 = (MVGameCoin *)func_?();
        MVGameCoin::MVGameCoin__ctor(this_67,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      case 0x95:
        this_68 = (MVGameCoinChest *)func_?();
        MVGameCoinChest::MVGameCoinChest__ctor(this_68,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      case 0x96:
        this_69 = (ThemeWorldObject *)func_?();
        ThemeWorldObject::ThemeWorldObject__ctor(this_69,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      case 0x97:
        this_70 = (MVDoor *)func_?();
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      case 0x98:
        this_71 = (MVDoorBlueprint *)func_?();
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      case 0x99:
        this_72 = (MVMeleeWeaponBase *)func_?();
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      case 0x9a:
        pMVar24 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar24,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar24;
      case 0x9b:
        this_73 = (MVCostumeBase *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      case 0x9c:
        pMVar24 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar24,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar24;
      case 0xa1:
        this_74 = (TeamEditor *)func_?();
        TeamEditor::TeamEditor__ctor(this_74,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      case 0xa2:
        this_75 = (TriggerCube *)func_?();
        TriggerCube::TriggerCube__ctor(this_75,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      case 0xa4:
        this_76 = (CollectTheItemCollectableInstance *)func_?();
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      case 0xa5:
        this_77 = (ShootableButton *)func_?();
        ShootableButton::ShootableButton__ctor(this_77,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      case 0xa6:
        this_78 = (UseLever *)func_?();
        UseLever::UseLever__ctor(this_78,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      case 0xa7:
        this_79 = (CollectTheItemDropOff *)func_?();
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      case 0xa8:
        this_80 = (CollectTheItemCollectable *)func_?();
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      case 0xa9:
        this_81 = (CollectTheItem *)func_?();
        CollectTheItem::CollectTheItem__ctor(this_81,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_81;
      case 0xaa:
        this_82 = (WindTurbine *)func_?();
        WindTurbine::WindTurbine__ctor(this_82,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      case 0xab:
        this_83 = (MVGlobalSoundEmitter *)func_?();
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_83;
      }
    }
  }
  uVar25 = func_?();
  uVar26 = (uint)((ulonglong)uVar25 >> 0x20);
  if (!(bool)uVar7 && !(bool)uVar8) {
    bVar27 = (byte)((uint)extraout_ECX >> 8);
    bVar28 = (byte)extraout_ECX + bVar27;
    bVar29 = CARRY1((byte)extraout_ECX,bVar27) || CARRY1(bVar28,uVar7);
    uVar30 = (undefined3)((uint)extraout_ECX >> 8);
    bVar28 = bVar28 + uVar7;
    iVar31 = CONCAT31(uVar30,bVar28);
    uVar32 = CONCAT14(bVar29,*(undefined4 *)(iVar31 + 0x10));
    uVar33 = (ulonglong)uVar32 << (bVar28 & 0x1f) | (ulonglong)(uVar32 >> 0x21 - (bVar28 & 0x1f));
    *(undefined4 *)(iVar31 + 0x10) = (int)uVar33;
    bVar34 = (bVar28 & 0x1f) == 0;
    uVar35 = (uint)(byte)(bVar34 * bVar29 | !bVar34 * ((uVar33 & 0x100000000) != 0));
    puVar22 = &stack0xfffffff8 + uVar26;
    bVar34 = CARRY4((uint)&stack0xfffffff8,uVar26) || CARRY4((uint)puVar22,uVar35);
    *(int *)(puVar22 + (uVar35 - 4)) = iVar31;
    bVar36 = (byte)((ulonglong)uVar25 >> 0x28);
    bVar19 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar36;
    bVar29 = CARRY1(*(byte *)&((String *)unaff_ESI.m_Index)->klass,bVar36) || CARRY1(bVar19,bVar34);
    *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar19 + bVar34;
    uVar37 = (ushort)((ulonglong)uVar25 >> 0x10);
    bVar20 = (byte)uVar25 / 0x51;
    bVar38 = (byte)unaff_EBX;
    bVar34 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar29);
    bVar5 = bVar5 + bVar38 + bVar29;
    *(int *)(puVar22 + (uVar35 - 8)) = iVar31;
    bVar19 = bVar5 + bVar38;
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar19,bVar34);
    bVar19 = bVar19 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0xc)) = iVar31;
    bVar5 = bVar19 + bVar38;
    bVar34 = CARRY1(bVar19,bVar38) || CARRY1(bVar5,bVar29);
    bVar5 = bVar5 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x10)) = iVar31;
    ppMVar39 = &unaff_EBX[-3].monitor;
    bVar29 = CARRY1(*(byte *)ppMVar39,bVar38) || CARRY1(*(char *)ppMVar39 + bVar38,bVar34);
    *(byte *)ppMVar39 = *(char *)ppMVar39 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x14)) = iVar31;
    pbVar40 = (byte *)(iVar31 + -0x36efae2c);
    bVar19 = *pbVar40 + bVar20;
    bVar34 = CARRY1(*pbVar40,bVar20) || CARRY1(bVar19,bVar29);
    *pbVar40 = bVar19 + bVar29;
    bVar20 = (byte)((byte)uVar25 % 0x51) % 0x51;
    bVar19 = bVar5 + bVar38;
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar19,bVar34);
    bVar19 = bVar19 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x18)) = iVar31;
    bVar5 = bVar19 + bVar38;
    bVar34 = CARRY1(bVar19,bVar38) || CARRY1(bVar5,bVar29);
    bVar5 = bVar5 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x1c)) = iVar31;
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar34);
    bVar5 = bVar5 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x20)) = iVar31;
    bVar34 = CARRY1(bVar36,bVar27) || CARRY1(bVar36 + bVar27,bVar29);
    bVar41 = (byte)((ulonglong)uVar25 >> 0x20);
    bVar42 = bVar36 + bVar27 + bVar29;
    iVar13 = CONCAT22((short)((ulonglong)uVar25 >> 0x30),CONCAT11(bVar42,bVar41));
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar34);
    bVar5 = bVar5 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x24)) = iVar31;
    bVar34 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar29);
    bVar5 = bVar5 + bVar38 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x28)) = iVar31;
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar34);
    bVar5 = bVar5 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x2c)) = iVar31;
    bVar19 = *(char *)&unaff_EBX->klass + bVar41;
    bVar34 = CARRY1(*(byte *)&unaff_EBX->klass,bVar41) || CARRY1(bVar19,bVar29);
    *(byte *)&unaff_EBX->klass = bVar19 + bVar29;
    bVar36 = bVar20 % 0x51 + (bVar20 / 0x51) * 'Q';
    pbVar40 = (byte *)CONCAT22(uVar37,(ushort)bVar36);
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar34);
    bVar5 = bVar5 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x30)) = iVar31;
    bVar20 = *pbVar40;
    bVar43 = (byte)((uint)unaff_EBX >> 8);
    bVar19 = *pbVar40;
    *pbVar40 = bVar19 + bVar43 + bVar29;
    bVar34 = CARRY1(bVar1,bVar38) ||
             CARRY1(bVar1 + bVar38,CARRY1(bVar20,bVar43) || CARRY1(bVar19 + bVar43,bVar29));
    *(int *)(puVar22 + (uVar35 - 0x34)) = iVar31;
    pbVar40 = (byte *)(iVar13 + -0x58efae2b);
    bVar19 = *pbVar40;
    bVar1 = *pbVar40;
    *pbVar40 = bVar1 + bVar36 + bVar34;
    bVar34 = CARRY1(bVar28,CARRY1(bVar19,bVar36) || CARRY1(bVar1 + bVar36,bVar34));
    bVar29 = CARRY1(bVar28,bVar42) || CARRY1(bVar28 + bVar42,bVar34);
    bVar20 = bVar28 + bVar42 + bVar34;
    iVar31 = CONCAT31(uVar30,bVar20);
    bVar1 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar41;
    bVar34 = CARRY1(*(byte *)&((String *)unaff_ESI.m_Index)->klass,bVar41) || CARRY1(bVar1,bVar29);
    *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar1 + bVar29;
    uVar30 = (undefined3)(((uint)uVar37 << 0x10) >> 8);
    *(int *)(puVar22 + (uVar35 - 0x38)) = iVar31;
    bVar1 = *(char *)&unaff_EBX->klass + bVar43;
    bVar29 = CARRY1(*(byte *)&unaff_EBX->klass,bVar43) || CARRY1(bVar1,bVar34);
    *(byte *)&unaff_EBX->klass = bVar1 + bVar34;
    bVar19 = -bVar29;
    *(int *)(puVar22 + (uVar35 - 0x3c)) = iVar31;
    pbVar40 = (byte *)(CONCAT31(uVar30,bVar19) + -0x2a);
    bVar1 = *pbVar40;
    *pbVar40 = bVar1 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x40)) = iVar31;
    bVar34 = CARRY1(in_stack_44,bVar19) ||
             CARRY1(in_stack_44 + bVar19,CARRY1(bVar1,bVar29));
    *(int *)(puVar22 + (uVar35 - 0x44)) = iVar31;
    bVar29 = CARRY1(bVar5,bVar38) || CARRY1(bVar5 + bVar38,bVar34);
    bVar1 = bVar5 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x48)) = iVar31;
    bVar34 = CARRY1(bVar1,bVar38) || CARRY1(bVar1 + bVar38,bVar29);
    bVar1 = bVar1 + bVar38 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x4c)) = iVar31;
    bVar29 = CARRY1(bVar43,bVar20) || CARRY1(bVar43 + bVar20,bVar34);
    bVar19 = bVar43 + bVar20 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x50)) = iVar31;
    bVar5 = bVar19 + bVar42;
    bVar34 = CARRY1(bVar19,bVar42) || CARRY1(bVar5,bVar29);
    iVar45 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar5 + bVar29,bVar38));
    bVar19 = -bVar34;
    *(int *)(puVar22 + (uVar35 - 0x54)) = iVar31;
    bVar29 = CARRY1(bVar1,bVar38) || CARRY1(bVar1 + bVar38,bVar34);
    bVar1 = bVar1 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 0x58)) = iVar31;
    bVar5 = bVar1 + bVar38 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x5c)) = iVar31;
    bVar34 = CARRY1(bVar5,bVar38) ||
             CARRY1(bVar5 + bVar38,CARRY1(bVar1,bVar38) || CARRY1(bVar1 + bVar38,bVar29));
    *(int *)(puVar22 + (uVar35 - 0x60)) = iVar31;
    ppDVar46 = &this_84->klass + iVar13 * 2;
    bVar29 = CARRY1(*(byte *)ppDVar46,bVar38) || CARRY1(*(byte *)ppDVar46 + bVar38,bVar34);
    *(byte *)ppDVar46 = *(byte *)ppDVar46 + bVar38 + bVar34;
    *(int *)(puVar22 + (uVar35 - 100)) = iVar31;
    pbVar40 = (byte *)(iVar31 + -0x29);
    bVar47 = CARRY1(*pbVar40,bVar19) || CARRY1(*pbVar40 + bVar19,bVar29);
    *pbVar40 = *pbVar40 + bVar19 + bVar29;
    *(int *)(puVar22 + (uVar35 - 0x68)) = iVar31;
    pbVar40 = (byte *)((int)&((String *)(unaff_ESI.m_Index + -0x30))->monitor + 3);
    bVar1 = *pbVar40;
    bVar34 = CARRY1(bVar1,bVar47);
    *pbVar40 = bVar1 + bVar47;
    *(int *)(puVar22 + (uVar35 - 0x6c)) = iVar31;
    pbVar40 = (byte *)(iVar45 + -0x4fefae29);
    bVar29 = CARRY1(*pbVar40,bVar20) || CARRY1(*pbVar40 + bVar20,bVar34);
    *pbVar40 = *pbVar40 + bVar20 + bVar34;
    pcVar48 = (char *)CONCAT31(uVar30,*(undefined1 *)(iVar45 + (uint)bVar19));
    puVar49 = puVar22 + (uVar35 - 0x70);
    *(int *)(puVar22 + (uVar35 - 0x70)) = iVar31;
    bVar34 = CARRY1(bVar27,bVar41) || CARRY1(bVar27 + bVar41,bVar29);
    iVar31 = CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(bVar27 + bVar41 + bVar29,bVar20))
    ;
    do {
      iVar50 = iVar13;
      bVar5 = *(byte *)(iVar45 + ((uint)pcVar48 & 0xff));
      *(int *)(puVar49 + -4) = iVar31;
      bVar28 = (byte)((uint)iVar45 >> 8);
      bVar1 = (byte)iVar50 + bVar28;
      bVar19 = bVar1 + bVar34;
      uVar8 = *(undefined1 *)(iVar45 + (uint)bVar5);
      *(int *)(puVar49 + -8) = iVar31;
      *(char *)&this_84->klass =
           *(char *)&this_84->klass + (char)iVar45 +
           (CARRY1((byte)iVar50,bVar28) || CARRY1(bVar1,bVar34));
      pcVar48 = (char *)CONCAT31((int3)((uint)pcVar48 >> 8),uVar8);
      puVar22 = puVar49 + -7;
      while( true ) {
        pDVar51 = this_84;
        puVar49 = puVar22;
        pcVar52 = pcVar48;
        iVar45 = -0x1fefae26;
        bVar34 = (char *)0xd5efae24 < pcVar52;
        pcVar48 = pcVar52 + 0x2a1051db;
        *(int *)(iVar31 + 0x10) = (int)ROUND(extraout_ST0);
        this_84 = (Dictionary_2_System_Object_System_Object_ *)
                  ((int)&pDVar51[-1].fields._syncRoot + 3);
        *(int *)(iVar31 + 0x10) = (int)ROUND(extraout_ST0);
        iVar13 = CONCAT31((int3)((uint)iVar50 >> 8),bVar19);
        if (this_84 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        *(int *)(puVar49 + -4) = iVar31;
        pbVar40 = (byte *)(iVar31 + -0x41efae25);
        bVar1 = *pbVar40;
        bVar5 = *pbVar40;
        *pbVar40 = (bVar5 - 0x26) + bVar34;
        *(int *)(iVar31 + 0x10) = (int)ROUND(extraout_ST0);
        puVar22 = puVar49 + -4;
        if (iVar31 != 0) {
          *(int *)(puVar49 + -8) = iVar31;
          *pcVar48 = *pcVar48 + bVar20 + (0x25 < bVar1 || CARRY1(bVar5 - 0x26,bVar34));
          pbVar40 = (byte *)(pcVar52 + -0x28000001);
          uVar26 = *(uint *)(puVar49 + -8);
          iVar13 = iVar31 + -1;
          uVar53 = (undefined2)((uint)iVar50 >> 0x10);
          cVar54 = (char)((uint)pbVar40 >> 8);
          bVar1 = (byte)((uint)iVar50 >> 8);
          if (iVar13 != 0) {
            pbVar55 = (byte *)CONCAT22(uVar53,CONCAT11(bVar1 + 0x26,bVar19));
            *(int *)(puVar49 + -8) = iVar13;
            bVar1 = (char)((uint)iVar13 >> 8) + cVar54 + (bVar1 < 0xda);
            iVar13 = CONCAT22((short)((uint)iVar13 >> 0x10),CONCAT11(bVar1,(char)iVar13));
            pbVar56 = (byte *)0xe01051db;
            pbVar57 = puVar49 + -0xc;
            *(int *)(puVar49 + -0xc) = iVar13;
            bVar34 = CARRY1(*(byte *)&this_84->klass,bVar1);
            *(byte *)&this_84->klass = *(char *)&this_84->klass + bVar1;
            cVar54 = *(char *)&this_84->klass;
            goto code_?;
          }
          pbVar55 = (byte *)((int)&pDVar51[-1].fields._buckets + 3);
          bVar34 = CARRY1(*pbVar55,bVar1) || CARRY1(*pbVar55 + bVar1,pcVar48 < (char *)0x521051dc)
          ;
          *pbVar55 = *pbVar55 + bVar1 + (pcVar48 < (char *)0x521051dc);
          *(undefined4 *)(puVar49 + -8) = 0;
          pbVar55 = puVar49 + -0x22bc60e7;
          bVar5 = *pbVar55;
          bVar20 = *pbVar55;
          *pbVar55 = (bVar20 - 0x26) + bVar34;
          *(undefined4 *)(puVar49 + -0xc) = 0;
          cVar54 = bVar1 + cVar54 + (0x25 < bVar5 || CARRY1(bVar20 - 0x26,bVar34));
          pbVar56 = (byte *)(uVar26 | 0xe01051da);
          *(undefined4 *)(puVar49 + -0x10) = 0;
          *pbVar40 = *pbVar40 + cVar54;
          *(double *)(iVar31 + 0xf) = (double)extraout_ST0;
          *(uint *)(puVar49 + -0x14) = uVar26;
          *(double *)(iVar31 + 0xf) = (double)extraout_ST0;
          this_84 = *(Dictionary_2_System_Object_System_Object_ **)(puVar49 + -0x14);
          *(float *)(iVar31 + 0xf) = (float)extraout_ST0;
          *(undefined4 *)(puVar49 + -0x14) = 0;
          *(undefined1 *)(iVar31 + -0x31efae28) = *(undefined1 *)(iVar31 + -0x31efae28);
          *(float *)(iVar31 + 0xf) = (float)extraout_ST0;
          *(float *)(iVar31 + 0xf) = (float)extraout_ST0;
          bVar5 = (byte)pbVar56;
          pbVar55 = (byte *)CONCAT31((int3)(CONCAT22(uVar53,CONCAT11(cVar54,bVar19)) >> 8),
                                     bVar19 - bVar5);
          *(undefined4 *)(puVar49 + -0x18) = 0;
          bVar20 = (byte)((uint)pbVar56 >> 8);
          bVar1 = bRam_? + bVar20;
          bVar34 = CARRY1(bRam_?,bVar20) || CARRY1(bVar1,bVar19 < bVar5);
          bRam_? = bVar1 + (bVar19 < bVar5);
          *(int *)(iVar31 + 0xf) = (int)ROUND(extraout_ST0);
          *(double *)(iVar31 + 0xf) = (double)extraout_ST0;
          iVar13 = 0x5d1051dd;
          pbVar58 = puVar49 + -0x18;
          pbVar59 = pbVar40;
          goto code_?;
        }
      }
    } while( true );
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)unaff_ESI.m_Index,unaff_EBP);
  return (MVWorldObjectClient *)0x0;
  while( true ) {
    pbVar55 = (byte *)CONCAT22((short)((uint)pbVar55 >> 0x10),
                               CONCAT11((char)((uint)pbVar55 >> 8) + (char)pbVar56 + bVar34,
                                        (char)pbVar55));
    *(double *)(iVar13 + 0xf) = (double)extraout_ST0;
    bVar29 = CARRY4((uint)pbVar56,unaff_ESI.m_Index);
    pbVar56 = pbVar56 + unaff_ESI.m_Index;
    pbVar59[-0xffffffff00000004] = 0;
    pbVar59[-0xffffffff00000003] = 0;
    pbVar59[-0xffffffff00000002] = 0;
    pbVar59[-0xffffffff00000001] = 0;
    bVar1 = *pbVar58;
    bVar34 = CARRY1(bVar1,bVar29);
    *pbVar58 = bVar1 + bVar29;
    uVar60 = in(0xde);
    pbVar57 = pbVar59 + -8;
    pbVar59[-0xffffffff00000008] = 0;
    pbVar59[-0xffffffff00000007] = 0;
    pbVar59[-0xffffffff00000006] = 0;
    pbVar59[-0xffffffff00000005] = 0;
    bVar1 = *pbVar55;
    *pbVar55 = bVar1 + bVar34;
    *(short *)(iVar13 + 0xf) = (short)ROUND(extraout_ST0);
    bVar5 = (byte)uVar60;
    in_AF = 9 < (bVar5 & 0xf) | in_AF;
    bVar34 = 0x99 < bVar5 || CARRY1(bVar1,bVar34);
    cVar54 = bVar5 + in_AF * -6 + bVar34 * -0x60;
    pbVar40 = (byte *)CONCAT31((int3)((uint)uVar60 >> 8),cVar54);
    iVar13 = 0;
code_?:
    *(short *)(iVar13 + 0x10) = (short)ROUND(extraout_ST0);
    pbVar59 = pbVar57 + -4;
    *(byte **)(pbVar57 + -4) = pbVar57;
    *(short *)(iVar13 + 0x10) = (short)ROUND(extraout_ST0);
    pbVar58 = pbVar40;
    if (cVar54 < '\0') break;
code_?:
    pcVar48 = (char *)(iVar13 + -1);
    if (pcVar48 != (char *)0x0) {
      uVar25 = CONCAT44(*(undefined4 *)pbVar59,pbVar58);
      pbVar61 = pbVar59 + 4;
      goto code_?;
    }
  }
  *(int *)(pbVar57 + -8) = iVar13;
  puVar22 = &(((String *)(unaff_ESI.m_Index + -0x3cefae30))->fields).field_0x7;
  bVar5 = (byte)pbVar56;
  bVar19 = CARRY1(*puVar22,bVar5) || CARRY1(*puVar22 + bVar5,bVar34);
  *puVar22 = *puVar22 + bVar5 + bVar34;
  cVar54 = *puVar22 == '\0';
  *(short *)(iVar13 + 0x10) = (short)ROUND(extraout_ST0);
  puVar62 = pbVar57 + -0xc;
  *(undefined **)(pbVar57 + -0xc) = &UNK_?;
  uVar25 = func_?();
  pbVar55 = (byte *)((ulonglong)uVar25 >> 0x20);
  pbVar40 = (byte *)uVar25;
  pcVar48 = (char *)(extraout_ECX_00 + -1);
  bVar1 = (byte)((ulonglong)uVar25 >> 0x20);
  if (pcVar48 == (char *)0x0 || cVar54 != '\0') {
    bVar28 = (byte)((ulonglong)uVar25 >> 0x28);
    bVar20 = *pbVar55 + bVar28;
    bVar34 = CARRY1(*pbVar55,bVar28) || CARRY1(bVar20,bVar19);
    *pbVar55 = bVar20 + bVar19;
    pcVar48 = (char *)(extraout_ECX_00 + -2);
    if (pcVar48 == (char *)0x0 || *pbVar55 == 0) {
      piVar63 = &this_84[-1].fields._count;
      bVar19 = (char)*piVar63 + bVar1;
      bVar29 = CARRY1((byte)*piVar63,bVar1) || CARRY1(bVar19,bVar34);
      *(byte *)piVar63 = bVar19 + bVar34;
      pbVar61 = puVar62 + -4;
      *(char **)(puVar62 + -4) = pcVar48;
      pbVar58 = pbVar40 + 0x51;
      bVar20 = (byte)((uint)pbVar56 >> 8);
      bVar19 = *pbVar58 + bVar20;
      bVar34 = CARRY1(*pbVar58,bVar20) || CARRY1(bVar19,bVar29);
      *pbVar58 = bVar19 + bVar29;
      pbVar58 = (byte *)(extraout_ECX_00 + -0x39efae22);
      bVar20 = (byte)((ulonglong)uVar25 >> 8);
      bVar19 = *pbVar58 + bVar20;
      bVar29 = CARRY1(*pbVar58,bVar20) || CARRY1(bVar19,bVar34);
      *pbVar58 = bVar19 + bVar34;
      if (extraout_ECX_00 + -3 != 0 && *pbVar58 != 0) {
        bVar34 = CARRY1(bVar1,pbVar55[0x18171602]);
        pbVar55 = (byte *)CONCAT31((int3)((ulonglong)uVar25 >> 0x28),bVar1 + pbVar55[0x18171602]);
code_?:
        *(uint *)pbVar55 = (*(int *)pbVar55 - (int)pbVar56) - (uint)bVar34;
        pcVar64 = (code *)swi(3);
        pMVar23 = (MVWorldObjectClient *)(*pcVar64)();
        return pMVar23;
      }
      bVar20 = (byte)((uint)(extraout_ECX_00 + -3) >> 8);
      bVar19 = bVar5 + bVar20;
      bVar47 = CARRY1(bVar5,bVar20) || CARRY1(bVar19,bVar29);
      cVar54 = bVar19 + bVar29;
      pbVar56 = (byte *)CONCAT31((int3)((uint)pbVar56 >> 8),cVar54);
      if (extraout_ECX_00 != 4 && cVar54 != '\0') {
        bVar34 = (byte *)0xe7e8e9fd < pbVar40 || CARRY4((uint)(pbVar40 + 0x18171602),(uint)bVar47);
        goto code_?;
      }
      bVar34 = CARRY1(*pbVar40,bVar1) || CARRY1(*pbVar40 + bVar1,bVar47);
      *pbVar40 = *pbVar40 + bVar1 + bVar47;
      pcVar48 = (char *)(extraout_ECX_00 + -5);
      if (pcVar48 == (char *)0x0 || *pbVar40 != 0) {
code_?:
        piVar12 = (int *)uVar25;
        bVar1 = (byte)((ulonglong)uVar25 >> 0x28);
        bVar29 = CARRY1(bRam_?,bVar1) || CARRY1(bRam_? + bVar1,bVar34);
        bRam_? = bRam_? + bVar1 + bVar34;
        pcVar52 = pcVar48 + -1;
        if (pcVar52 != (char *)0x0 && bRam_? == '\0') {
          pcVar64 = (code *)swi(3);
          pMVar23 = (MVWorldObjectClient *)(*pcVar64)();
          return pMVar23;
        }
        pbVar40 = (byte *)((int)&this_84[-1].fields._count + 1);
        bVar20 = (byte)((uint)pbVar56 >> 8);
        bVar34 = CARRY1(*pbVar40,bVar20) || CARRY1(*pbVar40 + bVar20,bVar29);
        *pbVar40 = *pbVar40 + bVar20 + bVar29;
        *(char **)(pbVar61 + -4) = pcVar52;
        pbVar40 = (byte *)(pcVar48 + -0x1e36efb0);
        bVar19 = (byte)((ulonglong)uVar25 >> 8);
        bVar5 = *pbVar40 + bVar19;
        bVar29 = CARRY1(*pbVar40,bVar19) || CARRY1(bVar5,bVar34);
        *pbVar40 = bVar5 + bVar34;
        puVar65 = pbVar61 + -8;
        *(char **)(pbVar61 + -8) = pcVar52;
        bVar19 = (byte)((uint)pcVar52 >> 8);
        bVar5 = bVar1 + bVar19;
        bVar34 = CARRY1(bVar1,bVar19) || CARRY1(bVar5,bVar29);
        bVar1 = (byte)((ulonglong)uVar25 >> 0x20);
        if (pcVar48 == (char *)0x2 || (byte)(bVar5 + bVar29) != '\0') {
          bVar5 = *pbVar56;
          bVar19 = *pbVar56 + bVar1;
          *pbVar56 = bVar19 + bVar34;
          if (pcVar48 == (char *)0x3) {
            *(byte *)piVar12 =
                 (char)*piVar12 + bVar20 + (CARRY1(bVar5,bVar1) || CARRY1(bVar19,bVar34));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          *piVar12 = (int)((int)piVar12 + (uint)bVar34 + *piVar12);
          if (*piVar12 != 0) goto code_?;
        }
        *(MethodInfo ***)(pbVar61 + -0xc) =
             &
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
        ;
        puVar66 = pbVar61 + -0x10;
        *(undefined **)(pbVar61 + -0x10) = &UNK_?;
        func_?();
        *(MethodInfo ***)(puVar66 + -4) =
             &
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
        ;
        puVar67 = puVar66 + -8;
        *(undefined **)(puVar66 + -8) = &UNK_?;
        func_?();
        *(MethodInfo ***)(puVar67 + -4) =
             &
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
        ;
        puVar68 = puVar67 + -8;
        *(undefined **)(puVar67 + -8) = &UNK_?;
        func_?();
        *(MethodInfo ***)(puVar68 + -4) =
             &
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
        ;
        puVar69 = puVar68 + -8;
        *(undefined **)(puVar68 + -8) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_RuntimePrototypeCubeModel___Class ***)(puVar69 + -4) =
             &TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>;
        puVar70 = puVar69 + -8;
        *(undefined **)(puVar69 + -8) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MV_WorldObject_Link___Class ***)(puVar70 + -4) =
             &TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>;
        puVar71 = puVar70 + -8;
        *(undefined **)(puVar70 + -8) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MV_WorldObject_ObjectLink___Class ***)(puVar71 + -4) =
             &TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>;
        puVar72 = puVar71 + -8;
        *(undefined **)(puVar71 + -8) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MVWorldObjectClient___Class ***)(puVar72 + -4) =
             &TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>;
        puVar73 = puVar72 + -8;
        *(undefined **)(puVar72 + -8) = &UNK_?;
        func_?();
        *(KoGaMaDataHandler__Class ***)(puVar73 + -4) = &TypeInfo__KoGaMaDataHandler;
        puVar74 = puVar73 + -8;
        *(undefined **)(puVar73 + -8) = &UNK_?;
        func_?();
        *(MethodInfo ***)(puVar74 + -4) =
             &
             MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
        ;
        puVar75 = puVar74 + -8;
        *(undefined **)(puVar74 + -8) = &UNK_?;
        func_?();
        *(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType___Class
          ***)(puVar75 + -4) =
             &
             TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
        ;
        puVar76 = puVar75 + -8;
        *(undefined **)(puVar75 + -8) = &UNK_?;
        func_?();
        puVar65 = puVar76 + 0x2c;
        uRam_? = 1;
code_?:
        *(int32_t *)(puVar65 + -4) = unaff_ESI.m_Index;
        *(Dictionary_2_System_Object_System_Object_ **)(puVar65 + -8) = this_84;
        *(Dictionary_2_System_Int32_RuntimePrototypeCubeModel___Class **)(puVar65 + -0xc) =
             TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>;
        puVar77 = puVar65 + -0x10;
        *(undefined **)(puVar65 + -0x10) = &UNK_?;
        uVar60 = func_?();
        *(MethodInfo **)(puVar77 + -4) =
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
        ;
        *(undefined4 *)(puVar77 + -8) = uVar60;
        *(undefined **)(puVar77 + -0xc) = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore
        ::Text::TextResourceManager+FontAssetRef]::
        Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                  (*(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     **)(puVar77 + -8),*(MethodInfo **)(puVar77 + -4));
        iVar13 = *(int *)(uVar26 + 8);
        *(undefined4 *)(puVar77 + -4) = uVar60;
        *(undefined4 *)(iVar13 + 8) = uVar60;
        *(int *)(puVar77 + -8) = iVar13 + 8;
        puVar78 = puVar77 + -0xc;
        *(undefined **)(puVar77 + -0xc) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MVWorldObjectClient___Class **)(puVar78 + -4) =
             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>;
        puVar79 = puVar78 + -8;
        *(undefined **)(puVar78 + -8) = &UNK_?;
        uVar60 = func_?();
        *(MethodInfo **)(puVar79 + -4) =
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
        ;
        *(undefined4 *)(puVar79 + -8) = uVar60;
        *(undefined **)(puVar79 + -0xc) = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore
        ::Text::TextResourceManager+FontAssetRef]::
        Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                  (*(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     **)(puVar79 + -8),*(MethodInfo **)(puVar79 + -4));
        *(undefined4 *)(iVar13 + 0xc) = uVar60;
        *(undefined4 *)(puVar79 + -4) = uVar60;
        *(int *)(puVar79 + -8) = iVar13 + 0xc;
        puVar80 = puVar79 + -0xc;
        *(undefined **)(puVar79 + -0xc) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MV_WorldObject_Link___Class **)(puVar80 + -4) =
             TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>;
        puVar81 = puVar80 + -8;
        *(undefined **)(puVar80 + -8) = &UNK_?;
        uVar60 = func_?();
        *(MethodInfo **)(puVar81 + -4) =
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
        ;
        *(undefined4 *)(puVar81 + -8) = uVar60;
        *(undefined **)(puVar81 + -0xc) = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore
        ::Text::TextResourceManager+FontAssetRef]::
        Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                  (*(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     **)(puVar81 + -8),*(MethodInfo **)(puVar81 + -4));
        *(undefined4 *)(iVar13 + 0x10) = uVar60;
        *(undefined4 *)(puVar81 + -4) = uVar60;
        *(int *)(puVar81 + -8) = iVar13 + 0x10;
        puVar82 = puVar81 + -0xc;
        *(undefined **)(puVar81 + -0xc) = &UNK_?;
        func_?();
        *(Dictionary_2_System_Int32_MV_WorldObject_ObjectLink___Class **)(puVar82 + -4) =
             TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>;
        puVar83 = puVar82 + -8;
        *(undefined **)(puVar82 + -8) = &UNK_?;
        uVar60 = func_?();
        *(MethodInfo **)(puVar83 + 0x3c) =
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
        ;
        *(undefined4 *)(puVar83 + 0x38) = uVar60;
        *(undefined **)(puVar83 + 0x34) = &UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore
        ::Text::TextResourceManager+FontAssetRef]::
        Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
                  (*(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                     **)(puVar83 + 0x38),*(MethodInfo **)(puVar83 + 0x3c));
        *(undefined4 *)(iVar13 + 0x14) = uVar60;
        *(undefined4 *)(puVar83 + 0x3c) = uVar60;
        *(int *)(puVar83 + 0x38) = iVar13 + 0x14;
        puVar84 = (undefined4 *)(puVar83 + 0x34);
        *(undefined **)(puVar83 + 0x34) = &UNK_?;
        func_?();
        puVar84[-1] = 0;
        puVar84[-2] = iVar13;
        puVar84[-3] = &UNK_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)puVar84[-2],puVar84[-1],(MethodInfo *)*puVar84);
        puVar84[-1] = 
        TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
        ;
        puVar85 = puVar84 + -2;
        puVar84[-2] = &UNK_?;
        uVar60 = func_?();
        *(undefined4 *)((int)puVar85 + -4) = 0;
        *(MethodInfo **)((int)puVar85 + -8) =
             MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
        ;
        *(int *)((int)puVar85 + -0xc) = iVar13;
        *(undefined4 *)((int)puVar85 + -0x10) = uVar60;
        *(undefined **)((int)puVar85 + -0x14) = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (*(UnityAction_2_System_Object_System_Object_ **)((int)puVar85 + -0x10),
                   *(Object **)((int)puVar85 + -0xc),*(void **)((int)puVar85 + -8),
                   *(MethodInfo **)((int)puVar85 + -4));
        puVar86 = (undefined1 *)((int)puVar85 + 0x2c);
        if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
          *(KoGaMaDataHandler__Class **)((int)puVar85 + 0x28) = TypeInfo__KoGaMaDataHandler;
          puVar87 = (undefined1 *)((int)puVar85 + 0x24);
          *(undefined **)((int)puVar85 + 0x24) = &UNK_?;
          func_?();
          puVar86 = puVar87 + 4;
        }
        *(undefined4 *)(puVar86 + -4) = 0;
        *(undefined4 *)(puVar86 + -8) = *(undefined4 *)(uVar26 + 0x10);
        *(undefined4 *)(puVar86 + -0xc) = uVar60;
        *(undefined4 *)(puVar86 + -0x10) = *(undefined4 *)(uVar26 + 0xc);
        *(undefined **)(puVar86 + -0x14) = &UNK_?;
        pMVar23 = (MVWorldObjectClient *)
                  KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                            (*(BytePacker **)(puVar86 + -0x10),
                             *(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                               **)(puVar86 + -0xc),puVar86[-8],*(MethodInfo **)(puVar86 + -4));
        *(MVWorldObjectClient **)(iVar13 + 0x18) = pMVar23;
        return pMVar23;
      }
      goto code_?;
    }
  }
  uVar26 = CONCAT31((int3)((uint)pcVar48 >> 8),(char)pcVar48 + *pcVar48);
  pcVar48 = (char *)(uVar26 | *(uint *)(&UNK_? + uVar26));
  bVar34 = CARRY1(bVar1 + *pbVar56,*(byte *)&((String *)unaff_ESI.m_Index)->klass);
code_?:
  *pcVar48 = (*pcVar48 - (char)pbVar56) - bVar34;
  pcVar64 = (code *)swi(3);
  pMVar23 = (MVWorldObjectClient *)(*pcVar64)();
  return pMVar23;
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
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  (this->fields).prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
  func_?(&(this->fields).worldObjects,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  (this->fields).links = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar1;
  func_?(&(this->fields).links,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  (this->fields).objectLinks = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar1;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)&(this->fields).objectLinks);
  this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar2 = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                    ((BytePacker *)pDVar1,
                     (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                      *)this_00,readRuntimeValues,(MethodInfo *)0x0);
  (this->fields).worldObjectRoot = iVar2;
  return;
}

