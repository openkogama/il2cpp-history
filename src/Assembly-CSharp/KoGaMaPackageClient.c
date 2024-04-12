
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
  cVar1 = (char)extraout_EDX;
  *(char *)(extraout_EDX + 0x10) = *(char *)(extraout_EDX + 0x10) + cVar1;
  *(char *)(extraout_EDX + 0x10) = *(char *)(extraout_EDX + 0x10) + cVar1;
  *(char *)(extraout_EDX + 0x10) = *(char *)(extraout_EDX + 0x10) + cVar1;
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
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
  this = worldObjectData;
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  pIVar3 = TypeInfo__System__Int32;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) {
code_?:
    func_?(TVar2.m_Index,pIVar3);
    goto code_?;
  }
  piVar4 = (int *)func_?(TVar2.m_Index);
  iVar5 = *piVar4;
  if (0xab < iVar5) {
    if (iVar5 == 0xb4) {
      this_00 = (TimeAttackFlag *)func_?(TypeInfo__TimeAttackFlag);
      TimeAttackFlag::TimeAttackFlag__ctor(this_00,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_00;
    }
    if (iVar5 == 0xb5) {
      this_01 = (MVGamePointChest *)func_?(TypeInfo__MVGamePointChest);
      MVGamePointChest::MVGamePointChest__ctor(this_01,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_01;
    }
code_?:
    pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar6,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  switch(iVar5) {
  case 0:
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_)
    ;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (int)&worldObjectData + 3);
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
      unaff_ESI.m_Index =
           (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                    HashtableFunctions_PrettyString(this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
      worldObjectData =
           (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::
      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                );
      pOVar1 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar1,(MethodInfo *)0x0);
    }
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_)
    ;
    pOVar1 = (Object *)func_?();
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      pIVar3 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar4 = (int *)func_?(TVar2.m_Index);
      unaff_ESI.m_Index = *piVar4;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar8 != (MVNetworkGame *)0x0) &&
         (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
         pMVar9 != (MVLocalPlayer *)0x0)) {
        if ((String *)unaff_ESI.m_Index == (String *)(pMVar9->fields)._._ActorNr_k__BackingField) {
          this_04 = (MVAvatarLocal *)func_?(TypeInfo__MVAvatarLocal);
          MVAvatarLocal::MVAvatarLocal__ctor(this_04,this,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_04;
        }
        if ((String *)unaff_ESI.m_Index != (String *)0xffffffff) {
          this_02 = (MVAvatarRemote *)func_?(TypeInfo__MVAvatarRemote);
          MVAvatarRemote::MVAvatarRemote__ctor(this_02,this,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_02;
        }
        this_03 = (MVPreviewAvatar *)func_?(TypeInfo__MVPreviewAvatar);
        MVPreviewAvatar::MVPreviewAvatar__ctor(this_03,this,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_03;
      }
    }
    break;
  case 1:
    this_05 = (MVCubeModelInstance *)func_?(TypeInfo__MVCubeModelInstance);
    MVCubeModelInstance::MVCubeModelInstance__ctor
              (this_05,this,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_05;
  case 2:
    this_06 = (MVPointLight *)func_?(TypeInfo__MVPointLight);
    MVPointLight::MVPointLight__ctor(this_06,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_06;
  case 3:
    this_07 = (MVTriggerBox *)func_?(TypeInfo__MVTriggerBox);
    MVTriggerBox::MVTriggerBox__ctor(this_07,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_07;
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
    pMVar10 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar10,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)pMVar10;
  case 8:
    this_08 = (MVCubeModelPrototypeTerrain *)func_?(TypeInfo__MVCubeModelPrototypeTerrain);
    MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
              (this_08,this,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_08;
  case 9:
    this_09 = (MVGroup *)func_?(TypeInfo__MVGroup);
    MVGroup::MVGroup__ctor_2(this_09,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_09;
  case 0xd:
    this_10 = (MVSoundEmitter *)func_?(TypeInfo__MVSoundEmitter);
    MVSoundEmitter::MVSoundEmitter__ctor(this_10,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_10;
  case 0x11:
    this_11 = (MVFlag *)func_?(TypeInfo__MVFlag);
    MVFlag::MVFlag__ctor(this_11,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_11;
  case 0x13:
    this_12 = (MVBattery *)func_?(TypeInfo__MVBattery);
    MVBattery::MVBattery__ctor(this_12,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_12;
  case 0x14:
    this_13 = (MVToggleBox *)func_?(TypeInfo__MVToggleBox);
    MVToggleBox::MVToggleBox__ctor(this_13,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_13;
  case 0x15:
    this_14 = (MVNegate *)func_?(TypeInfo__MVNegate);
    MVNegate::MVNegate__ctor(this_14,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_14;
  case 0x16:
    this_15 = (MVAnd *)func_?(TypeInfo__MVAnd);
    MVAnd::MVAnd__ctor(this_15,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_15;
  case 0x17:
    this_16 = (MVExplosives *)func_?(TypeInfo__MVExplosives);
    MVExplosives::MVExplosives__ctor(this_16,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_16;
  case 0x18:
    this_17 = (MVTextMsg *)func_?(TypeInfo__MVTextMsg);
    MVTextMsg::MVTextMsg__ctor(this_17,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_17;
  case 0x19:
    this_18 = (MVFire *)func_?(TypeInfo__MVFire);
    MVFire::MVFire__ctor(this_18,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_18;
  case 0x1a:
    this_19 = (MVSmoke *)func_?(TypeInfo__MVSmoke);
    MVSmoke::MVSmoke__ctor(this_19,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_19;
  case 0x1b:
    this_20 = (MVTimeTrigger *)func_?(TypeInfo__MVTimeTrigger);
    MVTimeTrigger::MVTimeTrigger__ctor(this_20,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_20;
  case 0x1c:
    this_21 = (MVTeleporter *)func_?(TypeInfo__MVTeleporter);
    MVTeleporter::MVTeleporter__ctor(this_21,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_21;
  case 0x1d:
    this_22 = (MVGoal *)func_?(TypeInfo__MVGoal);
    MVGoal::MVGoal__ctor(this_22,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_22;
  case 0x20:
    this_23 = (MVCubeModelFineGrainedTerrain *)
              func_?(TypeInfo__MVCubeModelFineGrainedTerrain);
    MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
              (this_23,this,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_23;
  case 0x21:
    this_24 = (MVPressurePlate *)func_?(TypeInfo__MVPressurePlate);
    MVPressurePlate::MVPressurePlate__ctor(this_24,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_24;
  case 0x25:
    this_25 = (MVPickupItemBase *)func_?(TypeInfo__MVPickupItemBase);
    MVPickupItemBase::MVPickupItemBase__ctor(this_25,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_25;
  case 0x26:
    this_26 = (MVSkybox *)func_?(TypeInfo__MVSkybox);
    MVSkybox::MVSkybox__ctor(this_26,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_26;
  case 0x27:
    this_27 = (MVSpawnPointRed *)func_?(TypeInfo__MVSpawnPointRed);
    MVSpawnPointRed::MVSpawnPointRed__ctor(this_27,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_27;
  case 0x28:
    this_28 = (MVSpawnPointGreen *)func_?(TypeInfo__MVSpawnPointGreen);
    MVSpawnPointGreen::MVSpawnPointGreen__ctor(this_28,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_28;
  case 0x29:
    this_29 = (MVSpawnPointYellow *)func_?(TypeInfo__MVSpawnPointYellow);
    MVSpawnPointYellow::MVSpawnPointYellow__ctor(this_29,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_29;
  case 0x2a:
    pMVar10 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar10,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)pMVar10;
  case 0x2b:
    this_30 = (MVObjectEnabler *)func_?(TypeInfo__MVObjectEnabler);
    MVObjectEnabler::MVObjectEnabler__ctor(this_30,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_30;
  case 0x2c:
    this_31 = (MVWaterPlane *)func_?(TypeInfo__MVWaterPlane);
    MVWaterPlane::MVWaterPlane__ctor(this_31,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_31;
  case 0x2d:
    worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_)
    ;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                             (int)&worldObjectData + 3);
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI.m_Index == 0) break;
    pDVar11 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      if (unaff_ESI.m_Index != 0) {
        pDVar11 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (unaff_ESI.m_Index,(Object *)pSVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          pIVar3 = (Int32__Class *)TypeInfo__MV__WorldObject__BlueprintType;
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
            puVar12 = (undefined1 *)func_?(TVar2.m_Index);
            switch(*puVar12) {
            case 7:
              this_32 = (MVMovable *)func_?(TypeInfo__MVMovable);
              MVMovable::MVMovable__ctor(this_32,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_32;
            case 8:
              this_33 = (MVBody *)func_?(TypeInfo__MVBody);
              MVBody::MVBody__ctor(this_33,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_33;
            case 9:
              this_34 = (MVTeleportGroup *)func_?(TypeInfo__MVTeleportGroup);
              MVTeleportGroup::MVTeleportGroup__ctor(this_34,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_34;
            case 10:
              this_35 = (MVSentryGunBlueprint *)func_?(TypeInfo__MVSentryGunBlueprint);
              MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                        (this_35,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_35;
            case 0xb:
              this_36 = (MVMovingPlatform *)func_?(TypeInfo__MVMovingPlatform);
              MVMovingPlatform::MVMovingPlatform__ctor(this_36,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_36;
            case 0xc:
              this_37 = (MVMovingPlatformGroup *)func_?(TypeInfo__MVMovingPlatformGroup);
              MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                        (this_37,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_37;
            case 0xd:
              this_38 = (MVRotator *)func_?(TypeInfo__MVRotator);
              MVRotator::MVRotator__ctor(this_38,this,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_38;
            case 0xe:
              goto code_?;
            default:
              pSVar6 = mscorlib.dll::System::Enum::Enum_ToString
                                  ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar6,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pSVar6,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)0x0;
            }
          }
          goto code_?;
        }
      }
      break;
    }
    goto code_?;
  case 0x2e:
    this_39 = (MVPulseBox *)func_?(TypeInfo__MVPulseBox);
    MVPulseBox::MVPulseBox__ctor(this_39,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_39;
  case 0x2f:
    this_40 = (MVRandomBox *)func_?(TypeInfo__MVRandomBox);
    MVRandomBox::MVRandomBox__ctor(this_40,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_40;
  case 0x30:
    this_41 = (MVSentryGun *)func_?(TypeInfo__MVSentryGun);
    MVSentryGun::MVSentryGun__ctor(this_41,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_41;
  case 0x31:
    this_42 = (MVCollectible *)func_?(TypeInfo__MVCollectible);
    MVCollectible::MVCollectible__ctor(this_42,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_42;
  case 0x32:
    this_43 = (MVMovingPlatformNode *)func_?(TypeInfo__MVMovingPlatformNode);
    MVMovingPlatformNode::MVMovingPlatformNode__ctor(this_43,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_43;
  case 0x33:
    this_44 = (MVWaterPlanePreset *)func_?(TypeInfo__MVWaterPlanePreset);
    MVWaterPlanePreset::MVWaterPlanePreset__ctor(this_44,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_44;
  case 0x34:
    this_45 = (MVPointLightPreset *)func_?(TypeInfo__MVPointLightPreset);
    MVPointLightPreset::MVPointLightPreset__ctor(this_45,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_45;
  case 0x35:
code_?:
    this_46 = (MVGhostInstance *)func_?(TypeInfo__MVGhostInstance);
    MVGhostInstance::MVGhostInstance__ctor(this_46,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_46;
  case 0x36:
    this_47 = (MVCubeGun *)func_?(TypeInfo__MVCubeGun);
    MVCubeGun::MVCubeGun__ctor(this_47,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_47;
  case 0x37:
    this_48 = (MVCheckpoint *)func_?(TypeInfo__MVCheckpoint);
    MVCheckpoint::MVCheckpoint__ctor(this_48,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_48;
  case 0x38:
    this_49 = (MVHoverCraft *)func_?(TypeInfo__MVHoverCraft);
    MVHoverCraft::MVHoverCraft__ctor(this_49,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_49;
  case 0x39:
    this_50 = (MVWorldObjectSpawnerVehicle *)func_?(TypeInfo__MVWorldObjectSpawnerVehicle);
    MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
              (this_50,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_50;
  case 0x3b:
    this_51 = (MVJetPack *)func_?(TypeInfo__MVJetPack);
    MVJetPack::MVJetPack__ctor(this_51,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_51;
  case 0x3c:
    this_52 = (MVRoundCube *)func_?(TypeInfo__MVRoundCube);
    MVRoundCube::MVRoundCube__ctor(this_52,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_52;
  case 0x3d:
    this_53 = (MVAdvancedGhost *)func_?(TypeInfo__MVAdvancedGhost);
    MVAdvancedGhost::MVAdvancedGhost__ctor(this_53,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_53;
  case 0x3e:
    this_54 = (MVHamsterWheel *)func_?(TypeInfo__MVHamsterWheel);
    MVHamsterWheel::MVHamsterWheel__ctor(this_54,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_54;
  case 0x3f:
    this_55 = (MVKillLimit *)func_?(TypeInfo__MVKillLimit);
    MVKillLimit::MVKillLimit__ctor(this_55,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_55;
  case 0x40:
    this_56 = (MVOculusKillLimit *)func_?(TypeInfo__MVOculusKillLimit);
    MVOculusKillLimit::MVOculusKillLimit__ctor(this_56,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_56;
  case 0x41:
    this_57 = (MVCountingCube *)func_?(TypeInfo__MVCountingCube);
    MVCountingCube::MVCountingCube__ctor(this_57,this,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_57;
  default:
    switch(iVar5) {
    case 0x76:
      this_58 = (MVVehicleEnergy *)
                func_?(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
      WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                (this_58,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_58;
    case 0x77:
      this_59 = (MVWorldObjectSpawnerVehicleEnergy *)
                func_?(
                               TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                               );
      WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
      MVWorldObjectSpawnerVehicleEnergy__ctor(this_59,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_59;
    default:
      goto code_?;
    case 0x82:
      this_60 = (MVGamePoint *)func_?(TypeInfo__MVGamePoint);
      MVGamePoint::MVGamePoint__ctor(this_60,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_60;
    case 0x83:
      this_61 = (MVWorldObjectClient *)func_?(TypeInfo__MVGamePassProgressionDataObject);
      MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                ((MVGamePassProgressionDataObject *)this_61,this,worldObjects,(MethodInfo *)0x0);
      return this_61;
    case 0x85:
      goto code_?;
    case 0x86:
      this_64 = (MVAvatarSpawnRoleCreator *)func_?(TypeInfo__MVAvatarSpawnRoleCreator);
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                (this_64,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_64;
    case 0x87:
      this_65 = (MVGameOptionDataObject *)func_?(TypeInfo__MVGameOptionDataObject);
      MVGameOptionDataObject::MVGameOptionDataObject__ctor
                (this_65,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_65;
    case 0x88:
      this_66 = (MVObjectTransparency *)
                func_?(
                               TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency
                               );
      WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                (this_66,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_66;
    case 0x91:
      this_67 = (MVCameraSettings *)func_?(TypeInfo__MVCameraSettings);
      MVCameraSettings::MVCameraSettings__ctor(this_67,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_67;
    case 0x92:
      this_68 = (MVGravityCube *)func_?(TypeInfo__MVGravityCube);
      MVGravityCube::MVGravityCube__ctor(this_68,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_68;
    case 0x94:
      this_69 = (MVGameCoin *)func_?(TypeInfo__MVGameCoin);
      MVGameCoin::MVGameCoin__ctor(this_69,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_69;
    case 0x95:
      this_70 = (MVGameCoinChest *)func_?(TypeInfo__MVGameCoinChest);
      MVGameCoinChest::MVGameCoinChest__ctor(this_70,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_70;
    case 0x96:
      this_71 = (ThemeWorldObject *)func_?(TypeInfo__ThemeWorldObject);
      ThemeWorldObject::ThemeWorldObject__ctor(this_71,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_71;
    case 0x97:
      this_72 = (MVDoor *)func_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
      WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor(this_72,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_72;
    case 0x98:
      this_73 = (MVDoorBlueprint *)
                func_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
      WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                (this_73,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_73;
    case 0x99:
      this_74 = (MVMeleeWeaponBase *)
                func_?(
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBase
                               );
      Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                (this_74,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_74;
    case 0x9a:
      pMVar13 = (MVCostumeBaseBlueprint *)
                func_?(
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBaseBlueprint
                               );
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar13,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar13;
    case 0x9b:
      this_75 = (MVCostumeBase *)
                func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBase)
      ;
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                (this_75,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_75;
    case 0x9c:
      pMVar13 = (MVCostumeBaseBlueprint *)
                func_?(
                               TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBaseBlueprint
                               );
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar13,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar13;
    case 0xa1:
      this_76 = (TeamEditor *)func_?(TypeInfo__TeamEditor);
      TeamEditor::TeamEditor__ctor(this_76,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_76;
    case 0xa2:
      this_77 = (TriggerCube *)func_?(TypeInfo__TriggerCube);
      TriggerCube::TriggerCube__ctor(this_77,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_77;
    case 0xa4:
      this_78 = (CollectTheItemCollectableInstance *)
                func_?(TypeInfo__CollectTheItemCollectableInstance);
      CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                (this_78,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_78;
    case 0xa5:
      this_79 = (ShootableButton *)func_?(TypeInfo__ShootableButton);
      ShootableButton::ShootableButton__ctor(this_79,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_79;
    case 0xa6:
      this_80 = (UseLever *)func_?(TypeInfo__UseLever);
      UseLever::UseLever__ctor(this_80,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_80;
    case 0xa7:
      this_81 = (CollectTheItemDropOff *)func_?(TypeInfo__CollectTheItemDropOff);
      CollectTheItemDropOff::CollectTheItemDropOff__ctor
                (this_81,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_81;
    case 0xa8:
      this_82 = (CollectTheItemCollectable *)func_?(TypeInfo__CollectTheItemCollectable);
      CollectTheItemCollectable::CollectTheItemCollectable__ctor
                (this_82,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_82;
    case 0xa9:
      this_83 = (CollectTheItem *)func_?(TypeInfo__CollectTheItem);
      CollectTheItem::CollectTheItem__ctor(this_83,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_83;
    case 0xaa:
      this_84 = (WindTurbine *)func_?(TypeInfo__WindTurbine);
      WindTurbine::WindTurbine__ctor(this_84,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_84;
    case 0xab:
      this_85 = (MVGlobalSoundEmitter *)func_?(TypeInfo__MVGlobalSoundEmitter);
      MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor(this_85,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_85;
    }
  }
code_?:
  func_?();
  pDVar11 = extraout_EDX;
code_?:
  func_?(unaff_ESI.m_Index,pDVar11);
  pIVar3 = extraout_ECX;
code_?:
  func_?(unaff_ESI.m_Index,pIVar3);
  *(byte *)(extraout_EDX_00 + 0x10) = *(byte *)(extraout_EDX_00 + 0x10) | (byte)extraout_EDX_00;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_?:
  worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                           (int)&worldObjectData + 3);
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar8 != (MVNetworkGame *)0x0) &&
      (pMVar9 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
      pMVar9 != (MVLocalPlayer *)0x0)) &&
     (iVar5 = (pMVar9->fields)._._ActorNr_k__BackingField, unaff_ESI.m_Index != 0)) {
    pIVar3 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar4 = (int *)func_?(unaff_ESI.m_Index);
      if (*piVar4 != iVar5) {
        this_62 = (MVBuildModeAvatarRemote *)func_?(TypeInfo__MVBuildModeAvatarRemote);
        MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                  (this_62,this,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_62;
      }
      this_63 = (MVBuildModeAvatarLocal *)func_?(TypeInfo__MVBuildModeAvatarLocal);
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                (this_63,this,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_63;
    }
    goto code_?;
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

