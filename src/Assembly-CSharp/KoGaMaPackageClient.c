
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
     (this_00 = (this->fields).worldObjects, this = (KoGaMaPackageClient *)returnData,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(value->fields)._.id,
               (Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  bVar1 = 0;
  func_?();
  pbVar2 = (byte *)(extraout_ECX + -6);
  bVar3 = *pbVar2;
  bVar4 = (byte)((uint)extraout_ECX >> 8);
  bVar5 = *pbVar2 + bVar4;
  *pbVar2 = bVar5 + bVar1;
  pcVar6 = (char *)((int)&(((Dictionary_2_System_Object_System_Object_ *)((int)this + -0x2fefaf10))
                          ->fields)._buckets + 2);
  *pcVar6 = *pcVar6 + unaff_BH + (CARRY1(bVar3,bVar4) || CARRY1(bVar5,bVar1));
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  byte *pbVar1;
  MonitorData **ppMVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  Object *pOVar14;
  TextureId TVar15;
  int *piVar16;
  TimeAttackFlag *this;
  MVGamePointChest *this_00;
  MVNetworkGame *pMVar17;
  MVLocalPlayer *pMVar18;
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
  MVSpawnPointBlue *pMVar19;
  MVObjectEnabler *this_29;
  MVWaterPlane *this_30;
  undefined1 *puVar20;
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
  MVCostumeBaseBlueprint *pMVar21;
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
  String *pSVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  char *pcVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  MVWorldObjectClient *pMVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  Int32__Class *extraout_ECX;
  Int32__Class *pIVar33;
  char *extraout_ECX_00;
  uint uVar34;
  uint *puVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  char cVar40;
  char cVar41;
  Dictionary_2_System_Object_System_Object___Class *extraout_EDX;
  Dictionary_2_System_Object_System_Object___Class *pDVar42;
  undefined3 uVar43;
  char *pcVar44;
  undefined2 uVar45;
  byte bVar46;
  byte bVar47;
  String *unaff_EBX;
  TextureId unaff_ESI;
  Dictionary_2_System_Object_System_Object_ *this_84;
  undefined2 in_CS;
  int unaff_FS_OFFSET;
  bool bVar48;
  bool bVar49;
  byte in_AF;
  bool bVar50;
  undefined1 in_XMM2 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  byte unaff_retaddr;
  byte in_stack_53;
  byte *pbVar54;
  
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__BlueprintData);
    func_?(&TypeInfo__MV__WorldObject__BlueprintType);
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
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&TypeInfo__MVBattery);
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
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    func_?(&TypeInfo__MVExplosives);
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
    func_?(&TypeInfo__MVHoverCraft);
    func_?(&TypeInfo__MVJetPack);
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
    func_?(&TypeInfo__MVPressurePlate);
    func_?(&TypeInfo__MVPreviewAvatar);
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
    func_?(&TypeInfo__MVTeleporter);
    func_?(&TypeInfo__MVTextMsg);
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
    func_?(&TypeInfo__WindTurbine);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_ty);
    func_?(&StringLiteral_WOCM_trying_to_create_unknown_bl);
    func_?(&StringLiteral_Attempt_to_create_abstract_Spawn);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pOVar14 = (Object *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  this_84 = worldObjectData;
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          worldObjectData,pOVar14,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), TVar15.m_Index == 0)) {
code_?:
    func_?();
    pDVar42 = extraout_EDX;
  }
  else {
    pIVar33 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) {
code_?:
      func_?(TVar15.m_Index,pIVar33);
      goto code_?;
    }
    piVar16 = (int *)func_?(TVar15.m_Index);
    iVar25 = *piVar16;
    if (0xab < iVar25) {
      if (iVar25 == 0xb4) {
        this = (TimeAttackFlag *)func_?(TypeInfo__TimeAttackFlag);
        TimeAttackFlag::TimeAttackFlag__ctor(this,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
      if (iVar25 == 0xb5) {
        this_00 = (MVGamePointChest *)func_?(TypeInfo__MVGamePointChest);
        MVGamePointChest::MVGamePointChest__ctor(this_00,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
code_?:
      pSVar22 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar22 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar22,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar22,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    switch(iVar25) {
    case 0:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar14 = (Object *)
                func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                (int)&worldObjectData + 3);
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar8 == 0) {
        unaff_ESI.m_Index =
             (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString(this_84,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
        worldObjectData =
             (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
        pOVar14 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,pOVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  );
        pOVar14 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar14,(MethodInfo *)0x0);
      }
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
      pOVar14 = (Object *)func_?();
      TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                          pOVar14,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar15.m_Index != 0) {
        pIVar33 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar16 = (int *)func_?(TVar15.m_Index);
        unaff_ESI.m_Index = *piVar16;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar17 != (MVNetworkGame *)0x0) &&
           (pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
           pMVar18 != (MVLocalPlayer *)0x0)) {
          if ((String *)unaff_ESI.m_Index == (String *)(pMVar18->fields)._._ActorNr_k__BackingField)
          {
            this_03 = (MVAvatarLocal *)func_?(TypeInfo__MVAvatarLocal);
            MVAvatarLocal::MVAvatarLocal__ctor(this_03,this_84,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_03;
          }
          if ((String *)unaff_ESI.m_Index != (String *)0xffffffff) {
            this_01 = (MVAvatarRemote *)func_?(TypeInfo__MVAvatarRemote);
            MVAvatarRemote::MVAvatarRemote__ctor(this_01,this_84,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_01;
          }
          this_02 = (MVPreviewAvatar *)func_?(TypeInfo__MVPreviewAvatar);
          MVPreviewAvatar::MVPreviewAvatar__ctor(this_02,this_84,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_02;
        }
      }
      goto code_?;
    case 1:
      this_04 = (MVCubeModelInstance *)func_?(TypeInfo__MVCubeModelInstance);
      MVCubeModelInstance::MVCubeModelInstance__ctor
                (this_04,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_04;
    case 2:
      this_05 = (MVPointLight *)func_?(TypeInfo__MVPointLight);
      MVPointLight::MVPointLight__ctor(this_05,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_05;
    case 3:
      this_06 = (MVTriggerBox *)func_?(TypeInfo__MVTriggerBox);
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
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
      pMVar19 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
      MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar19,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar19;
    case 8:
      this_07 = (MVCubeModelPrototypeTerrain *)
                func_?(TypeInfo__MVCubeModelPrototypeTerrain);
      MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                (this_07,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_07;
    case 9:
      this_08 = (MVGroup *)func_?(TypeInfo__MVGroup);
      MVGroup::MVGroup__ctor_2(this_08,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_08;
    case 0xd:
      this_09 = (MVSoundEmitter *)func_?(TypeInfo__MVSoundEmitter);
      MVSoundEmitter::MVSoundEmitter__ctor(this_09,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_09;
    case 0x11:
      this_10 = (MVFlag *)func_?(TypeInfo__MVFlag);
      MVFlag::MVFlag__ctor(this_10,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_10;
    case 0x13:
      this_11 = (MVBattery *)func_?(TypeInfo__MVBattery);
      MVBattery::MVBattery__ctor(this_11,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_11;
    case 0x14:
      this_12 = (MVToggleBox *)func_?(TypeInfo__MVToggleBox);
      MVToggleBox::MVToggleBox__ctor(this_12,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_12;
    case 0x15:
      this_13 = (MVNegate *)func_?(TypeInfo__MVNegate);
      MVNegate::MVNegate__ctor(this_13,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_13;
    case 0x16:
      this_14 = (MVAnd *)func_?(TypeInfo__MVAnd);
      MVAnd::MVAnd__ctor(this_14,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_14;
    case 0x17:
      this_15 = (MVExplosives *)func_?(TypeInfo__MVExplosives);
      MVExplosives::MVExplosives__ctor(this_15,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_15;
    case 0x18:
      this_16 = (MVTextMsg *)func_?(TypeInfo__MVTextMsg);
      MVTextMsg::MVTextMsg__ctor(this_16,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_16;
    case 0x19:
      this_17 = (MVFire *)func_?(TypeInfo__MVFire);
      MVFire::MVFire__ctor(this_17,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_17;
    case 0x1a:
      this_18 = (MVSmoke *)func_?(TypeInfo__MVSmoke);
      MVSmoke::MVSmoke__ctor(this_18,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_18;
    case 0x1b:
      this_19 = (MVTimeTrigger *)func_?(TypeInfo__MVTimeTrigger);
      MVTimeTrigger::MVTimeTrigger__ctor(this_19,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_19;
    case 0x1c:
      this_20 = (MVTeleporter *)func_?(TypeInfo__MVTeleporter);
      MVTeleporter::MVTeleporter__ctor(this_20,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_20;
    case 0x1d:
      this_21 = (MVGoal *)func_?(TypeInfo__MVGoal);
      MVGoal::MVGoal__ctor(this_21,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_21;
    case 0x20:
      this_22 = (MVCubeModelFineGrainedTerrain *)
                func_?(TypeInfo__MVCubeModelFineGrainedTerrain);
      MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                (this_22,this_84,worldObjects,prototypes,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_22;
    case 0x21:
      this_23 = (MVPressurePlate *)func_?(TypeInfo__MVPressurePlate);
      MVPressurePlate::MVPressurePlate__ctor(this_23,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_23;
    case 0x25:
      this_24 = (MVPickupItemBase *)func_?(TypeInfo__MVPickupItemBase);
      MVPickupItemBase::MVPickupItemBase__ctor(this_24,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_24;
    case 0x26:
      this_25 = (MVSkybox *)func_?(TypeInfo__MVSkybox);
      MVSkybox::MVSkybox__ctor(this_25,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_25;
    case 0x27:
      this_26 = (MVSpawnPointRed *)func_?(TypeInfo__MVSpawnPointRed);
      MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_26;
    case 0x28:
      this_27 = (MVSpawnPointGreen *)func_?(TypeInfo__MVSpawnPointGreen);
      MVSpawnPointGreen::MVSpawnPointGreen__ctor(this_27,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_27;
    case 0x29:
      this_28 = (MVSpawnPointYellow *)func_?(TypeInfo__MVSpawnPointYellow);
      MVSpawnPointYellow::MVSpawnPointYellow__ctor(this_28,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_28;
    case 0x2a:
      pMVar19 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
      MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar19,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar19;
    case 0x2b:
      this_29 = (MVObjectEnabler *)func_?(TypeInfo__MVObjectEnabler);
      MVObjectEnabler::MVObjectEnabler__ctor(this_29,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_29;
    case 0x2c:
      this_30 = (MVWaterPlane *)func_?(TypeInfo__MVWaterPlane);
      MVWaterPlane::MVWaterPlane__ctor(this_30,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_30;
    case 0x2d:
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_);
      pOVar14 = (Object *)
                func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                (int)&worldObjectData + 3);
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84
                             ,pOVar14,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      if (unaff_ESI.m_Index == 0) goto code_?;
      pDVar42 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
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
          pDVar42 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
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
          TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_ESI.m_Index,(Object *)unaff_EBX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar15.m_Index != 0) {
            pIVar33 = (Int32__Class *)TypeInfo__MV__WorldObject__BlueprintType;
            if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) ==
                (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
              puVar20 = (undefined1 *)func_?(TVar15.m_Index);
              switch(*puVar20) {
              case 7:
                this_31 = (MVMovable *)func_?(TypeInfo__MVMovable);
                MVMovable::MVMovable__ctor(this_31,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_31;
              case 8:
                this_32 = (MVBody *)func_?(TypeInfo__MVBody);
                MVBody::MVBody__ctor(this_32,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_32;
              case 9:
                this_33 = (MVTeleportGroup *)func_?(TypeInfo__MVTeleportGroup);
                MVTeleportGroup::MVTeleportGroup__ctor
                          (this_33,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_33;
              case 10:
                this_34 = (MVSentryGunBlueprint *)func_?(TypeInfo__MVSentryGunBlueprint);
                MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                          (this_34,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_34;
              case 0xb:
                this_35 = (MVMovingPlatform *)func_?(TypeInfo__MVMovingPlatform);
                MVMovingPlatform::MVMovingPlatform__ctor
                          (this_35,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_35;
              case 0xc:
                this_36 = (MVMovingPlatformGroup *)func_?(TypeInfo__MVMovingPlatformGroup);
                MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                          (this_36,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_36;
              case 0xd:
                this_37 = (MVRotator *)func_?(TypeInfo__MVRotator);
                MVRotator::MVRotator__ctor(this_37,this_84,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_37;
              case 0xe:
                goto code_?;
              default:
                pSVar22 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                pSVar22 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar22,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar22,(MethodInfo *)0x0);
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
      this_38 = (MVPulseBox *)func_?(TypeInfo__MVPulseBox);
      MVPulseBox::MVPulseBox__ctor(this_38,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_38;
    case 0x2f:
      this_39 = (MVRandomBox *)func_?(TypeInfo__MVRandomBox);
      MVRandomBox::MVRandomBox__ctor(this_39,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_39;
    case 0x30:
      this_40 = (MVSentryGun *)func_?(TypeInfo__MVSentryGun);
      MVSentryGun::MVSentryGun__ctor(this_40,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_40;
    case 0x31:
      this_41 = (MVCollectible *)func_?(TypeInfo__MVCollectible);
      MVCollectible::MVCollectible__ctor(this_41,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_41;
    case 0x32:
      this_42 = (MVMovingPlatformNode *)func_?(TypeInfo__MVMovingPlatformNode);
      MVMovingPlatformNode::MVMovingPlatformNode__ctor
                (this_42,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_42;
    case 0x33:
      this_43 = (MVWaterPlanePreset *)func_?(TypeInfo__MVWaterPlanePreset);
      MVWaterPlanePreset::MVWaterPlanePreset__ctor(this_43,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_43;
    case 0x34:
      this_44 = (MVPointLightPreset *)func_?(TypeInfo__MVPointLightPreset);
      MVPointLightPreset::MVPointLightPreset__ctor(this_44,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_44;
    case 0x35:
code_?:
      this_45 = (MVGhostInstance *)func_?(TypeInfo__MVGhostInstance);
      MVGhostInstance::MVGhostInstance__ctor(this_45,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_45;
    case 0x36:
      this_46 = (MVCubeGun *)func_?(TypeInfo__MVCubeGun);
      MVCubeGun::MVCubeGun__ctor(this_46,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_46;
    case 0x37:
      this_47 = (MVCheckpoint *)func_?(TypeInfo__MVCheckpoint);
      MVCheckpoint::MVCheckpoint__ctor(this_47,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_47;
    case 0x38:
      this_48 = (MVHoverCraft *)func_?(TypeInfo__MVHoverCraft);
      MVHoverCraft::MVHoverCraft__ctor(this_48,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_48;
    case 0x39:
      this_49 = (MVWorldObjectSpawnerVehicle *)
                func_?(TypeInfo__MVWorldObjectSpawnerVehicle);
      MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                (this_49,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_49;
    case 0x3b:
      this_50 = (MVJetPack *)func_?(TypeInfo__MVJetPack);
      MVJetPack::MVJetPack__ctor(this_50,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_50;
    case 0x3c:
      this_51 = (MVRoundCube *)func_?(TypeInfo__MVRoundCube);
      MVRoundCube::MVRoundCube__ctor(this_51,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_51;
    case 0x3d:
      this_52 = (MVAdvancedGhost *)func_?(TypeInfo__MVAdvancedGhost);
      MVAdvancedGhost::MVAdvancedGhost__ctor(this_52,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_52;
    case 0x3e:
      this_53 = (MVHamsterWheel *)func_?(TypeInfo__MVHamsterWheel);
      MVHamsterWheel::MVHamsterWheel__ctor(this_53,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_53;
    case 0x3f:
      this_54 = (MVKillLimit *)func_?(TypeInfo__MVKillLimit);
      MVKillLimit::MVKillLimit__ctor(this_54,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_54;
    case 0x40:
      this_55 = (MVOculusKillLimit *)func_?(TypeInfo__MVOculusKillLimit);
      MVOculusKillLimit::MVOculusKillLimit__ctor(this_55,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    case 0x41:
      this_56 = (MVCountingCube *)func_?(TypeInfo__MVCountingCube);
      MVCountingCube::MVCountingCube__ctor(this_56,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    default:
      switch(iVar25) {
      case 0x76:
        this_57 = (MVVehicleEnergy *)
                  func_?(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
        WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                  (this_57,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_57;
      case 0x77:
        this_58 = (MVWorldObjectSpawnerVehicleEnergy *)
                  func_?(
                                 TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                                 );
        WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
        MVWorldObjectSpawnerVehicleEnergy__ctor(this_58,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      default:
        goto code_?;
      case 0x82:
        this_59 = (MVGamePoint *)func_?(TypeInfo__MVGamePoint);
        MVGamePoint::MVGamePoint__ctor(this_59,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_59;
      case 0x83:
        pMVar29 = (MVWorldObjectClient *)func_?(TypeInfo__MVGamePassProgressionDataObject);
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar29,this_84,worldObjects,(MethodInfo *)0x0
                  );
        return pMVar29;
      case 0x85:
        goto code_?;
      case 0x86:
        this_62 = (MVAvatarSpawnRoleCreator *)func_?(TypeInfo__MVAvatarSpawnRoleCreator);
        MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                  (this_62,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_62;
      case 0x87:
        this_63 = (MVGameOptionDataObject *)func_?(TypeInfo__MVGameOptionDataObject);
        MVGameOptionDataObject::MVGameOptionDataObject__ctor
                  (this_63,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_63;
      case 0x88:
        this_64 = (MVObjectTransparency *)
                  func_?(
                                 TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency
                                 );
        WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                  (this_64,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_64;
      case 0x91:
        this_65 = (MVCameraSettings *)func_?(TypeInfo__MVCameraSettings);
        MVCameraSettings::MVCameraSettings__ctor(this_65,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_65;
      case 0x92:
        this_66 = (MVGravityCube *)func_?(TypeInfo__MVGravityCube);
        MVGravityCube::MVGravityCube__ctor(this_66,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_66;
      case 0x94:
        this_67 = (MVGameCoin *)func_?(TypeInfo__MVGameCoin);
        MVGameCoin::MVGameCoin__ctor(this_67,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_67;
      case 0x95:
        this_68 = (MVGameCoinChest *)func_?(TypeInfo__MVGameCoinChest);
        MVGameCoinChest::MVGameCoinChest__ctor(this_68,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_68;
      case 0x96:
        this_69 = (ThemeWorldObject *)func_?(TypeInfo__ThemeWorldObject);
        ThemeWorldObject::ThemeWorldObject__ctor(this_69,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      case 0x97:
        this_70 = (MVDoor *)func_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
        WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                  (this_70,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_70;
      case 0x98:
        this_71 = (MVDoorBlueprint *)
                  func_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
        WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                  (this_71,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_71;
      case 0x99:
        this_72 = (MVMeleeWeaponBase *)
                  func_?(
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBase
                                 );
        Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                  (this_72,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_72;
      case 0x9a:
        pMVar21 = (MVCostumeBaseBlueprint *)
                  func_?(
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBaseBlueprint
                                 );
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar21,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar21;
      case 0x9b:
        this_73 = (MVCostumeBase *)
                  func_?(
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBase
                                 );
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      case 0x9c:
        pMVar21 = (MVCostumeBaseBlueprint *)
                  func_?(
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBaseBlueprint
                                 );
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar21,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar21;
      case 0xa1:
        this_74 = (TeamEditor *)func_?(TypeInfo__TeamEditor);
        TeamEditor::TeamEditor__ctor(this_74,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_74;
      case 0xa2:
        this_75 = (TriggerCube *)func_?(TypeInfo__TriggerCube);
        TriggerCube::TriggerCube__ctor(this_75,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_75;
      case 0xa4:
        this_76 = (CollectTheItemCollectableInstance *)
                  func_?(TypeInfo__CollectTheItemCollectableInstance);
        CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                  (this_76,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_76;
      case 0xa5:
        this_77 = (ShootableButton *)func_?(TypeInfo__ShootableButton);
        ShootableButton::ShootableButton__ctor(this_77,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_77;
      case 0xa6:
        this_78 = (UseLever *)func_?(TypeInfo__UseLever);
        UseLever::UseLever__ctor(this_78,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_78;
      case 0xa7:
        this_79 = (CollectTheItemDropOff *)func_?(TypeInfo__CollectTheItemDropOff);
        CollectTheItemDropOff::CollectTheItemDropOff__ctor
                  (this_79,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_79;
      case 0xa8:
        this_80 = (CollectTheItemCollectable *)func_?(TypeInfo__CollectTheItemCollectable);
        CollectTheItemCollectable::CollectTheItemCollectable__ctor
                  (this_80,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_80;
      case 0xa9:
        this_81 = (CollectTheItem *)func_?(TypeInfo__CollectTheItem);
        CollectTheItem::CollectTheItem__ctor(this_81,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_81;
      case 0xaa:
        this_82 = (WindTurbine *)func_?(TypeInfo__WindTurbine);
        WindTurbine::WindTurbine__ctor(this_82,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_82;
      case 0xab:
        this_83 = (MVGlobalSoundEmitter *)func_?(TypeInfo__MVGlobalSoundEmitter);
        MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                  (this_83,this_84,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_83;
      }
    }
  }
  func_?(unaff_ESI.m_Index,pDVar42);
  pIVar33 = extraout_ECX;
code_?:
  uVar52 = func_?(unaff_ESI.m_Index,pIVar33);
  pbVar23 = (byte *)uVar52;
  uVar43 = (undefined3)((ulonglong)uVar52 >> 0x28);
  bVar36 = (char)((ulonglong)uVar52 >> 0x20) + extraout_ECX_00[0x10];
  *(uint *)(extraout_ECX_00 + CONCAT31(uVar43,bVar36) * 2) =
       *(uint *)(extraout_ECX_00 + CONCAT31(uVar43,bVar36) * 2) | unaff_ESI.m_Index;
  bVar39 = (byte)((ulonglong)uVar52 >> 0x28);
  *extraout_ECX_00 = *extraout_ECX_00 + bVar39;
  bVar10 = (byte)unaff_ESI.m_Index;
  bVar9 = bVar10 + 0x51;
  pbVar1 = pbVar23 + 4;
  bVar48 = CARRY1(*pbVar1,bVar36) || CARRY1(*pbVar1 + bVar36,0xae < bVar10);
  *pbVar1 = *pbVar1 + bVar36 + (0xae < bVar10);
  bVar13 = in_stack_53 + bVar9 + bVar48;
  cVar41 = extraout_ECX_00[0x10];
  ppMVar2 = &unaff_EBX->monitor;
  bVar37 = *(byte *)ppMVar2;
  bVar47 = (byte)((uint)unaff_EBX >> 8);
  *(byte *)ppMVar2 = *(char *)ppMVar2 + bVar47;
  bVar31 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar30 = (char)extraout_ECX_00 + bVar9 + CARRY1(bVar37,bVar47) + bVar31 + (0xae < bVar9);
  pbVar54 = (byte *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),bVar30);
  bVar49 = 0xae < (byte)(bVar10 + 0xa2);
  bVar10 = bVar10 - 0xd;
  uVar24 = CONCAT31((int3)((uint)unaff_ESI.m_Index >> 8),bVar10);
  bVar12 = bVar13 + bVar10;
  bVar37 = bVar12 + bVar49;
  bVar32 = pbVar54[0x10];
  *pbVar23 = *pbVar23 + bVar30;
  bVar11 = (byte)(uVar24 + 0x12851051);
  bVar46 = bVar37 + bVar11;
  bVar38 = bVar46 + (0xed7aefae < uVar24);
  bVar37 = bVar36 + cVar41 +
           (CARRY1(in_stack_53,bVar9) || CARRY1(in_stack_53 + bVar9,bVar48)) + bVar32 +
           (CARRY1(bVar13,bVar10) || CARRY1(bVar12,bVar49)) + pbVar54[0x10] +
           (CARRY1(bVar37,bVar11) || CARRY1(bVar46,0xed7aefae < uVar24));
  uVar24 = uVar24 + 0x12851051 ^ uRam_?;
  pbVar1 = (byte *)(uVar24 + 5);
  bVar13 = *pbVar1;
  bVar46 = (byte)unaff_EBX;
  *pbVar1 = *pbVar1 + bVar46;
  pcVar26 = (char *)(CONCAT31(uVar43,bVar37) + -0x38efaefb);
  *pcVar26 = *pcVar26 + (char)(uVar24 >> 8) +
             (CARRY1(unaff_retaddr,bVar47) || CARRY1(unaff_retaddr + bVar47,CARRY1(bVar13,bVar46)));
  iVar25 = uVar24 + 0x5ec1051;
  bVar48 = CARRY1(*pbVar54,bVar37) || CARRY1(*pbVar54 + bVar37,0xfa13efae < uVar24);
  *pbVar54 = *pbVar54 + bVar37 + (0xfa13efae < uVar24);
  bVar49 = CARRY1(*pbVar23,bVar39) || CARRY1(*pbVar23 + bVar39,bVar48);
  *pbVar23 = *pbVar23 + bVar39 + bVar48;
  pbVar1 = (byte *)((int)&unaff_EBX->monitor + 2);
  bVar48 = CARRY1(*pbVar1,bVar46) || CARRY1(*pbVar1 + bVar46,bVar49);
  *pbVar1 = *pbVar1 + bVar46 + bVar49;
  pbVar1 = (byte *)(uVar24 + 0xaafc6157);
  bVar12 = (byte)iVar25;
  bVar49 = CARRY1(*pbVar1,bVar12) || CARRY1(*pbVar1 + bVar12,bVar48);
  *pbVar1 = *pbVar1 + bVar12 + bVar48;
  bVar48 = CARRY1(bVar37,bVar30) || CARRY1(bVar37 + bVar30,bVar49);
  bVar37 = bVar37 + bVar30 + bVar49;
  bVar13 = bVar38 + bVar12;
  bVar49 = CARRY1(bVar38,bVar12) || CARRY1(bVar13,bVar48);
  bVar13 = bVar13 + bVar48;
  bVar38 = bVar37 + pbVar54[0x10];
  bVar48 = CARRY1(bVar37,pbVar54[0x10]) || CARRY1(bVar38,bVar49);
  bVar38 = bVar38 + bVar49;
  out((short)CONCAT31(uVar43,bVar38),iVar25);
  bVar37 = *(byte *)&this_84->klass;
  bVar32 = *(char *)&this_84->klass + bVar38;
  *(byte *)&this_84->klass = bVar32 + bVar48;
  bVar38 = bVar38 + pbVar54[0x10] +
           (CARRY1(bVar13,bVar12) ||
           CARRY1(bVar13 + bVar12,CARRY1(bVar37,bVar38) || CARRY1(bVar32,bVar48)));
  pcVar44 = (char *)CONCAT31(uVar43,bVar38);
  pbVar1 = (byte *)((int)&this_84[0x1f95ac].fields._count + uVar24 + 1);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar47;
  pbVar54 = pbVar54 + 7;
  bVar37 = (byte)((uint)iVar25 >> 8);
  bVar48 = CARRY1(*pbVar54,bVar37) || CARRY1(*pbVar54 + bVar37,CARRY1(bVar13,bVar47));
  *pbVar54 = *pbVar54 + bVar37 + CARRY1(bVar13,bVar47);
  pbVar1 = pbVar23 + -0x54efaef9;
  bVar49 = CARRY1(*pbVar1,bVar12) || CARRY1(*pbVar1 + bVar12,bVar48);
  *pbVar1 = *pbVar1 + bVar12 + bVar48;
  bVar48 = CARRY1(bVar12,bVar38) || CARRY1(bVar12 + bVar38,bVar49);
  bVar13 = bVar12 + bVar38 + bVar49;
  uVar34 = CONCAT22((short)((uint)extraout_ECX_00 >> 0x10),CONCAT11(bVar31 + bVar39 + bVar48,bVar30)
                   );
  *pcVar44 = *pcVar44 + bVar46 + (CARRY1(bVar31,bVar39) || CARRY1(bVar31 + bVar39,bVar48));
  *(byte *)(uVar34 + 0x10) = *(byte *)(uVar34 + 0x10) | bVar38;
  in_AF = 9 < (bVar13 & 0xf) | in_AF;
  uVar24 = CONCAT31((int3)((uint)iVar25 >> 8),bVar13 + in_AF * -6) & 0xffffff0f;
  pcVar26 = (char *)CONCAT22((short)(uVar24 >> 0x10),CONCAT11(bVar37 - in_AF,(char)uVar24));
  *(byte *)(uVar34 + 0x10) = *(byte *)(uVar34 + 0x10) | bVar38;
  pbVar1 = (byte *)(unaff_FS_OFFSET + uVar34 + 0x10);
  *pbVar1 = *pbVar1 | bVar38;
  *pcVar26 = *pcVar26 + bVar30;
  pcVar26 = pcVar26 + -0x5210510b;
  uVar24 = (uint)pcVar44 | *(uint *)(uVar34 + 0x10) | *(uint *)(uVar34 + 0x10);
  cVar41 = (char)((uint)pcVar26 >> 8);
  if (uVar24 == 0) {
    pbVar1 = (byte *)((int)&unaff_EBX[0xbc1105].klass + uVar34 + 1);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar46;
    uVar24 = (uint)(byte)(cVar41 + CARRY1(bVar13,bVar46)) << 8;
  }
  uVar24 = uVar24 | *(uint *)(uVar34 + 0x10);
  uVar34 = uVar34 | *(uint *)(uVar34 + uVar24 * 2);
  cVar40 = (char)(uVar24 >> 8);
  *pcVar26 = *pcVar26 + cVar40;
  bVar13 = (byte)pcVar26;
  bVar32 = (byte)uVar24;
  cVar4 = (byte)worldObjects + bVar32;
  *(char *)(uVar24 + 0xc) = *(char *)(uVar24 + 0xc) + bVar47 + CARRY1((byte)worldObjects,bVar32);
  cVar5 = (char)uVar34 + (char)(uVar34 >> 8);
  puVar35 = (uint *)CONCAT31((int3)(uVar34 >> 8),cVar5);
  uVar34 = CONCAT31((int3)(CONCAT22((short)((uint)pcVar26 >> 0x10),
                                    CONCAT11(cVar41 + (bVar13 | 0x51),bVar13)) >> 8),bVar13);
  *pbVar23 = *pbVar23 + cVar5;
  uVar27 = uVar34 | 0xd331051;
  pbVar1 = (byte *)(uVar27 + 0xd);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar46;
  bVar48 = CARRY1(worldObjects._1_1_,bVar47);
  bVar37 = worldObjects._1_1_ + bVar47;
  worldObjects._0_2_ = CONCAT11(bVar37 + CARRY1(bVar13,bVar46),cVar4);
  pcVar26 = (char *)((int)&this_84[-0x1bfa8fb].fields._freeCount + 1);
  bVar38 = (byte)uVar27;
  *pcVar26 = *pcVar26 + bVar38 + (bVar48 || CARRY1(bVar37,CARRY1(bVar13,bVar46)));
  puVar35[4] = puVar35[4] | uVar24;
  bVar48 = (*puVar35 & 1) != 0;
  *puVar35 = *puVar35 >> 1 | (uint)bVar48 << 0x1f;
  uVar45 = (undefined2)(uVar24 >> 0x10);
  cVar41 = cVar40 * '\x02' + bVar48;
  piVar16 = (int *)CONCAT22(uVar45,CONCAT11(cVar41,bVar32));
  puVar35[4] = puVar35[4] | (uint)piVar16;
  puVar6 = (uint *)((int)puVar35 - *piVar16);
  pbVar1 = (byte *)(uVar27 + 10);
  bVar48 = CARRY1(*pbVar1,bVar38) || CARRY1(*pbVar1 + bVar38,puVar35 < (uint *)*piVar16);
  *pbVar1 = *pbVar1 + bVar38 + (puVar35 < (uint *)*piVar16);
  bVar37 = (byte)(uVar27 >> 8);
  bVar49 = CARRY1(worldObjectData._2_1_,bVar37);
  bVar13 = worldObjectData._2_1_ + bVar37;
  worldObjectData._0_3_ = CONCAT12(bVar13 + bVar48,worldObjectData._0_2_);
  uVar24 = CONCAT22(uVar45,CONCAT11(cVar41 + bVar37 + (bVar49 || CARRY1(bVar13,bVar48)),bVar32)) |
           puVar6[4];
  pauVar28 = (undefined1 (*) [16])(uVar34 | 0x1fb71051);
  bVar13 = *pbVar23;
  bVar38 = (byte)pauVar28;
  puRam_? = puVar6;
  *pbVar23 = *pbVar23 + bVar38;
  bVar32 = (byte)((uint)puVar6 >> 8);
  bVar37 = *(char *)&unaff_EBX->klass + bVar32;
  bVar48 = CARRY1(*(byte *)&unaff_EBX->klass,bVar32) || CARRY1(bVar37,CARRY1(bVar13,bVar38));
  puRam_? = puVar6;
  uRam_? = in_CS;
  *(byte *)&unaff_EBX->klass = bVar37 + CARRY1(bVar13,bVar38);
  pbVar1 = *pauVar28 + 0xe;
  bVar12 = (byte)uVar24;
  bVar49 = CARRY1(*pbVar1,bVar12) || CARRY1(*pbVar1 + bVar12,bVar48);
  puRam_? = puVar6;
  uRam_? = in_CS;
  *pbVar1 = *pbVar1 + bVar12 + bVar48;
  bVar37 = (byte)puVar6;
  bVar50 = SCARRY1(bRam_?,bVar37);
  bVar13 = bRam_? + bVar37;
  bVar48 = CARRY1(bRam_?,bVar37) || CARRY1(bVar13,bVar49);
  bRam_? = bVar13 + bVar49;
  auVar51 = sqrtps(in_XMM2,*pauVar28);
  pDRame11050f1 = this_84;
  auVar51 = sqrtps(auVar51,*pauVar28);
  puRam_? = puVar6;
  if ((bVar50 != SCARRY1(bVar13,bVar49)) == (char)bRam_? < '\0') {
    pbVar1 = (byte *)((int)puVar6 + -0x39efaef1);
    bVar37 = (byte)((uint)pauVar28 >> 8);
    bVar13 = *pbVar1 + bVar37;
    bVar49 = CARRY1(*pbVar1,bVar37) || CARRY1(bVar13,bVar48);
    puRam_? = puVar6;
    *pbVar1 = bVar13 + bVar48;
    sqrtps(auVar51,*pauVar28);
    puVar35 = puVar6 + 4;
    bVar13 = (byte)*puVar35 + bVar12;
    bVar48 = CARRY1((byte)*puVar35,bVar12) || CARRY1(bVar13,bVar49);
    *(byte *)puVar35 = bVar13 + bVar49;
    *(byte *)&this_84->klass = *pbVar23;
    puVar35 = puVar6 + 4;
    bVar13 = (byte)*puVar35 + bVar12;
    bVar49 = CARRY1((byte)*puVar35,bVar12) || CARRY1(bVar13,bVar48);
    *(byte *)puVar35 = bVar13 + bVar48;
    puVar35 = puVar6 + 4;
    bVar13 = (byte)*puVar35 + bVar12;
    bVar48 = CARRY1((byte)*puVar35,bVar12) || CARRY1(bVar13,bVar49);
    *(byte *)puVar35 = bVar13 + bVar49;
    out((short)uVar24,bVar38);
    this_84 = (Dictionary_2_System_Object_System_Object_ *)((int)&this_84->klass + 1);
  }
  else {
    *(byte *)(puVar6 + 4) = (byte)puVar6[4] + bVar12 + bVar48;
    pauVar28 = (undefined1 (*) [16])((uint)pauVar28 ^ 0x5a105110);
    puVar35 = puVar6 + 4;
    bVar48 = CARRY1((byte)*puVar35,bVar12);
    uVar34 = *puVar35;
    *(byte *)puVar35 = (byte)*puVar35 + bVar12;
    if ((byte)*puVar35 != 0 && SCARRY1((byte)uVar34,bVar12) == (char)(byte)*puVar35 < '\0')
    goto code_?;
    pbVar1 = pauVar28[0x10c9105] + uVar24 + 1;
    bVar37 = (byte)((uint)pauVar28 >> 8);
    bVar13 = *pbVar1 + bVar37;
    bVar49 = CARRY1(*pbVar1,bVar37) || CARRY1(bVar13,bVar48);
    puRam_? = puVar6;
    *pbVar1 = bVar13 + bVar48;
    bVar37 = (byte)(uVar24 >> 8);
    bVar13 = bVar37 + bVar32;
    bVar48 = CARRY1(bVar37,bVar32) || CARRY1(bVar13,bVar49);
    uVar24 = CONCAT22((short)(uVar24 >> 0x10),CONCAT11(bVar13 + bVar49,bVar12));
    puRam_? = puVar6;
  }
  puVar35 = puVar6 + 4;
  uVar34 = *puVar35;
  bVar13 = (byte)*puVar35 + (byte)uVar24;
  *(byte *)puVar35 = bVar13 + bVar48;
  uVar34 = (uint)(CARRY1((byte)uVar34,(byte)uVar24) || CARRY1(bVar13,bVar48));
  bVar48 = CARRY4(uVar24,*puVar6) || CARRY4(uVar24 + *puVar6,uVar34);
  uVar24 = uVar24 + *puVar6 + uVar34;
code_?:
  bVar13 = (*pauVar28)[0];
  bVar37 = (*pauVar28)[0] + bVar47;
  (*pauVar28)[0] = bVar37 + bVar48;
  puVar35 = puVar6 + 4;
  uVar3 = (uint)(CARRY1(bVar13,bVar47) || CARRY1(bVar37,bVar48));
  uVar34 = *puVar35;
  uVar27 = *puVar35;
  *puVar35 = uVar27 + uVar24 + uVar3;
  puVar35 = puVar6 + 4;
  uVar34 = (uint)(CARRY4(uVar34,uVar24) || CARRY4(uVar27 + uVar24,uVar3));
  bVar48 = CARRY4(*puVar35,uVar24) || CARRY4(*puVar35 + uVar24,uVar34);
  *puVar35 = *puVar35 + uVar24 + uVar34;
  bVar13 = (byte)*puVar6 + 0x51;
  bVar49 = 0xae < (byte)*puVar6 || CARRY1(bVar13,bVar48);
  *(byte *)puVar6 = bVar13 + bVar48;
  pbVar1 = (byte *)((int)&this_84[-0x114fe50].fields._count + 1);
  bVar13 = *pbVar1;
  bVar38 = (byte)((uint)pauVar28 >> 8);
  bVar37 = *pbVar1 + bVar38;
  *pbVar1 = bVar37 + bVar49;
  puVar6[4] = puVar6[4] + uVar24 + (uint)(CARRY1(bVar13,bVar38) || CARRY1(bVar37,bVar49));
  pcVar7 = (code *)swi(1);
  pMVar29 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar29;
code_?:
  worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
  pOVar14 = (Object *)
            func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                            (int)&worldObjectData + 3);
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_84,
                         pOVar14,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar17 == (MVNetworkGame *)0x0) ||
      (pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar17,(MethodInfo *)0x0),
      pMVar18 == (MVLocalPlayer *)0x0)) ||
     (unaff_EBX = (String *)(pMVar18->fields)._._ActorNr_k__BackingField, unaff_ESI.m_Index == 0))
  goto code_?;
  pIVar33 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
      (TypeInfo__System__Int32->_0).element_class) {
    piVar16 = (int *)func_?(unaff_ESI.m_Index);
    if ((String *)*piVar16 != unaff_EBX) {
      this_60 = (MVBuildModeAvatarRemote *)func_?(TypeInfo__MVBuildModeAvatarRemote);
      MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                (this_60,this_84,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_60;
    }
    this_61 = (MVBuildModeAvatarLocal *)func_?(TypeInfo__MVBuildModeAvatarLocal);
    MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
              (this_61,this_84,worldObjects,(MethodInfo *)0x0);
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

