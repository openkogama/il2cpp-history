
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
  cVar1 = '\0';
  func_?();
  *(char *)(extraout_ECX + -0x2a) = *(char *)(extraout_ECX + -0x2a) + unaff_BH + cVar1;
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
  pMVar3 = (MVWorldObjectClient *)&stack0xfffffffc;
  pMVar4 = (MVWorldObjectClient *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__CollectTheItemCollectableInstance);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
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
    func_?(&TypeInfo__MVCameraSettings);
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
    func_?(&TypeInfo__MVGameCoin);
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
    func_?(&TypeInfo__MVMovable);
    func_?(&TypeInfo__MVMovingPlatformGroup);
    func_?(&TypeInfo__MVMovingPlatformNode);
    func_?(&TypeInfo__MVMovingPlatform);
    func_?(&TypeInfo__MVNegate);
    func_?(&TypeInfo__MVObjectEnabler);
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    func_?(&TypeInfo__MVOculusKillLimit);
    func_?(&TypeInfo__MVPickupItemBase);
    func_?(&TypeInfo__MVPointLightPreset);
    func_?(&TypeInfo__MVPointLight);
    func_?();
    func_?();
    func_?(&TypeInfo__MVPulseBox);
    func_?(&TypeInfo__MVRandomBox);
    func_?(&TypeInfo__MVRotator);
    func_?(&TypeInfo__MVRoundCube);
    func_?(&TypeInfo__MVSentryGunBlueprint);
    func_?(&TypeInfo__MVSentryGun);
    func_?(&TypeInfo__MVSkybox);
    func_?(&TypeInfo__MVSmoke);
    func_?(&TypeInfo__MVSoundEmitter);
    func_?(&TypeInfo__MVSpawnPointBlue);
    func_?(&TypeInfo__MVSpawnPointGreen);
    func_?(&TypeInfo__MVSpawnPointRed);
    func_?(&TypeInfo__MVSpawnPointYellow);
    func_?(&TypeInfo__MVTeleportGroup);
    func_?();
    func_?();
    func_?(&TypeInfo__MVTimeTrigger);
    func_?(&TypeInfo__MVToggleBox);
    func_?(&TypeInfo__MVTriggerBox);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    func_?(&TypeInfo__MVWaterPlanePreset);
    func_?(&TypeInfo__MVWaterPlane);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__ShootableButton);
    func_?(&TypeInfo__TeamEditor);
    func_?(&TypeInfo__ThemeWorldObject);
    func_?(&TypeInfo__TimeAttackFlag);
    func_?(&TypeInfo__TriggerCube);
    func_?(&TypeInfo__UseLever);
    func_?();
    func_?();
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_ty);
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_bl);
    func_?(&StringLiteral_Attempt_to_create_abstract_Spawn);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pOVar5 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  this_84 = (MVWorldObjectClient *)worldObjectData;
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar6.m_Index == 0)) {
code_?:
    func_?();
  }
  else {
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?();
      goto code_?;
    }
    piVar7 = (int *)func_?();
    iVar8 = *piVar7;
    if (0xab < iVar8) {
      if (iVar8 == 0xb4) {
        this = (TimeAttackFlag *)func_?();
        TimeAttackFlag::TimeAttackFlag__ctor
                  (this,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
      if (iVar8 == 0xb5) {
        this_00 = (MVGamePointChest *)func_?();
        MVGamePointChest::MVGamePointChest__ctor
                  (this_00,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
code_?:
      pSVar9 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar9,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar9,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    switch(iVar8) {
    case 0:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar5 = (Object *)func_?();
      bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                         pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar10 == 0) {
        unaff_ESI.m_Index =
             (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString
                                ((Dictionary_2_System_Object_System_Object_ *)this_84,
                                 (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
        worldObjectData =
             (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
        pOVar5 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  );
        pOVar5 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar5,(MethodInfo *)0x0);
      }
      bVar1 = (byte)((uint)((int)&worldObjectData + 3) >> 8);
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar5 = (Object *)func_?();
      TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                         pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar6.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar7 = (int *)func_?();
        unaff_ESI.m_Index = *piVar7;
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
           pMVar12 != (MVLocalPlayer *)0x0)) {
          if ((String *)unaff_ESI.m_Index == (String *)(pMVar12->fields)._._ActorNr_k__BackingField)
          {
            this_03 = (MVAvatarLocal *)func_?();
            MVAvatarLocal::MVAvatarLocal__ctor
                      (this_03,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                       (MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_03;
          }
          if ((String *)unaff_ESI.m_Index != (String *)0xffffffff) {
            this_01 = (MVAvatarRemote *)func_?();
            MVAvatarRemote::MVAvatarRemote__ctor
                      (this_01,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                       (MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_01;
          }
          this_02 = (MVPreviewAvatar *)func_?();
          MVPreviewAvatar::MVPreviewAvatar__ctor
                    (this_02,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                     (MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_02;
        }
      }
      goto code_?;
    case 1:
      this_04 = (MVCubeModelInstance *)func_?();
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    case 2:
      this_05 = (MVPointLight *)func_?();
      MVPointLight::MVPointLight__ctor
                (this_05,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    case 3:
      this_06 = (MVTriggerBox *)func_?();
      MVTriggerBox::MVTriggerBox__ctor
                (this_06,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
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
      pMVar13 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar13,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar13;
    case 8:
      this_07 = (MVCubeModelPrototypeTerrain *)func_?();
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    case 9:
      this_08 = (MVGroup *)func_?();
      MVGroup::MVGroup__ctor_2
                (this_08,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    case 0xd:
      this_09 = (MVSoundEmitter *)func_?();
      MVSoundEmitter::MVSoundEmitter__ctor
                (this_09,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    case 0x11:
      this_10 = (MVFlag *)func_?();
      MVFlag::MVFlag__ctor
                (this_10,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    case 0x13:
      this_11 = (MVBattery *)func_?();
      MVBattery::MVBattery__ctor
                (this_11,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    case 0x14:
      this_12 = (MVToggleBox *)func_?();
      MVToggleBox::MVToggleBox__ctor
                (this_12,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    case 0x15:
      this_13 = (MVNegate *)func_?();
      MVNegate::MVNegate__ctor
                (this_13,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    case 0x16:
      this_14 = (MVAnd *)func_?();
      MVAnd::MVAnd__ctor(this_14,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                         (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    case 0x17:
      this_15 = (MVExplosives *)func_?();
      MVExplosives::MVExplosives__ctor
                (this_15,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    case 0x18:
      this_16 = (MVTextMsg *)func_?();
      MVTextMsg::MVTextMsg__ctor
                (this_16,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    case 0x19:
      this_17 = (MVFire *)func_?();
      MVFire::MVFire__ctor
                (this_17,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    case 0x1a:
      this_18 = (MVSmoke *)func_?();
      MVSmoke::MVSmoke__ctor
                (this_18,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    case 0x1b:
      this_19 = (MVTimeTrigger *)func_?();
      MVTimeTrigger::MVTimeTrigger__ctor
                (this_19,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    case 0x1c:
      this_20 = (MVTeleporter *)func_?();
      MVTeleporter::MVTeleporter__ctor
                (this_20,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    case 0x1d:
      this_21 = (MVGoal *)func_?();
      MVGoal::MVGoal__ctor
                (this_21,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    case 0x20:
      this_22 = (MVCubeModelFineGrainedTerrain *)func_?();
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    case 0x21:
      this_23 = (MVPressurePlate *)func_?();
      MVPressurePlate::MVPressurePlate__ctor
                (this_23,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_23;
    case 0x25:
      this_24 = (MVPickupItemBase *)func_?();
      MVPickupItemBase::MVPickupItemBase__ctor
                (this_24,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    case 0x26:
      this_25 = (MVSkybox *)func_?();
      MVSkybox::MVSkybox__ctor
                (this_25,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    case 0x27:
      this_26 = (MVSpawnPointRed *)func_?();
      MVSpawnPointRed::MVSpawnPointRed__ctor
                (this_26,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_26;
    case 0x28:
      this_27 = (MVSpawnPointGreen *)func_?();
      MVSpawnPointGreen::MVSpawnPointGreen__ctor
                (this_27,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    case 0x29:
      this_28 = (MVSpawnPointYellow *)func_?();
      MVSpawnPointYellow::MVSpawnPointYellow__ctor
                (this_28,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    case 0x2a:
      pMVar13 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar13,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar13;
    case 0x2b:
      this_29 = (MVObjectEnabler *)func_?();
      MVObjectEnabler::MVObjectEnabler__ctor
                (this_29,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_29;
    case 0x2c:
      this_30 = (MVWaterPlane *)func_?();
      MVWaterPlane::MVWaterPlane__ctor
                (this_30,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_30;
    case 0x2d:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_);
      pOVar5 = (Object *)func_?();
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84
                             ,pOVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      if (unaff_ESI.m_Index == 0) goto code_?;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        bVar1 = 0;
        unaff_EBX = (MVWorldObjectClient *)
                    mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
        if (unaff_ESI.m_Index != 0) {
          if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          break;
          TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar6.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) ==
                (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
              puVar14 = (undefined1 *)func_?();
              switch(*puVar14) {
              case 7:
                this_31 = (MVMovable *)func_?();
                MVMovable::MVMovable__ctor
                          (this_31,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_31;
              case 8:
                this_32 = (MVBody *)func_?();
                MVBody::MVBody__ctor
                          (this_32,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_32;
              case 9:
                this_33 = (MVTeleportGroup *)func_?();
                MVTeleportGroup::MVTeleportGroup__ctor
                          (this_33,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_33;
              case 10:
                this_34 = (MVSentryGunBlueprint *)func_?();
                MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                          (this_34,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_34;
              case 0xb:
                this_35 = (MVMovingPlatform *)func_?();
                MVMovingPlatform::MVMovingPlatform__ctor
                          (this_35,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_35;
              case 0xc:
                this_36 = (MVMovingPlatformGroup *)func_?();
                MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                          (this_36,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_36;
              case 0xd:
                this_37 = (MVRotator *)func_?();
                MVRotator::MVRotator__ctor
                          (this_37,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects
                           ,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_37;
              case 0xe:
                goto code_?;
              default:
                pSVar9 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                pSVar9 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar9,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar9,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)0x0;
              }
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      break;
    case 0x2e:
      this_38 = (MVPulseBox *)func_?();
      MVPulseBox::MVPulseBox__ctor
                (this_38,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_38;
    case 0x2f:
      this_39 = (MVRandomBox *)func_?();
      MVRandomBox::MVRandomBox__ctor
                (this_39,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    case 0x30:
      this_40 = (MVSentryGun *)func_?();
      MVSentryGun::MVSentryGun__ctor
                (this_40,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    case 0x31:
      this_41 = (MVCollectible *)func_?();
      MVCollectible::MVCollectible__ctor
                (this_41,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    case 0x32:
      this_42 = (MVMovingPlatformNode *)func_?();
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_42,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    case 0x33:
      this_43 = (MVWaterPlanePreset *)func_?();
      MVWaterPlanePreset::MVWaterPlanePreset__ctor
                (this_43,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    case 0x34:
      this_44 = (MVPointLightPreset *)func_?();
      MVPointLightPreset::MVPointLightPreset__ctor
                (this_44,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    case 0x35:
code_?:
      this_45 = (MVGhostInstance *)func_?();
      MVGhostInstance::MVGhostInstance__ctor
                (this_45,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_45;
    case 0x36:
      this_46 = (MVCubeGun *)func_?();
      MVCubeGun::MVCubeGun__ctor
                (this_46,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_46;
    case 0x37:
      this_47 = (MVCheckpoint *)func_?();
      MVCheckpoint::MVCheckpoint__ctor
                (this_47,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    case 0x38:
      this_48 = (MVHoverCraft *)func_?();
      MVHoverCraft::MVHoverCraft__ctor
                (this_48,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    case 0x39:
      this_49 = (MVWorldObjectSpawnerVehicle *)func_?();
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_49,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    case 0x3b:
      this_50 = (MVJetPack *)func_?();
      MVJetPack::MVJetPack__ctor
                (this_50,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    case 0x3c:
      this_51 = (MVRoundCube *)func_?();
      MVRoundCube::MVRoundCube__ctor
                (this_51,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    case 0x3d:
      this_52 = (MVAdvancedGhost *)func_?();
      MVAdvancedGhost::MVAdvancedGhost__ctor
                (this_52,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_52;
    case 0x3e:
      this_53 = (MVHamsterWheel *)func_?();
      MVHamsterWheel::MVHamsterWheel__ctor
                (this_53,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_53;
    case 0x3f:
      this_54 = (MVKillLimit *)func_?();
      MVKillLimit::MVKillLimit__ctor
                (this_54,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    case 0x40:
      this_55 = (MVOculusKillLimit *)func_?();
      MVOculusKillLimit::MVOculusKillLimit__ctor
                (this_55,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    case 0x41:
      this_56 = (MVCountingCube *)func_?();
      MVCountingCube::MVCountingCube__ctor
                (this_56,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    default:
      switch(iVar8) {
      case 0x76:
        this_57 = (MVVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_57,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_57;
      case 0x77:
        this_58 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor
                  (this_58,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      default:
        goto code_?;
      case 0x82:
        this_59 = (MVGamePoint *)func_?();
        MVGamePoint::MVGamePoint__ctor
                  (this_59,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      case 0x83:
        pMVar3 = (MVWorldObjectClient *)func_?();
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar3,
                   (Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return pMVar3;
      case 0x85:
        goto code_?;
      case 0x86:
        this_62 = (MVAvatarSpawnRoleCreator *)func_?();
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_62,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_62;
      case 0x87:
        this_63 = (MVGameOptionDataObject *)func_?();
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_63,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      case 0x88:
        this_64 = (MVObjectTransparency *)func_?();
        WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                  (this_64,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      case 0x91:
        this_65 = (MVCameraSettings *)func_?();
        MVCameraSettings::MVCameraSettings__ctor
                  (this_65,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      case 0x92:
        this_66 = (MVGravityCube *)func_?();
        MVGravityCube::MVGravityCube__ctor
                  (this_66,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      case 0x94:
        this_67 = (MVGameCoin *)func_?();
        MVGameCoin::MVGameCoin__ctor
                  (this_67,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      case 0x95:
        this_68 = (MVGameCoinChest *)func_?();
        MVGameCoinChest::MVGameCoinChest__ctor
                  (this_68,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      case 0x96:
        this_69 = (ThemeWorldObject *)func_?();
        ThemeWorldObject::ThemeWorldObject__ctor
                  (this_69,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      case 0x97:
        this_70 = (MVDoor *)func_?();
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      case 0x98:
        this_71 = (MVDoorBlueprint *)func_?();
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      case 0x99:
        this_72 = (MVMeleeWeaponBase *)func_?();
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      case 0x9a:
        pMVar15 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor
                  (pMVar15,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar15;
      case 0x9b:
        this_73 = (MVCostumeBase *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      case 0x9c:
        pMVar15 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor
                  (pMVar15,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar15;
      case 0xa1:
        this_74 = (TeamEditor *)func_?();
        TeamEditor::TeamEditor__ctor
                  (this_74,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      case 0xa2:
        this_75 = (TriggerCube *)func_?();
        TriggerCube::TriggerCube__ctor
                  (this_75,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      case 0xa4:
        this_76 = (CollectTheItemCollectableInstance *)func_?();
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      case 0xa5:
        this_77 = (ShootableButton *)func_?();
        ShootableButton::ShootableButton__ctor
                  (this_77,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      case 0xa6:
        this_78 = (UseLever *)func_?();
        UseLever::UseLever__ctor
                  (this_78,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      case 0xa7:
        this_79 = (CollectTheItemDropOff *)func_?();
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      case 0xa8:
        this_80 = (CollectTheItemCollectable *)func_?();
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      case 0xa9:
        this_81 = (CollectTheItem *)func_?();
        CollectTheItem::CollectTheItem__ctor
                  (this_81,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_81;
      case 0xaa:
        this_82 = (WindTurbine *)func_?();
        WindTurbine::WindTurbine__ctor
                  (this_82,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      case 0xab:
        this_83 = (MVGlobalSoundEmitter *)func_?();
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                   (MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_83;
      }
    }
  }
  func_?();
  pIVar16 = extraout_ECX;
code_?:
  bVar17 = (byte)((uint)pIVar16 >> 0x10);
  uVar18 = func_?();
  iVar8 = (int)((ulonglong)uVar18 >> 0x20);
  pbVar19 = (byte *)uVar18;
  pMVar20 = (MVWorldObjectClient *)(unaff_ESI.m_Index | (uint)&stack0xffffffe4);
  bVar21 = (byte)((ulonglong)uVar18 >> 0x28);
  bVar22 = CARRY1(*extraout_ECX_00,bVar21);
  *extraout_ECX_00 = *extraout_ECX_00 + bVar21;
  pMVar23 = (MVWorldObjectClient *)(extraout_ECX_00 + -1);
  bVar24 = (byte)((ulonglong)uVar18 >> 0x20);
  bVar25 = (byte)unaff_EBX;
  if (pMVar23 == (MVWorldObjectClient *)0x0 || *extraout_ECX_00 == 0) {
    pbVar26 = pbVar19 + -0x20;
    bVar27 = CARRY1(*pbVar26,bVar24) || CARRY1(*pbVar26 + bVar24,bVar22);
    *pbVar26 = *pbVar26 + bVar24 + bVar22;
    bVar28 = (byte)((uint)unaff_EBX >> 8);
    bVar29 = CARRY1(bVar17,bVar28) || CARRY1(bVar17 + bVar28,bVar27);
    bVar22 = bVar17 + bVar28 + bVar27;
    bVar17 = bVar22 + bVar28;
    bVar27 = CARRY1(bVar22,bVar28) || CARRY1(bVar17,bVar29);
    bVar17 = bVar17 + bVar29;
    bVar22 = bVar17 + bVar28;
    bVar29 = CARRY1(bVar17,bVar28) || CARRY1(bVar22,bVar27);
    bVar22 = bVar22 + bVar27;
    piVar30 = &unaff_EBX[-1].fields.interactionFlags;
    bVar17 = (char)*piVar30 + bVar28;
    bVar27 = CARRY1((byte)*piVar30,bVar28) || CARRY1(bVar17,bVar29);
    *(byte *)piVar30 = bVar17 + bVar29;
    bVar17 = (byte)pMVar23 + (byte)pMVar20;
    bVar29 = CARRY1((byte)pMVar23,(byte)pMVar20) || CARRY1(bVar17,bVar27);
    cVar31 = bVar17 + bVar27;
    iVar32 = CONCAT31((int3)((uint)pMVar23 >> 8),cVar31) + -1;
    if (iVar32 != 0 && cVar31 != '\0') {
      return pMVar20;
    }
    bVar33 = (byte)iVar32;
    bVar34 = (byte)((uint)iVar32 >> 8);
    bVar17 = bVar33 + bVar34;
    bVar27 = CARRY1(bVar33,bVar34) || CARRY1(bVar17,bVar29);
    bVar35 = SCARRY1(bVar33,bVar34) != SCARRY1(bVar17,bVar29);
    cVar31 = bVar17 + bVar29;
    iVar32 = CONCAT31((int3)((uint)iVar32 >> 8),cVar31);
    bVar29 = cVar31 < '\0';
    pMVar36 = (MVWorldObjectClient *)(iVar32 + -1);
    bVar17 = (byte)((uint)pMVar20 >> 8);
    pMVar37 = pMVar36;
    if (pMVar36 == (MVWorldObjectClient *)0x0 || cVar31 == '\0') {
      bVar29 = CARRY1(bVar22,bVar28) || CARRY1(bVar22 + bVar28,bVar27);
      bVar22 = bVar22 + bVar28 + bVar27;
      bVar33 = bVar22 + bVar28;
      bVar27 = CARRY1(bVar22,bVar28) || CARRY1(bVar33,bVar29);
      bVar33 = bVar33 + bVar29;
      bVar22 = bVar33 + bVar28;
      bVar29 = CARRY1(bVar33,bVar28) || CARRY1(bVar22,bVar27);
      bVar22 = bVar22 + bVar27;
      bVar34 = (byte)pMVar36;
      bVar33 = *pbVar19 + bVar34;
      bVar27 = CARRY1(*pbVar19,bVar34) || CARRY1(bVar33,bVar29);
      bVar35 = SCARRY1(*pbVar19,bVar34) != SCARRY1(bVar33,bVar29);
      *pbVar19 = bVar33 + bVar29;
      bVar29 = (char)*pbVar19 < '\0';
      pMVar37 = (MVWorldObjectClient *)(iVar32 + -2);
      if (pMVar37 == (MVWorldObjectClient *)0x0 || *pbVar19 != 0) {
        bVar29 = CARRY1(bVar22,bVar28) || CARRY1(bVar22 + bVar28,bVar27);
        bVar22 = bVar22 + bVar28 + bVar27;
        bVar33 = bVar22 + bVar28;
        bVar27 = CARRY1(bVar22,bVar28) || CARRY1(bVar33,bVar29);
        bVar33 = bVar33 + bVar29;
        bVar34 = bVar33 + bVar28;
        bVar29 = CARRY1(bVar33,bVar28) || CARRY1(bVar34,bVar27);
        bVar34 = bVar34 + bVar27;
        bVar33 = *(byte *)&unaff_EBX->klass + bVar21;
        bVar22 = CARRY1(*(byte *)&unaff_EBX->klass,bVar21) || CARRY1(bVar33,bVar29);
        *(byte *)&unaff_EBX->klass = bVar33 + bVar29;
        if (iVar32 == 3 || *(byte *)&unaff_EBX->klass != 0) {
          bVar27 = CARRY1(bVar34,bVar28) || CARRY1(bVar34 + bVar28,bVar22);
          pbVar26 = (byte *)((int)&pMVar20[-1].fields.interactionFlags + 1);
          bVar33 = *pbVar26;
          bVar22 = *pbVar26;
          *pbVar26 = bVar22 + bVar25 + bVar27;
          bVar34 = (byte)((uint)pMVar23 >> 8);
          bVar27 = CARRY1(bVar34,bVar28) ||
                   CARRY1(bVar34 + bVar28,CARRY1(bVar33,bVar25) || CARRY1(bVar22 + bVar25,bVar27));
          iVar38 = iVar8 + -0x38efae1f;
          bVar22 = CARRY1(*(byte *)iVar38,bVar17) || CARRY1(*(char *)iVar38 + bVar17,bVar27);
          *(byte *)iVar38 = *(char *)iVar38 + bVar17 + bVar27;
          pMVar23 = (MVWorldObjectClient *)(iVar32 + -4);
          if (pMVar23 == (MVWorldObjectClient *)0x0 || *(char *)iVar38 != '\0')
          goto code_?;
          pMVar20 = (MVWorldObjectClient *)
                    ((uint)CONCAT21((short)((uint)pMVar20 >> 0x10),-bVar22) << 8);
          pMVar36 = pMVar23;
          pMVar4 = (MVWorldObjectClient *)&stack0xfffffffc;
          goto code_?;
        }
        pMVar3 = pMVar23;
        unaff_EBX = pMVar36;
        this_84 = pMVar37;
        uVar18 = CONCAT44(pMVar36,pMVar37);
        if (pMVar23 == (MVWorldObjectClient *)0x0) {
          func_?(0,0,0,extraout_ECX_00);
          cVar31 = CARRY1((byte)extraout_ECX_03,extraout_AH) ||
                   CARRY1((byte)extraout_ECX_03 + extraout_AH,bVar22);
          func_?(extraout_ECX_03);
          *(byte *)&pMVar36->klass = *(byte *)&pMVar36->klass + extraout_CH + cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar35 == bVar29) goto code_?;
        bVar24 = bVar22 + bVar28 + bVar27;
        bVar27 = CARRY1(bVar24,bVar28) ||
                 CARRY1(bVar24 + bVar28,CARRY1(bVar22,bVar28) || CARRY1(bVar22 + bVar28,bVar27));
        bVar22 = *(byte *)&unaff_EBX->klass + bVar28;
        bVar29 = CARRY1(*(byte *)&unaff_EBX->klass,bVar28) || CARRY1(bVar22,bVar27);
        *(byte *)&unaff_EBX->klass = bVar22 + bVar27;
        pbVar19 = (byte *)(iVar32 + -0x1f);
        bVar22 = CARRY1(*pbVar19,bVar17) || CARRY1(*pbVar19 + bVar17,bVar29);
        *pbVar19 = *pbVar19 + bVar17 + bVar29;
        pMVar23 = pMVar20;
        pMVar3 = pMVar37;
        pMVar37 = (MVWorldObjectClient *)&stack0xfffffffc;
      }
      pcVar39 = (char *)uVar18;
      pcVar40 = pcVar39 + -0x54efae1d;
      bVar17 = (byte)pMVar23;
      bVar24 = CARRY1(*pcVar40,bVar17) || CARRY1(*pcVar40 + bVar17,bVar22);
      *pcVar40 = *pcVar40 + bVar17 + bVar22;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        bVar21 = (byte)((ulonglong)uVar18 >> 0x20);
        cVar31 = CARRY1(bVar17,bVar21) || CARRY1(bVar17 + bVar21,bVar24);
        pMVar20 = (MVWorldObjectClient *)
                  CONCAT31((int3)((uint)pMVar23 >> 8),bVar17 + bVar21 + bVar24);
        if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
        bVar22 = (byte)((uint)pMVar3 >> 8);
        bVar24 = (byte)((ulonglong)uVar18 >> 0x28);
        bVar17 = bVar22 + bVar24;
        bVar22 = CARRY1(bVar22,bVar24) || CARRY1(bVar17,cVar31);
        bVar17 = bVar17 + cVar31;
        pMVar36 = (MVWorldObjectClient *)
                  CONCAT22((short)((uint)pMVar3 >> 0x10),CONCAT11(bVar17,(char)pMVar3));
        pMVar4 = pMVar37;
        if (pMVar36 == (MVWorldObjectClient *)0x0) {
          pbVar19 = (byte *)((int)&pMVar20[-1].fields.eliteRequiredFlags + 1);
          bVar1 = *pbVar19;
          *pbVar19 = *pbVar19 + bVar21;
          pbVar19 = (byte *)((int)&pMVar37[-1].fields.eliteRequiredFlags + 1);
          bVar27 = CARRY1(*pbVar19,bVar24) || CARRY1(*pbVar19 + bVar24,CARRY1(bVar1,bVar21));
          *pbVar19 = *pbVar19 + bVar24 + CARRY1(bVar1,bVar21);
          pbVar19 = (byte *)((int)&this_84[-1].fields.interactionFlags + 5);
          bVar25 = (byte)((uint)unaff_EBX >> 8);
          bVar29 = CARRY1(*pbVar19,bVar25) || CARRY1(*pbVar19 + bVar25,bVar27);
          *pbVar19 = *pbVar19 + bVar25 + bVar27;
          pbVar19 = (byte *)((int)&pMVar37[-0x1f11b4].fields._.position.y + 1);
          bVar22 = (byte)((uint)pMVar23 >> 8);
          bVar1 = *pbVar19 + bVar22;
          bVar27 = CARRY1(*pbVar19,bVar22) || CARRY1(bVar1,bVar29);
          *pbVar19 = bVar1 + bVar29;
          bVar29 = CARRY1(bVar24,bVar17) || CARRY1(bVar24 + bVar17,bVar27);
          bVar17 = bVar24 + bVar17 + bVar27;
          pbVar26 = (byte *)in(0x51);
          bVar1 = *(byte *)&unaff_EBX->klass + bVar21;
          bVar27 = CARRY1(*(byte *)&unaff_EBX->klass,bVar21) || CARRY1(bVar1,bVar29);
          *(byte *)&unaff_EBX->klass = bVar1 + bVar29;
          out(0x51,(char)pbVar26);
          bVar29 = CARRY1(*pbVar26,bVar25) || CARRY1(*pbVar26 + bVar25,bVar27);
          *pbVar26 = *pbVar26 + bVar25 + bVar27;
          out(0x51,(char)pbVar26);
          pbVar19 = (byte *)((int)&pMVar37[-1].fields.interactionFlags + 6);
          bVar1 = (byte)unaff_EBX;
          bVar27 = CARRY1(*pbVar19,bVar1) || CARRY1(*pbVar19 + bVar1,bVar29);
          *pbVar19 = *pbVar19 + bVar1 + bVar29;
          bVar22 = bVar17 + bVar1;
          bVar29 = CARRY1(bVar17,bVar1) || CARRY1(bVar22,bVar27);
          bVar22 = bVar22 + bVar27;
          out(0x51,pbVar26);
          pbVar19 = (byte *)((int)pMVar37 * 8 + -0x1626efaf);
          bVar1 = *pbVar19;
          bVar17 = *pbVar19 + bVar22;
          *pbVar19 = bVar17 + bVar29;
          pcVar40 = (char *)((int)&pMVar37[-1].fields.eliteRequiredFlags + 6);
          *pcVar40 = *pcVar40 + bVar25 + (CARRY1(bVar1,bVar22) || CARRY1(bVar17,bVar29));
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_?;
      }
      puVar14 = (undefined1 *)0xffffffff;
      pMVar20 = pMVar23;
      pMVar3 = pMVar37;
      cVar31 = bVar24;
      if (*pcVar40 != '\0') goto code_?;
      goto code_?;
    }
code_?:
    if (bVar35 == bVar29) {
      pMVar36 = (MVWorldObjectClient *)&pMVar37[-1].fields.field_0xcf;
      unaff_EBX = in_stack_41;
      if (pMVar36 == (MVWorldObjectClient *)0x0) goto code_?;
      bVar24 = (byte)((uint)in_stack_41 >> 8);
      bVar22 = CARRY1(bVar24,bVar17);
      unaff_EBX = (MVWorldObjectClient *)
                  CONCAT22((short)((uint)in_stack_41 >> 0x10),
                           CONCAT11(bVar24 + bVar17,(char)in_stack_41));
      goto code_?;
    }
    bVar29 = CARRY1(bVar22,bVar28) || CARRY1(bVar22 + bVar28,bVar27);
    bVar22 = (byte)((uint)pMVar37 >> 8);
    bVar1 = bVar28 + bVar22;
    bVar27 = CARRY1(bVar28,bVar22) || CARRY1(bVar1,bVar29);
    unaff_EBX = (MVWorldObjectClient *)
                CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar1 + bVar29,bVar25));
    pMVar36 = (MVWorldObjectClient *)&pMVar37[-1].fields.field_0xcf;
    if (pMVar36 != (MVWorldObjectClient *)0x0) goto code_?;
    *(byte *)&((Dictionary_2_System_Object_System_Object_ *)this_84)->klass =
         *(char *)&((Dictionary_2_System_Object_System_Object_ *)this_84)->klass + bVar24 + bVar27;
    pMVar3 = (MVWorldObjectClient *)(&stack0xfffffffc + (int)pMVar20);
    bVar22 = CARRY1(*(byte *)&pMVar20->klass,CARRY4((uint)&stack0xfffffffc,(uint)pMVar20));
    *(byte *)&pMVar20->klass =
         *(byte *)&pMVar20->klass + CARRY4((uint)&stack0xfffffffc,(uint)pMVar20);
    func_?(0,pMVar37,pMVar37);
    uVar18 = CONCAT44(extraout_EDX_00,pbVar19);
    puVar14 = extraout_ECX_02;
  }
  else {
    uVar42 = in((short)((ulonglong)uVar18 >> 0x20));
    pMVar20 = (MVWorldObjectClient *)CONCAT31((int3)((uint)pMVar20 >> 8),uVar42);
code_?:
    bVar28 = (byte)((uint)pMVar20 >> 8);
    bVar33 = (byte)((uint)pMVar23 >> 8);
    bVar17 = bVar28 + bVar33;
    bVar27 = CARRY1(bVar28,bVar33) || CARRY1(bVar17,bVar22);
    uVar43 = (undefined2)((uint)pMVar20 >> 0x10);
    bVar28 = (byte)pMVar20;
    cVar31 = bVar17 + bVar22;
    pMVar20 = (MVWorldObjectClient *)CONCAT22(uVar43,CONCAT11(cVar31,bVar28));
    pMVar36 = (MVWorldObjectClient *)&pMVar23[-1].fields.field_0xcf;
    if (pMVar36 == (MVWorldObjectClient *)0x0 || cVar31 != '\0') {
      bVar22 = CARRY1(*(byte *)pMVar36,bVar24) || CARRY1(*(char *)pMVar36 + bVar24,bVar27);
      *(byte *)pMVar36 = *(char *)pMVar36 + bVar24 + bVar27;
      pMVar36 = (MVWorldObjectClient *)&pMVar23[-1].fields.field_0xce;
      if (pMVar36 == (MVWorldObjectClient *)0x0) {
        bVar29 = CARRY1(*pbVar19,bVar21) || CARRY1(*pbVar19 + bVar21,bVar22);
        *pbVar19 = *pbVar19 + bVar21 + bVar22;
        if (pMVar23 != (MVWorldObjectClient *)0x3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar26 = (byte *)((int)&unaff_EBX[-1].fields.interactionFlags + 2);
        bVar27 = CARRY1(*pbVar26,bVar25) || CARRY1(*pbVar26 + bVar25,bVar29);
        *pbVar26 = *pbVar26 + bVar25 + bVar29;
code_?:
        pbVar26 = (byte *)((int)&pMVar20[-0x6bc6bc].fields.goId + 2);
        bVar17 = *pbVar26 + (byte)pMVar20;
        bVar22 = CARRY1(*pbVar26,(byte)pMVar20) || CARRY1(bVar17,bVar27);
        *pbVar26 = bVar17 + bVar27;
        uVar18 = CONCAT44(iVar8 + -1,pbVar19);
        pMVar36 = (MVWorldObjectClient *)0xffffffff;
        pMVar4 = (MVWorldObjectClient *)&stack0xfffffffc;
      }
      else {
        in(0x51);
        pMVar20 = (MVWorldObjectClient *)((uint)pMVar20 & 0xffffff00);
        pMVar4 = (MVWorldObjectClient *)&stack0xfffffffc;
      }
    }
    else {
      bVar22 = 9 < (bVar28 & 0xf) | in_AF;
      pMVar20 = (MVWorldObjectClient *)((uint)CONCAT21(uVar43,cVar31 - bVar22) << 8);
      pMVar4 = (MVWorldObjectClient *)&stack0xfffffffc;
    }
code_?:
    pbVar19 = (byte *)((ulonglong)uVar18 >> 0x20);
    bVar25 = (byte)unaff_EBX;
    bVar27 = CARRY1(*pbVar19,bVar25) || CARRY1(*pbVar19 + bVar25,bVar22);
    *pbVar19 = *pbVar19 + bVar25 + bVar22;
    in(0x51);
    bVar24 = (byte)((uint)pMVar20 >> 8);
    bVar22 = *(byte *)&this_84->klass;
    bVar28 = (byte)((uint)unaff_EBX >> 8);
    bVar17 = *(byte *)&this_84->klass + bVar28;
    *(byte *)&this_84->klass = bVar17 + bVar27;
    bVar21 = in(0x51);
    pMVar20 = (MVWorldObjectClient *)CONCAT31((int3)((uint)pMVar20 >> 8),bVar21);
    bVar27 = CARRY1(bVar1,bVar24) ||
             CARRY1(bVar1 + bVar24,CARRY1(bVar22,bVar28) || CARRY1(bVar17,bVar27));
    bVar29 = CARRY1(bVar25,bVar25) || CARRY1(bVar25 * '\x02',bVar27);
    unaff_EBX = (MVWorldObjectClient *)
                CONCAT31((int3)((uint)unaff_EBX >> 8),bVar25 * '\x02' + bVar27);
    out(0x51,bVar21);
    bVar1 = *(char *)&pMVar20->klass + bVar21;
    bVar27 = CARRY1(*(byte *)&pMVar20->klass,bVar21) || CARRY1(bVar1,bVar29);
    *(byte *)&pMVar20->klass = bVar1 + bVar29;
    out(0x51,pMVar20);
    bVar29 = CARRY1(bRam_?,bVar24) || CARRY1(bRam_? + bVar24,bVar27);
    bRam_? = bRam_? + bVar24 + bVar27;
    out(0x51,pMVar20);
    pbVar19 = (byte *)((int)&this_84[-1].fields.interactionFlags + 7);
    bVar22 = (byte)((uint)pMVar36 >> 8);
    bVar1 = *pbVar19 + bVar22;
    bVar27 = CARRY1(*pbVar19,bVar22) || CARRY1(bVar1,bVar29);
    *pbVar19 = bVar1 + bVar29;
    pMVar3 = pMVar4;
code_?:
    pbVar19 = (byte *)((int)&this_84[-0x1cc5da].fields._.rotation.z + 1);
    bVar1 = *pbVar19;
    bVar17 = (byte)((ulonglong)uVar18 >> 0x20);
    bVar22 = *pbVar19 + bVar17;
    *pbVar19 = bVar22 + bVar27;
    bVar24 = (byte)((ulonglong)uVar18 >> 0x28);
    bVar27 = CARRY1(bVar24,(byte)unaff_EBX) ||
             CARRY1(bVar24 + (byte)unaff_EBX,CARRY1(bVar1,bVar17) || CARRY1(bVar22,bVar27));
    out(0x51,pMVar20);
    bVar1 = *(byte *)&unaff_EBX->klass + (byte)pMVar20;
    bVar24 = CARRY1(*(byte *)&unaff_EBX->klass,(byte)pMVar20) || CARRY1(bVar1,bVar27);
    *(byte *)&unaff_EBX->klass = bVar1 + bVar27;
    func_?(pMVar36);
    uVar18 = CONCAT44(extraout_EDX,(int)uVar18);
    puVar14 = extraout_ECX_01;
code_?:
    piVar30 = &pMVar3[-1].fields.eliteRequiredFlags;
    bVar1 = (char)*piVar30 + (byte)puVar14;
    bVar22 = CARRY1((byte)*piVar30,(byte)puVar14) || CARRY1(bVar1,bVar24);
    *(byte *)piVar30 = bVar1 + bVar24;
    pMVar36 = (MVWorldObjectClient *)puVar14;
  }
  pcVar39 = (char *)uVar18;
  iVar8 = (int)((ulonglong)uVar18 >> 0x20) + -0x18;
  bVar17 = (byte)((ulonglong)uVar18 >> 0x28);
  bVar1 = *(char *)iVar8 + bVar17;
  bVar27 = CARRY1(*(byte *)iVar8,bVar17) || CARRY1(bVar1,bVar22);
  *(byte *)iVar8 = bVar1 + bVar22;
  pbVar19 = (byte *)((int)&pMVar3[-1].fields.eliteRequiredFlags + 6);
  bVar22 = (byte)((uint)unaff_EBX >> 8);
  bVar1 = *pbVar19 + bVar22;
  bVar29 = CARRY1(*pbVar19,bVar22) || CARRY1(bVar1,bVar27);
  *pbVar19 = bVar1 + bVar27;
  piVar44 = &this_84[-0x50845d].fields._.timestamp;
  bVar22 = (byte)((ulonglong)uVar18 >> 0x20);
  bVar1 = (char)*piVar44 + bVar22;
  cVar31 = CARRY1((byte)*piVar44,bVar22) || CARRY1(bVar1,bVar29);
  *(byte *)piVar44 = bVar1 + bVar29;
  pMVar20 = (MVWorldObjectClient *)func_?(puVar14,puVar14,puVar14,pMVar36);
code_?:
  *pcVar39 = *pcVar39 + (char)pMVar20 + cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_?:
  worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
  pOVar5 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                         pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar11 == (MVNetworkGame *)0x0) ||
      (pMVar12 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0),
      pMVar12 == (MVLocalPlayer *)0x0)) ||
     (unaff_EBX = (MVWorldObjectClient *)(pMVar12->fields)._._ActorNr_k__BackingField,
     unaff_ESI.m_Index == 0)) goto code_?;
  pIVar16 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
      (TypeInfo__System__Int32->_0).element_class) {
    puVar45 = (undefined4 *)func_?();
    if ((MVWorldObjectClient *)*puVar45 != unaff_EBX) {
      this_60 = (MVBuildModeAvatarRemote *)func_?();
      MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                (this_60,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_60;
    }
    this_61 = (MVBuildModeAvatarLocal *)func_?();
    MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
              (this_61,(Dictionary_2_System_Object_System_Object_ *)this_84,worldObjects,
               (MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_61;
  }
  goto code_?;
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

