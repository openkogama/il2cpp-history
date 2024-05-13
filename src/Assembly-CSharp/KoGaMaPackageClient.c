
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
  *(int *)(extraout_EDX + 0x10) = *(int *)(extraout_EDX + 0x10) + extraout_EDX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  MonitorData **ppMVar1;
  uint *puVar2;
  uint16_t *puVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  char extraout_AH;
  Object *pOVar9;
  TextureId TVar10;
  int *piVar11;
  TimeAttackFlag *this;
  MVGamePointChest *this_00;
  MVNetworkGame *pMVar12;
  MVLocalPlayer *pMVar13;
  MVAvatarRemote *this_01;
  MVPreviewAvatar *this_02;
  MVAvatarLocal *this_03;
  MVCubeModelInstance *this_04;
  MVPointLight *this_05;
  MVTriggerBox *this_06;
  MVCubeModelPrototypeTerrain *this_07;
  MVGroup *this_08;
  MVSoundEmitter *this_09;
  MVFlag *this_10;
  MVBattery *this_11;
  MVToggleBox *this_12;
  MVNegate *this_13;
  MVAnd *this_14;
  MVExplosives *this_15;
  MVTextMsg *this_16;
  MVFire *this_17;
  MVSmoke *this_18;
  MVTimeTrigger *this_19;
  MVTeleporter *this_20;
  MVGoal *this_21;
  MVCubeModelFineGrainedTerrain *this_22;
  MVPressurePlate *this_23;
  MVPickupItemBase *this_24;
  MVSkybox *this_25;
  MVSpawnPointRed *this_26;
  MVSpawnPointGreen *this_27;
  MVSpawnPointYellow *this_28;
  MVSpawnPointBlue *pMVar14;
  MVObjectEnabler *this_29;
  MVWaterPlane *this_30;
  undefined1 *puVar15;
  MVMovable *this_31;
  MVBody *this_32;
  MVTeleportGroup *this_33;
  MVSentryGunBlueprint *this_34;
  MVMovingPlatform *this_35;
  MVMovingPlatformGroup *this_36;
  MVRotator *this_37;
  MVPulseBox *this_38;
  MVRandomBox *this_39;
  MVSentryGun *this_40;
  MVCollectible *this_41;
  MVMovingPlatformNode *this_42;
  MVWaterPlanePreset *this_43;
  MVPointLightPreset *this_44;
  MVGhostInstance *this_45;
  MVCubeGun *this_46;
  MVCheckpoint *this_47;
  MVHoverCraft *this_48;
  MVWorldObjectSpawnerVehicle *this_49;
  MVJetPack *this_50;
  MVRoundCube *this_51;
  MVAdvancedGhost *this_52;
  MVHamsterWheel *this_53;
  MVKillLimit *this_54;
  MVOculusKillLimit *this_55;
  MVCountingCube *this_56;
  MVVehicleEnergy *this_57;
  MVWorldObjectSpawnerVehicleEnergy *this_58;
  MVGamePoint *this_59;
  MVBuildModeAvatarRemote *this_60;
  MVBuildModeAvatarLocal *this_61;
  MVAvatarSpawnRoleCreator *this_62;
  MVGameOptionDataObject *this_63;
  MVObjectTransparency *this_64;
  MVCameraSettings *this_65;
  MVGravityCube *this_66;
  MVGameCoin *this_67;
  MVGameCoinChest *this_68;
  ThemeWorldObject *this_69;
  MVDoor *this_70;
  MVDoorBlueprint *this_71;
  MVMeleeWeaponBase *this_72;
  MVCostumeBase *this_73;
  MVCostumeBaseBlueprint *pMVar16;
  TeamEditor *this_74;
  TriggerCube *this_75;
  CollectTheItemCollectableInstance *this_76;
  ShootableButton *this_77;
  UseLever *this_78;
  CollectTheItemDropOff *this_79;
  CollectTheItemCollectable *this_80;
  CollectTheItem *this_81;
  WindTurbine *this_82;
  MVGlobalSoundEmitter *this_83;
  String *pSVar17;
  undefined4 uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined3 uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  MVWorldObjectClient *pMVar25;
  byte bVar26;
  byte bVar27;
  int extraout_ECX;
  byte *pbVar28;
  byte bVar29;
  undefined2 uVar30;
  byte *pbVar31;
  uint uVar32;
  char *pcVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  int extraout_EDX;
  undefined3 uVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte bVar41;
  String *unaff_EBX;
  undefined2 uVar42;
  char *pcVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  TextureId unaff_ESI;
  undefined2 in_CS;
  undefined2 in_SS;
  int in_GS_OFFSET;
  bool bVar46;
  bool bVar47;
  float10 fVar48;
  undefined1 in_XMM2 [16];
  undefined1 auVar49 [16];
  byte in_stack_50;
  byte in_stack_51;
  byte *pbStack_52;
  byte *pbStack_53;
  byte *pbStack_54;
  int iStack_55;
  int iStack_56;
  undefined2 uStack_57;
  byte *pbStack_58;
  undefined2 uStack_59;
  byte *pbStack_60;
  undefined2 uStack_61;
  byte *pbStack_62;
  undefined2 uStack_63;
  undefined2 uStack_64;
  undefined2 uStack_65;
  byte *pbStack_66;
  byte *pbStack_67;
  byte *pbStack_68;
  undefined1 *puStack_69;
  undefined *puStack_70;
  uint *puVar71;
  
  puVar44 = (undefined4 *)&stack0xfffffffc;
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
    func_?();
    cRam_? = '\x01';
  }
  pOVar9 = (Object *)func_?();
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          worldObjectData,pOVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), TVar10.m_Index == 0)) {
code_?:
    func_?();
  }
  else {
    if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?();
      goto code_?;
    }
    piVar11 = (int *)func_?();
    iVar23 = *piVar11;
    if (0xab < iVar23) {
      if (iVar23 == 0xb4) {
        this = (TimeAttackFlag *)func_?();
        TimeAttackFlag::TimeAttackFlag__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
      if (iVar23 == 0xb5) {
        this_00 = (MVGamePointChest *)func_?();
        MVGamePointChest::MVGamePointChest__ctor
                  (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
code_?:
      pSVar17 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar17 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar17,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar17,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    switch(iVar23) {
    case 0:
      pOVar9 = (Object *)func_?();
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar6 == 0) {
        unaff_ESI.m_Index =
             (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
        pOVar9 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)worldObjectData,
                   pOVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  );
        pOVar9 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar9,(MethodInfo *)0x0);
      }
      pOVar9 = (Object *)func_?();
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          worldObjectData,pOVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar10.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar11 = (int *)func_?();
        unaff_ESI.m_Index = *piVar11;
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar12 != (MVNetworkGame *)0x0) &&
           (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
           pMVar13 != (MVLocalPlayer *)0x0)) {
          if ((String *)unaff_ESI.m_Index == (String *)(pMVar13->fields)._._ActorNr_k__BackingField)
          {
            this_03 = (MVAvatarLocal *)func_?();
            MVAvatarLocal::MVAvatarLocal__ctor
                      (this_03,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_03;
          }
          if ((String *)unaff_ESI.m_Index != (String *)0xffffffff) {
            this_01 = (MVAvatarRemote *)func_?();
            MVAvatarRemote::MVAvatarRemote__ctor
                      (this_01,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_01;
          }
          this_02 = (MVPreviewAvatar *)func_?();
          MVPreviewAvatar::MVPreviewAvatar__ctor
                    (this_02,worldObjectData,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_02;
        }
      }
      goto code_?;
    case 1:
      this_04 = (MVCubeModelInstance *)func_?();
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    case 2:
      this_05 = (MVPointLight *)func_?();
      MVPointLight::MVPointLight__ctor(this_05,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    case 3:
      this_06 = (MVTriggerBox *)func_?();
      MVTriggerBox::MVTriggerBox__ctor(this_06,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
      pMVar14 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar14,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar14;
    case 8:
      this_07 = (MVCubeModelPrototypeTerrain *)func_?();
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    case 9:
      this_08 = (MVGroup *)func_?();
      MVGroup::MVGroup__ctor_2(this_08,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    case 0xd:
      this_09 = (MVSoundEmitter *)func_?();
      MVSoundEmitter::MVSoundEmitter__ctor(this_09,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    case 0x11:
      this_10 = (MVFlag *)func_?();
      MVFlag::MVFlag__ctor(this_10,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    case 0x13:
      this_11 = (MVBattery *)func_?();
      MVBattery::MVBattery__ctor(this_11,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    case 0x14:
      this_12 = (MVToggleBox *)func_?();
      MVToggleBox::MVToggleBox__ctor(this_12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    case 0x15:
      this_13 = (MVNegate *)func_?();
      MVNegate::MVNegate__ctor(this_13,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    case 0x16:
      this_14 = (MVAnd *)func_?();
      MVAnd::MVAnd__ctor(this_14,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    case 0x17:
      this_15 = (MVExplosives *)func_?();
      MVExplosives::MVExplosives__ctor(this_15,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    case 0x18:
      this_16 = (MVTextMsg *)func_?();
      MVTextMsg::MVTextMsg__ctor(this_16,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    case 0x19:
      this_17 = (MVFire *)func_?();
      MVFire::MVFire__ctor(this_17,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    case 0x1a:
      this_18 = (MVSmoke *)func_?();
      MVSmoke::MVSmoke__ctor(this_18,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    case 0x1b:
      this_19 = (MVTimeTrigger *)func_?();
      MVTimeTrigger::MVTimeTrigger__ctor(this_19,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    case 0x1c:
      this_20 = (MVTeleporter *)func_?();
      MVTeleporter::MVTeleporter__ctor(this_20,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    case 0x1d:
      this_21 = (MVGoal *)func_?();
      MVGoal::MVGoal__ctor(this_21,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    case 0x20:
      this_22 = (MVCubeModelFineGrainedTerrain *)func_?();
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    case 0x21:
      this_23 = (MVPressurePlate *)func_?();
      MVPressurePlate::MVPressurePlate__ctor(this_23,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_23;
    case 0x25:
      this_24 = (MVPickupItemBase *)func_?();
      MVPickupItemBase::MVPickupItemBase__ctor
                (this_24,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    case 0x26:
      this_25 = (MVSkybox *)func_?();
      MVSkybox::MVSkybox__ctor(this_25,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    case 0x27:
      this_26 = (MVSpawnPointRed *)func_?();
      MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_26;
    case 0x28:
      this_27 = (MVSpawnPointGreen *)func_?();
      MVSpawnPointGreen::MVSpawnPointGreen__ctor
                (this_27,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    case 0x29:
      this_28 = (MVSpawnPointYellow *)func_?();
      MVSpawnPointYellow::MVSpawnPointYellow__ctor
                (this_28,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    case 0x2a:
      pMVar14 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar14,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar14;
    case 0x2b:
      this_29 = (MVObjectEnabler *)func_?();
      MVObjectEnabler::MVObjectEnabler__ctor(this_29,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_29;
    case 0x2c:
      this_30 = (MVWaterPlane *)func_?();
      MVWaterPlane::MVWaterPlane__ctor(this_30,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_30;
    case 0x2d:
      pOVar9 = (Object *)func_?();
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             worldObjectData,pOVar9,
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
        unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
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
          TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_ESI.m_Index,(Object *)unaff_EBX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar10.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) ==
                (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
              puVar15 = (undefined1 *)func_?();
              switch(*puVar15) {
              case 7:
                this_31 = (MVMovable *)func_?();
                MVMovable::MVMovable__ctor(this_31,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_31;
              case 8:
                this_32 = (MVBody *)func_?();
                MVBody::MVBody__ctor(this_32,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_32;
              case 9:
                this_33 = (MVTeleportGroup *)func_?();
                MVTeleportGroup::MVTeleportGroup__ctor
                          (this_33,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_33;
              case 10:
                this_34 = (MVSentryGunBlueprint *)func_?();
                MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                          (this_34,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_34;
              case 0xb:
                this_35 = (MVMovingPlatform *)func_?();
                MVMovingPlatform::MVMovingPlatform__ctor
                          (this_35,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_35;
              case 0xc:
                this_36 = (MVMovingPlatformGroup *)func_?();
                MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                          (this_36,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_36;
              case 0xd:
                this_37 = (MVRotator *)func_?();
                MVRotator::MVRotator__ctor(this_37,worldObjectData,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_37;
              case 0xe:
                goto code_?;
              default:
                pSVar17 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                pSVar17 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar17,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar17,(MethodInfo *)0x0);
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
      MVPulseBox::MVPulseBox__ctor(this_38,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_38;
    case 0x2f:
      this_39 = (MVRandomBox *)func_?();
      MVRandomBox::MVRandomBox__ctor(this_39,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    case 0x30:
      this_40 = (MVSentryGun *)func_?();
      MVSentryGun::MVSentryGun__ctor(this_40,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    case 0x31:
      this_41 = (MVCollectible *)func_?();
      MVCollectible::MVCollectible__ctor(this_41,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    case 0x32:
      this_42 = (MVMovingPlatformNode *)func_?();
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_42,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    case 0x33:
      this_43 = (MVWaterPlanePreset *)func_?();
      MVWaterPlanePreset::MVWaterPlanePreset__ctor
                (this_43,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    case 0x34:
      this_44 = (MVPointLightPreset *)func_?();
      MVPointLightPreset::MVPointLightPreset__ctor
                (this_44,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    case 0x35:
code_?:
      this_45 = (MVGhostInstance *)func_?();
      MVGhostInstance::MVGhostInstance__ctor(this_45,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_45;
    case 0x36:
      this_46 = (MVCubeGun *)func_?();
      MVCubeGun::MVCubeGun__ctor(this_46,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_46;
    case 0x37:
      this_47 = (MVCheckpoint *)func_?();
      MVCheckpoint::MVCheckpoint__ctor(this_47,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    case 0x38:
      this_48 = (MVHoverCraft *)func_?();
      MVHoverCraft::MVHoverCraft__ctor(this_48,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    case 0x39:
      this_49 = (MVWorldObjectSpawnerVehicle *)func_?();
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_49,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    case 0x3b:
      this_50 = (MVJetPack *)func_?();
      MVJetPack::MVJetPack__ctor(this_50,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    case 0x3c:
      this_51 = (MVRoundCube *)func_?();
      MVRoundCube::MVRoundCube__ctor(this_51,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    case 0x3d:
      this_52 = (MVAdvancedGhost *)func_?();
      MVAdvancedGhost::MVAdvancedGhost__ctor(this_52,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_52;
    case 0x3e:
      this_53 = (MVHamsterWheel *)func_?();
      MVHamsterWheel::MVHamsterWheel__ctor(this_53,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_53;
    case 0x3f:
      this_54 = (MVKillLimit *)func_?();
      MVKillLimit::MVKillLimit__ctor(this_54,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    case 0x40:
      this_55 = (MVOculusKillLimit *)func_?();
      MVOculusKillLimit::MVOculusKillLimit__ctor
                (this_55,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    case 0x41:
      this_56 = (MVCountingCube *)func_?();
      MVCountingCube::MVCountingCube__ctor(this_56,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    default:
      switch(iVar23) {
      case 0x76:
        this_57 = (MVVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_57,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_57;
      case 0x77:
        this_58 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor
                  (this_58,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      default:
        goto code_?;
      case 0x82:
        this_59 = (MVGamePoint *)func_?();
        MVGamePoint::MVGamePoint__ctor(this_59,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      case 0x83:
        pMVar25 = (MVWorldObjectClient *)func_?();
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar25,worldObjectData,worldObjects,
                   (MethodInfo *)0x0);
        return pMVar25;
      case 0x85:
        goto code_?;
      case 0x86:
        this_62 = (MVAvatarSpawnRoleCreator *)func_?();
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_62,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_62;
      case 0x87:
        this_63 = (MVGameOptionDataObject *)func_?();
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_63,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      case 0x88:
        this_64 = (MVObjectTransparency *)func_?();
        WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                  (this_64,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      case 0x91:
        this_65 = (MVCameraSettings *)func_?();
        MVCameraSettings::MVCameraSettings__ctor
                  (this_65,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      case 0x92:
        this_66 = (MVGravityCube *)func_?();
        MVGravityCube::MVGravityCube__ctor(this_66,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      case 0x94:
        this_67 = (MVGameCoin *)func_?();
        MVGameCoin::MVGameCoin__ctor(this_67,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      case 0x95:
        this_68 = (MVGameCoinChest *)func_?();
        MVGameCoinChest::MVGameCoinChest__ctor
                  (this_68,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      case 0x96:
        this_69 = (ThemeWorldObject *)func_?();
        ThemeWorldObject::ThemeWorldObject__ctor
                  (this_69,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      case 0x97:
        this_70 = (MVDoor *)func_?();
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      case 0x98:
        this_71 = (MVDoorBlueprint *)func_?();
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      case 0x99:
        this_72 = (MVMeleeWeaponBase *)func_?();
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      case 0x9a:
        pMVar16 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar16,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar16;
      case 0x9b:
        this_73 = (MVCostumeBase *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      case 0x9c:
        pMVar16 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar16,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar16;
      case 0xa1:
        this_74 = (TeamEditor *)func_?();
        TeamEditor::TeamEditor__ctor(this_74,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      case 0xa2:
        this_75 = (TriggerCube *)func_?();
        TriggerCube::TriggerCube__ctor(this_75,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      case 0xa4:
        this_76 = (CollectTheItemCollectableInstance *)func_?();
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      case 0xa5:
        this_77 = (ShootableButton *)func_?();
        ShootableButton::ShootableButton__ctor
                  (this_77,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      case 0xa6:
        this_78 = (UseLever *)func_?();
        UseLever::UseLever__ctor(this_78,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      case 0xa7:
        this_79 = (CollectTheItemDropOff *)func_?();
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      case 0xa8:
        this_80 = (CollectTheItemCollectable *)func_?();
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      case 0xa9:
        this_81 = (CollectTheItem *)func_?();
        CollectTheItem::CollectTheItem__ctor(this_81,worldObjectData,worldObjects,(MethodInfo *)0x0)
        ;
        return (MVWorldObjectClient *)this_81;
      case 0xaa:
        this_82 = (WindTurbine *)func_?();
        WindTurbine::WindTurbine__ctor(this_82,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      case 0xab:
        this_83 = (MVGlobalSoundEmitter *)func_?();
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_83;
      }
    }
  }
  func_?();
code_?:
  fVar48 = (float10)func_?();
  bVar34 = (byte)extraout_EDX | *(byte *)(extraout_EDX + 0x10);
  pbStack_68 = (byte *)CONCAT31((int3)((uint)extraout_EDX >> 8),bVar34);
  if ((char)bVar34 < '\0') {
    *(char *)(extraout_ECX + -0x39efadf5) = *(char *)(extraout_ECX + -0x39efadf5) + extraout_AH;
    pbStack_68 = (byte *)((uint)pbStack_68 | *(uint *)(pbStack_68 + 0x10));
    in((short)pbStack_68);
  }
  pbVar39 = pbStack_68 + 0x10;
  pbVar28 = *(byte **)pbVar39;
  *(int *)pbVar39 = *(int *)pbVar39 - (int)pbStack_68;
  uVar30 = SUB42(pbStack_68,0);
  in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  pbVar38 = *(byte **)pbVar39;
  iVar23 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar23 - (int)pbStack_68) - (uint)(pbVar28 < pbStack_68);
  in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar38 < pbStack_68 ||
                 (uint)(iVar23 - (int)pbStack_68) < (uint)(pbVar28 < pbStack_68));
  pbVar28 = *(byte **)pbVar39;
  iVar23 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar23 - (int)pbStack_68) - uVar32;
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar23 - (int)pbStack_68) < uVar32);
  pbVar28 = *(byte **)pbVar39;
  iVar23 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar23 - (int)pbStack_68) - uVar32;
  in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar23 - (int)pbStack_68) < uVar32);
  pbVar28 = *(byte **)pbVar39;
  iVar23 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar23 - (int)pbStack_68) - uVar32;
  uVar18 = in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar23 - (int)pbStack_68) < uVar32);
  iVar23 = *(int *)pbVar39;
  uVar4 = *(int *)pbVar39 - (int)pbStack_68;
  bVar46 = *(byte **)pbVar39 < pbStack_68 || uVar4 < uVar32;
  *(uint *)pbVar39 = uVar4 - uVar32;
  if (*(int *)pbVar39 == 0 ||
      (SBORROW4(iVar23,(int)pbStack_68) != SBORROW4(uVar4,uVar32)) != *(int *)pbVar39 < 0) {
    puVar3 = &unaff_EBX[-0x12efae0].fields._firstChar;
    bVar7 = (byte)((uint)uVar18 >> 8);
    bVar34 = (char)*puVar3 + bVar7;
    bVar47 = CARRY1((byte)*puVar3,bVar7) || CARRY1(bVar34,bVar46);
    *(byte *)puVar3 = bVar34 + bVar46;
    iVar23 = extraout_ECX;
  }
  else {
    bVar34 = (byte)((uint)extraout_ECX >> 8);
    iVar23 = CONCAT22((short)((uint)extraout_ECX >> 0x10),
                      CONCAT11(bVar34 * '\x02' + bVar46,(char)extraout_ECX));
    pbVar39 = pbStack_68 + 0x10;
    uVar32 = (uint)(CARRY1(bVar34,bVar34) || CARRY1(bVar34 * '\x02',bVar46));
    pbVar28 = *(byte **)pbVar39;
    iVar24 = *(int *)pbVar39;
    *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
    in(uVar30);
    pbVar39 = pbStack_68 + 0x10;
    uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
    pbVar28 = *(byte **)pbVar39;
    iVar24 = *(int *)pbVar39;
    *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
    uRam_? = in(uVar30);
    pbVar39 = pbStack_68 + 0x10;
    uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
    bVar47 = *(byte **)pbVar39 < pbStack_68 ||
             (uint)(*(int *)pbVar39 - (int)pbStack_68) < uVar32;
    *(uint *)pbVar39 = (*(int *)pbVar39 - (int)pbStack_68) - uVar32;
  }
  *(uint *)(pbStack_68 + 0x10) =
       (*(int *)(pbStack_68 + 0x10) - (int)pbStack_68) - (uint)bVar47;
  puStack_69 = &stack0xffffffd4;
  puVar45 = (undefined4 *)&stack0xffffffd4;
  cVar8 = '\x0f';
  do {
    puVar44 = puVar44 + -1;
    puVar45 = puVar45 + -1;
    *puVar45 = *puVar44;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  uVar18 = in(uVar30);
  bVar26 = (byte)pbStack_68;
  *pbStack_68 = *pbStack_68 + bVar26;
  pbVar39 = &stack0x00000026 + iVar23;
  bVar34 = *pbVar39;
  bVar35 = (byte)unaff_EBX;
  *pbVar39 = *pbVar39 + bVar35;
  *(char *)(iVar23 + -0x59efadf3) =
       *(char *)(iVar23 + -0x59efadf3) + ((byte)uVar18 | 0x52) + CARRY1(bVar34,bVar35);
  pbStack_67 = pbStack_68;
  pbStack_66 = pbStack_68;
  bVar34 = *pbStack_68;
  bVar36 = (byte)((uint)unaff_EBX >> 8);
  *pbStack_68 = *pbStack_68 + bVar36;
  uStack_65 = in_CS;
  bVar7 = (byte)((uint)iVar23 >> 8);
  bVar29 = (byte)iVar23;
  bVar27 = bVar7 * '\x02' + CARRY1(bVar34,bVar36);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',CARRY1(bVar34,bVar36)));
  pbVar28 = *(byte **)pbVar39;
  iVar24 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
  uVar18 = in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
  bVar46 = *(byte **)pbVar39 < pbStack_68 || (uint)(*(int *)pbVar39 - (int)pbStack_68) < uVar32;
  *(uint *)pbVar39 = (*(int *)pbVar39 - (int)pbStack_68) - uVar32;
  uStack_64 = (undefined2)((uint)pbStack_68 >> 0x10);
  _uStack_528c = CONCAT22(uStack_64,in_CS);
  pbStack_62 = pbStack_68;
  pbVar39 = pbStack_68 + -0x12efadf2;
  bVar34 = *pbVar39;
  bVar7 = *pbVar39 + (byte)uVar18;
  *pbVar39 = bVar7 + bVar46;
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(CARRY1(bVar34,(byte)uVar18) || CARRY1(bVar7,bVar46));
  pbVar28 = *(byte **)pbVar39;
  iVar24 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
  in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
  pbVar28 = *(byte **)pbVar39;
  iVar24 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
  uVar18 = in(uVar30);
  pbVar39 = pbStack_68 + 0x10;
  uVar32 = (uint)(pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
  pbVar28 = *(byte **)pbVar39;
  iVar24 = *(int *)pbVar39;
  *(uint *)pbVar39 = (iVar24 - (int)pbStack_68) - uVar32;
  pSVar17 = (String *)((int)&((String *)unaff_ESI.m_Index)->klass + 1);
  pauVar19 = (undefined1 (*) [16])
             CONCAT31((int3)((uint)uVar18 >> 8),*(undefined1 *)&((String *)unaff_ESI.m_Index)->klass
                     );
  uStack_61 = in_CS;
  pbStack_60 = pbStack_68;
  bVar46 = CARRY1(bVar29,bVar26) ||
           CARRY1(bVar29 + bVar26,
                  pbVar28 < pbStack_68 || (uint)(iVar24 - (int)pbStack_68) < uVar32);
  uStack_59 = in_CS;
  pbStack_58 = pbStack_68;
  bVar34 = (byte)((uint)pbStack_68 >> 8);
  bVar47 = CARRY1(bVar34,bVar34) || CARRY1(bVar34 * '\x02',bVar46);
  bVar36 = bVar34 * '\x02' + bVar46;
  iStack_56 = CONCAT22(uStack_64,CONCAT11(bVar36,bVar26));
  uStack_57 = in_CS;
  bVar34 = *(char *)&unaff_EBX->klass + bVar35;
  bVar46 = CARRY1(*(byte *)&unaff_EBX->klass,bVar35) || CARRY1(bVar34,bVar47);
  *(byte *)&unaff_EBX->klass = bVar34 + bVar47;
  auVar49 = rsqrtps(in_XMM2,*pauVar19);
  pauVar20 = (undefined1 (*) [16])(*pauVar19 + 1);
  auVar49 = rsqrtps(auVar49,*pauVar20);
  auVar49 = rsqrtps(auVar49,*(undefined1 (*) [16])(*pauVar20 + in_GS_OFFSET));
  bVar34 = *pbStack_68;
  pbVar28 = (byte *)CONCAT31((int3)(CONCAT22((short)((uint)iVar23 >> 0x10),CONCAT11(bVar27,bVar29))
                                   >> 8),bVar34);
  iStack_55 = iStack_56;
  pbVar39 = pbStack_68 + -0x2befadf1;
  bVar47 = CARRY1(*pbVar39,bVar27) || CARRY1(*pbVar39 + bVar27,bVar46);
  *pbVar39 = *pbVar39 + bVar27 + bVar46;
  rsqrtps(auVar49,*pauVar20);
  puVar15 = &unaff_EBX[-1].fields.field_0x7;
  pbVar39 = (byte *)(iStack_56 + 0x10);
  bVar7 = bVar26 + *pbVar39;
  uVar37 = (undefined3)((uint)iStack_56 >> 8);
  bVar35 = bVar7 + bVar47;
  pbStack_54 = (byte *)CONCAT31(uVar37,bVar35);
  uVar21 = (undefined3)((uint)pauVar20 >> 8);
  bVar29 = (byte)pauVar20;
  bVar41 = (byte)puVar15;
  if (SCARRY1(bVar26,*pbVar39) == SCARRY1(bVar7,bVar47)) {
    bVar46 = CARRY1(in_stack_50,bVar35) ||
             CARRY1(in_stack_50 + bVar35,CARRY1(bVar26,*pbVar39) || CARRY1(bVar7,bVar47));
    bVar34 = bVar35 + pbStack_54[0x10];
    bVar47 = CARRY1(bVar35,pbStack_54[0x10]) || CARRY1(bVar34,bVar46);
    pbStack_53 = (byte *)CONCAT31(uVar37,bVar34 + bVar46);
    *(short *)pbStack_53 = (short)ROUND(fVar48);
    pbVar39 = puVar15 + (int)pbStack_53;
    bVar46 = CARRY1(*pbVar39,bVar29) || CARRY1(*pbVar39 + bVar29,bVar47);
    *pbVar39 = *pbVar39 + bVar29 + bVar47;
    pbStack_52 = pbStack_53;
    bVar34 = *pbVar28;
    bVar7 = *pbVar28;
    *pbVar28 = bVar7 + bVar27 + bVar46;
    uVar32 = (uint)(CARRY1(bVar34,bVar27) || CARRY1(bVar7 + bVar27,bVar46));
    pbVar38 = pbStack_53 + *(uint *)(pbStack_53 + 0x10) + uVar32;
    uVar32 = (uint)(CARRY4((uint)pbStack_53,*(uint *)(pbStack_53 + 0x10)) ||
                   CARRY4((uint)(pbStack_53 + *(uint *)(pbStack_53 + 0x10)),uVar32));
    bVar46 = CARRY4((uint)pbVar38,*(uint *)(pbVar38 + 0x10));
    pbVar38 = pbVar38 + *(uint *)(pbVar38 + 0x10);
    bVar47 = bVar46 || CARRY4((uint)pbVar38,uVar32);
    pbVar39 = pbVar38 + uVar32;
    pSVar17 = (String *)unaff_ESI.m_Index;
    if (bVar46 || CARRY4((uint)pbVar38,uVar32)) goto code_?;
  }
  else {
    pbVar39 = *(byte **)puVar15;
    *(int *)puVar15 = *(int *)puVar15 - (int)pbStack_54;
    ppMVar1 = &((String *)(unaff_ESI.m_Index + 0x10))->monitor;
    bVar46 = CARRY1(*(byte *)ppMVar1,bVar34) ||
             CARRY1(*(char *)ppMVar1 + bVar34,pbVar39 < pbStack_54);
    *(byte *)ppMVar1 = *(char *)ppMVar1 + bVar34 + (pbVar39 < pbStack_54);
    pbStack_53 = pbStack_54;
    pbVar39 = (byte *)((int)&unaff_EBX[1].klass + 2);
    bVar47 = CARRY1(*pbVar39,bVar36) || CARRY1(*pbVar39 + bVar36,bVar46);
    *pbVar39 = *pbVar39 + bVar36 + bVar46;
    pbVar39 = pbStack_54;
code_?:
    pbStack_52 = pbVar39;
    pbVar38 = pauVar19[-0x42efadf] + 4;
    bVar7 = *pbVar38;
    bVar34 = *pbVar38;
    *pbVar38 = bVar34 + bVar41 + bVar47;
    uVar32 = (uint)(CARRY1(bVar7,bVar41) || CARRY1(bVar34 + bVar41,bVar47));
    bVar46 = CARRY4((uint)pbVar39,*(uint *)(pbVar39 + 0x10)) ||
             CARRY4((uint)(pbVar39 + *(uint *)(pbVar39 + 0x10)),uVar32);
    pbVar39 = pbVar39 + *(uint *)(pbVar39 + 0x10) + uVar32;
    pbVar28 = pbVar28 + -1;
    if (pbVar28 != (byte *)0x0) {
      bVar47 = 0xad < bVar29 || CARRY1(bVar29 + 0x52,bVar46);
      bVar34 = bVar29 + 0x52 + bVar46;
      goto code_?;
    }
    pbVar28 = (byte *)((uint)bVar46 << 8);
    pbVar38 = pbVar39 + 0x10;
    bVar47 = *(byte **)pbVar38 < pbVar39;
    *(int *)pbVar38 = *(int *)pbVar38 - (int)pbVar39;
  }
  bVar46 = 0xad < bVar29 || CARRY1(bVar29 + 0x52,bVar47);
  bVar34 = bVar29 + 0x52 + bVar47;
  pbVar38 = (byte *)((int)&pbStack_52 + (int)pbVar39);
  bVar29 = (byte)((uint)pbVar28 >> 8);
  bVar7 = *pbVar38 + bVar29;
  bVar47 = CARRY1(*pbVar38,bVar29) || CARRY1(bVar7,bVar46);
  *pbVar38 = bVar7 + bVar46;
  pbVar38 = pbVar28 + 0x14;
  bVar7 = *pbVar38 + (byte)pbVar39;
  bVar46 = CARRY1(*pbVar38,(byte)pbVar39) || CARRY1(bVar7,bVar47);
  *pbVar38 = bVar7 + bVar47;
  ppMVar1 = &pSVar17[1].monitor;
  bVar29 = (byte)((uint)pbVar39 >> 8);
  bVar7 = *(char *)ppMVar1 + bVar29;
  bVar47 = CARRY1(*(byte *)ppMVar1,bVar29) || CARRY1(bVar7,bVar46);
  *(byte *)ppMVar1 = bVar7 + bVar46;
  pbStack_52 = pbVar39;
code_?:
  pbVar38 = (byte *)((int)&unaff_EBX[-0x3fefadf].klass + 3);
  bVar46 = CARRY1(*pbVar38,bVar41) || CARRY1(*pbVar38 + bVar41,bVar47);
  *pbVar38 = *pbVar38 + bVar41 + bVar47;
  bVar47 = 0xad < bVar34 || CARRY1(bVar34 + 0x52,bVar46);
  bVar7 = bVar34 + 0x52 + bVar46;
  bVar34 = (byte)((uint)pauVar20 >> 8);
  bVar27 = (byte)((uint)pbVar28 >> 8);
  bVar29 = bVar27 + bVar34;
  bVar46 = CARRY1(bVar27,bVar34) || CARRY1(bVar29,bVar47);
  uVar30 = (undefined2)((uint)pbVar28 >> 0x10);
  bVar26 = (byte)pbVar28;
  bVar29 = bVar29 + bVar47;
  puVar71 = (uint *)CONCAT22(uVar30,CONCAT11(bVar29,bVar26));
  bVar34 = bVar7 + 0x52;
  bVar47 = 0xad < bVar7 || CARRY1(bVar34,bVar46);
  bVar34 = bVar34 + bVar46;
  bVar7 = (byte)((uint)puVar15 >> 8);
  bVar27 = bVar7 + bVar29;
  bVar46 = CARRY1(bVar7,bVar29) || CARRY1(bVar27,bVar47);
  uVar42 = (undefined2)((uint)puVar15 >> 0x10);
  bVar27 = bVar27 + bVar47;
  pbVar28 = pbVar39 + 0x10;
  bVar7 = *pbVar28 + (byte)pbVar39;
  bVar47 = CARRY1(*pbVar28,(byte)pbVar39) || CARRY1(bVar7,bVar46);
  *pbVar28 = bVar7 + bVar46;
  bVar7 = bVar34 + 0x11;
  bVar46 = 0xee < bVar34 || CARRY1(bVar7,bVar47);
  cVar8 = bVar7 + bVar47;
  uVar32 = *puVar71;
  bVar34 = (byte)*puVar71 + bVar27;
  *(byte *)puVar71 = bVar34 + bVar46;
  puVar2 = (uint *)(pbVar39 + 0x10);
  uVar22 = (uint)(CARRY1((byte)uVar32,bVar27) || CARRY1(bVar34,bVar46));
  uVar4 = *puVar2;
  uVar32 = *puVar2;
  *puVar2 = (uint)(pbVar39 + uVar32 + uVar22);
  puVar2 = (uint *)(pbVar39 + 0x10);
  uVar22 = (uint)(CARRY4(uVar4,(uint)pbVar39) || CARRY4((uint)(pbVar39 + uVar32),uVar22));
  uVar4 = *puVar2;
  uVar32 = *puVar2;
  *puVar2 = (uint)(pbVar39 + uVar32 + uVar22);
  uVar32 = (uint)(CARRY4(uVar4,(uint)pbVar39) || CARRY4((uint)(pbVar39 + uVar32),uVar22));
  bVar46 = 0xffffffad < *puVar71 || CARRY4(*puVar71 + 0x52,uVar32);
  *puVar71 = *puVar71 + 0x52 + uVar32;
  pbVar28 = (byte *)(CONCAT31(uVar21,cVar8) + -0x32efadef);
  bVar7 = *pbVar28;
  bVar34 = *pbVar28;
  *pbVar28 = bVar34 + bVar29 + bVar46;
  puVar2 = (uint *)(pbVar39 + 0x10);
  uVar22 = (uint)(CARRY1(bVar7,bVar29) || CARRY1(bVar34 + bVar29,bVar46));
  uVar4 = *puVar2;
  uVar32 = *puVar2;
  *puVar2 = (uint)(pbVar39 + uVar32 + uVar22);
  pbVar40 = pbVar39 + (uint)(CARRY4(uVar4,(uint)pbVar39) || CARRY4((uint)(pbVar39 + uVar32),uVar22))
                      + *(int *)(pbVar39 + 0x10);
  uVar22 = CONCAT31(uVar21,cVar8) & 0xffffff15;
  pbVar28 = (byte *)((int)puVar71 + 0x15);
  bVar34 = *pbVar28;
  *pbVar28 = *pbVar28 + bVar26;
  bVar7 = bVar29 * '\x02' + CARRY1(bVar34,bVar26);
  pbVar31 = (byte *)CONCAT22(uVar30,CONCAT11(bVar7,bVar26));
  pbVar28 = pbVar40 + 0x10;
  uVar32 = (uint)(CARRY1(bVar29,bVar29) || CARRY1(bVar29 * '\x02',CARRY1(bVar34,bVar26)));
  pbVar38 = *(byte **)pbVar28;
  iVar23 = *(int *)pbVar28;
  *(uint *)pbVar28 = (iVar23 - (int)pbVar40) - uVar32;
  out(pbVar39[-1],(short)pbVar40);
  uVar32 = (uint)(pbVar38 < pbVar40 || (uint)(iVar23 - (int)pbVar40) < uVar32);
  uVar4 = uVar22 + 0x15931052;
  bVar46 = 0xea6cefad < uVar22 || CARRY4(uVar4,uVar32);
  iVar23 = uVar4 + uVar32;
  pbVar28 = (byte *)(iVar23 + 0x75105215);
  bVar47 = CARRY1(*pbVar28,bVar27) || CARRY1(*pbVar28 + bVar27,bVar46);
  *pbVar28 = *pbVar28 + bVar27 + bVar46;
  pbVar28 = pbVar40 + -0x40efadea;
  bVar46 = CARRY1(*pbVar28,bVar41) || CARRY1(*pbVar28 + bVar41,bVar47);
  *pbVar28 = *pbVar28 + bVar41 + bVar47;
  bVar34 = (byte)((uint)iVar23 >> 8);
  bVar47 = CARRY1(bVar34,bVar34) || CARRY1(bVar34 * '\x02',bVar46);
  bVar29 = bVar34 * '\x02' + bVar46;
  iVar24 = CONCAT22((short)((uint)iVar23 >> 0x10),CONCAT11(bVar29,(char)iVar23));
  bVar46 = CARRY1(*pbVar31,bVar26) || CARRY1(*pbVar31 + bVar26,bVar47);
  *pbVar31 = *pbVar31 + bVar26 + bVar47;
  bVar47 = CARRY1(*pbVar39,bVar7) || CARRY1(*pbVar39 + bVar7,bVar46);
  *pbVar39 = *pbVar39 + bVar7 + bVar46;
  pbVar28 = (byte *)(CONCAT22(uVar42,CONCAT11(bVar27,bVar41)) + 0x17);
  bVar35 = (byte)pbVar40;
  bVar46 = CARRY1(*pbVar28,bVar35) || CARRY1(*pbVar28 + bVar35,bVar47);
  *pbVar28 = *pbVar28 + bVar35 + bVar47;
  pbVar28 = (byte *)(iVar24 + 0x17);
  bVar7 = *pbVar28;
  bVar34 = *pbVar28;
  *pbVar28 = bVar34 + bVar27 + bVar46;
  bVar46 = CARRY1(in_stack_51,bVar41) ||
           CARRY1(in_stack_51 + bVar41,CARRY1(bVar7,bVar27) || CARRY1(bVar34 + bVar27,bVar46))
  ;
  bVar47 = CARRY1(bVar27,bVar29) || CARRY1(bVar27 + bVar29,bVar46);
  bVar27 = bVar27 + bVar29 + bVar46;
  pcVar43 = (char *)CONCAT22(uVar42,CONCAT11(bVar27,bVar41));
  pbVar28 = (byte *)(pcVar43 + iVar24);
  bVar46 = CARRY1(*pbVar28,bVar26) || CARRY1(*pbVar28 + bVar26,bVar47);
  *pbVar28 = *pbVar28 + bVar26 + bVar47;
  bVar7 = (byte)((uint)pbVar40 >> 8);
  bVar34 = *pbVar31 + bVar7;
  bVar47 = CARRY1(*pbVar31,bVar7) || CARRY1(bVar34,bVar46);
  *pbVar31 = bVar34 + bVar46;
  pbVar28 = pbVar40 + 0x10;
  bVar46 = *pbVar28 < bVar35 || (byte)(*pbVar28 - bVar35) < bVar47;
  *pbVar28 = (*pbVar28 - bVar35) - bVar47;
  pbVar28 = pbVar40 + 0x10;
  bVar47 = *pbVar28 < bVar35 || (byte)(*pbVar28 - bVar35) < bVar46;
  *pbVar28 = (*pbVar28 - bVar35) - bVar46;
  if ((POPCOUNT(*pbVar28) & 1U) == 0) {
    pbVar39 = (byte *)(iVar24 + -0x3aefade8);
    bVar7 = *pbVar39;
    bVar34 = *pbVar39;
    *pbVar39 = bVar34 + bVar29 + bVar47;
    pbVar40[0x10] =
         (pbVar40[0x10] - bVar35) - (CARRY1(bVar7,bVar29) || CARRY1(bVar34 + bVar29,bVar47));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar28 = pbVar39 + 0x19;
  bVar46 = CARRY1(*pbVar28,bVar27) || CARRY1(*pbVar28 + bVar27,bVar47);
  *pbVar28 = *pbVar28 + bVar27 + bVar47;
  pbVar28 = (byte *)(pcVar43 + -0x37efade7);
  bVar7 = *pbVar28;
  bVar34 = *pbVar28;
  *pbVar28 = bVar34 + bVar29 + bVar46;
  *(uint *)(pbVar40 + 0x10) =
       (*(int *)(pbVar40 + 0x10) - (int)pbVar40) -
       (uint)(CARRY1(bVar7,bVar29) || CARRY1(bVar34 + bVar29,bVar46));
  *pbVar31 = *pbVar31 + (char)iVar23;
  uVar32 = CONCAT31((int3)((uint)pbVar31 >> 8),bVar26 + *pbVar31);
  pcVar33 = (char *)(uVar32 | *(uint *)(&UNK_? + uVar32));
  *pcVar33 = (*pcVar33 - bVar41) - CARRY1(bVar35 + *pcVar43,*pbVar39);
  pcVar5 = (code *)swi(3);
  pMVar25 = (MVWorldObjectClient *)
            (*pcVar5)(pbVar39,pbVar40,pbVar40,pbVar40,pbVar40,in_SS,pbVar40,in_SS,pbVar40,in_SS,
                      pbVar40,pbVar40,pbVar40);
  return pMVar25;
code_?:
  pOVar9 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar12 == (MVNetworkGame *)0x0) ||
      (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0),
      pMVar13 == (MVLocalPlayer *)0x0)) ||
     (unaff_EBX = (String *)(pMVar13->fields)._._ActorNr_k__BackingField, unaff_ESI.m_Index == 0))
  goto code_?;
  if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
      (TypeInfo__System__Int32->_0).element_class) {
    piVar11 = (int *)func_?();
    if ((String *)*piVar11 != unaff_EBX) {
      this_60 = (MVBuildModeAvatarRemote *)func_?();
      MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                (this_60,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_60;
    }
    this_61 = (MVBuildModeAvatarLocal *)func_?();
    MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
              (this_61,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
  this_00 = (UnityAction_2_System_Object_System_ByteEnum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]::
  UnityAction_2_System_Object_System_ByteEnum___ctor
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

