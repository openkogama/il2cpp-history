
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
  iVar2 = func_?();
  bVar3 = CARRY1(*extraout_ECX,unaff_BL) || CARRY1(*extraout_ECX + unaff_BL,bVar1);
  *extraout_ECX = *extraout_ECX + unaff_BL + bVar1;
  pbVar4 = (byte *)((int)&((Dictionary_2_System_Object_System_Object_ *)this)->monitor + 2);
  bVar1 = *pbVar4;
  bVar5 = (byte)((uint)extraout_ECX >> 8);
  bVar6 = *pbVar4 + bVar5;
  *pbVar4 = bVar6 + bVar3;
  *(char *)(iVar2 + -0x33efaefa) =
       *(char *)(iVar2 + -0x33efaefa) + (char)iVar2 + (CARRY1(bVar1,bVar5) || CARRY1(bVar6,bVar3));
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
  byte *pbVar1;
  Il2CppType *pIVar2;
  Il2CppType *pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  Dictionary_2_System_Object_System_Object___Class *pDVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  Object *pOVar10;
  TextureId TVar11;
  int *piVar12;
  TimeAttackFlag *this;
  MVGamePointChest *this_00;
  MVNetworkGame *pMVar13;
  MVLocalPlayer *pMVar14;
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
  MVSpawnPointBlue *pMVar15;
  MVObjectEnabler *this_29;
  MVWaterPlane *this_30;
  undefined1 *puVar16;
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
  MVWorldObjectClient *this_60;
  MVBuildModeAvatarRemote *this_61;
  MVBuildModeAvatarLocal *this_62;
  MVAvatarSpawnRoleCreator *this_63;
  MVGameOptionDataObject *this_64;
  MVObjectTransparency *this_65;
  MVCameraSettings *this_66;
  MVGravityCube *this_67;
  MVGameCoin *this_68;
  MVGameCoinChest *this_69;
  ThemeWorldObject *this_70;
  MVDoor *this_71;
  MVDoorBlueprint *this_72;
  MVMeleeWeaponBase *this_73;
  MVCostumeBase *this_74;
  MVCostumeBaseBlueprint *pMVar17;
  TeamEditor *this_75;
  TriggerCube *this_76;
  CollectTheItemCollectableInstance *this_77;
  ShootableButton *this_78;
  UseLever *this_79;
  CollectTheItemDropOff *this_80;
  CollectTheItemCollectable *this_81;
  CollectTheItem *this_82;
  WindTurbine *this_83;
  MVGlobalSoundEmitter *this_84;
  String *pSVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  byte bVar25;
  byte bVar26;
  Int32__Class *extraout_ECX;
  Int32__Class *pIVar27;
  byte *extraout_ECX_00;
  undefined2 uVar28;
  int iVar29;
  byte extraout_DL;
  byte bVar30;
  int iVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  String *unaff_EBX;
  undefined1 *puVar36;
  TextureId unaff_ESI;
  undefined2 in_SS;
  undefined2 in_DS;
  char cVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  float10 extraout_ST0;
  undefined1 in_XMM2 [16];
  WorldObjectDataParameters__Enum__Class *pWVar41;
  Dictionary_2_System_Object_System_Object_ *pDVar42;
  byte *pbVar43;
  BlueprintData__Enum__Class *in_stack_44;
  WorldObjectDataParameters__Enum__Class *in_stack_45;
  byte *pbVar46;
  
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
    func_?(&TypeInfo__MVAvatarRemote);
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
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
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
    func_?(&TypeInfo__MVHamsterWheel);
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
    func_?(&TypeInfo__MVPointLight);
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
    func_?(&TypeInfo__MVTeleportGroup);
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
    func_?(&TypeInfo__UseLever);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pWVar41 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  pOVar10 = (Object *)func_?();
  uVar28 = (undefined2)((uint)pWVar41 >> 0x10);
  cVar37 = '\0';
  if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      worldObjectData,pOVar10,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  uVar28 = (undefined2)((uint)pOVar10 >> 0x10);
  cVar37 = '\0';
  if (TVar11.m_Index == 0) goto code_?;
  pIVar4 = (TypeInfo__System__Int32->_0).element_class;
  cVar37 = *(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) < pIVar4;
  if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) != pIVar4) {
code_?:
    func_?();
    goto code_?;
  }
  piVar12 = (int *)func_?();
  iVar31 = *piVar12;
  if (0xab < iVar31) {
    if (iVar31 == 0xb4) {
      this = (TimeAttackFlag *)func_?();
      TimeAttackFlag::TimeAttackFlag__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this;
    }
    if (iVar31 == 0xb5) {
      this_00 = (MVGamePointChest *)func_?();
      MVGamePointChest::MVGamePointChest__ctor
                (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_00;
    }
code_?:
    pSVar18 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar18 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar18,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar18,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  switch(iVar31) {
  case 0:
    pOVar10 = (Object *)func_?();
    pDVar42 = worldObjectData;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       worldObjectData,pOVar10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    uVar28 = (undefined2)((uint)pDVar42 >> 0x10);
    if (bVar8 == 0) {
      unaff_ESI.m_Index =
           (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                    HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
      pOVar10 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::
      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)worldObjectData,
                 pOVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                );
      pOVar10 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar10,(MethodInfo *)0x0);
    }
    in_stack_44 = (BlueprintData__Enum__Class *)&UNK_?;
    in_stack_45 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
    pOVar10 = (Object *)func_?();
    TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        worldObjectData,pOVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    cVar37 = '\0';
    if (TVar11.m_Index != 0) {
      pIVar4 = (TypeInfo__System__Int32->_0).element_class;
      cVar37 = *(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) < pIVar4;
      if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) != pIVar4) goto code_?;
      piVar12 = (int *)func_?();
      uVar28 = 0;
      unaff_ESI.m_Index = *piVar12;
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar37 = '\0';
      if (pMVar13 != (MVNetworkGame *)0x0) {
        uVar28 = 0x1051;
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0);
        cVar37 = '\0';
        if (pMVar14 != (MVLocalPlayer *)0x0) {
          if ((String *)unaff_ESI.m_Index == (String *)(pMVar14->fields)._._ActorNr_k__BackingField)
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
    }
    break;
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
    pMVar15 = (MVSpawnPointBlue *)func_?();
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar15,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)pMVar15;
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
    MVPressurePlate::MVPressurePlate__ctor(this_23,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_23;
  case 0x25:
    this_24 = (MVPickupItemBase *)func_?();
    MVPickupItemBase::MVPickupItemBase__ctor(this_24,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)this_24;
  case 0x26:
    this_25 = (MVSkybox *)func_?();
    MVSkybox::MVSkybox__ctor(this_25,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_25;
  case 0x27:
    this_26 = (MVSpawnPointRed *)func_?();
    MVSpawnPointRed::MVSpawnPointRed__ctor(this_26,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
    pMVar15 = (MVSpawnPointBlue *)func_?();
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar15,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)pMVar15;
  case 0x2b:
    this_29 = (MVObjectEnabler *)func_?();
    MVObjectEnabler::MVObjectEnabler__ctor(this_29,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_29;
  case 0x2c:
    this_30 = (MVWaterPlane *)func_?();
    MVWaterPlane::MVWaterPlane__ctor(this_30,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_30;
  case 0x2d:
    pOVar10 = (Object *)func_?();
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           worldObjectData,pOVar10,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    cVar37 = '\0';
    if (unaff_ESI.m_Index == 0) break;
    cVar37 = *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if ((!(bool)cVar37) &&
       (pDVar6 = *(Dictionary_2_System_Object_System_Object___Class **)
                  (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                  (uint)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment * 4),
       cVar37 = pDVar6 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar6 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
       ) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      in_stack_45 = (WorldObjectDataParameters__Enum__Class *)0xffffffff;
      in_stack_44 = TypeInfo__MV__Common__BlueprintData;
      unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      cVar37 = '\0';
      if (unaff_ESI.m_Index != 0) {
        cVar37 = '\x01';
        if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (pDVar6 = *(Dictionary_2_System_Object_System_Object___Class **)
                      (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                      (uint)(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment * 4),
           cVar37 = pDVar6 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar6 != 
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        pSVar18 = unaff_EBX;
        TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (unaff_ESI.m_Index,(Object *)unaff_EBX,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar28 = (undefined2)((uint)pSVar18 >> 0x10);
        cVar37 = '\0';
        if (TVar11.m_Index != 0) {
          pIVar4 = (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class;
          cVar37 = *(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) < pIVar4;
          if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) == pIVar4) {
            puVar16 = (undefined1 *)func_?();
            switch(*puVar16) {
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
              pSVar18 = mscorlib.dll::System::Enum::Enum_ToString
                                  ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
              pSVar18 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar18,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pSVar18,(MethodInfo *)0x0);
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
    MVGhostInstance::MVGhostInstance__ctor(this_45,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
    MVAdvancedGhost::MVAdvancedGhost__ctor(this_52,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
    switch(iVar31) {
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
      this_60 = (MVWorldObjectClient *)func_?();
      MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                ((MVGamePassProgressionDataObject *)this_60,worldObjectData,worldObjects,
                 (MethodInfo *)0x0);
      return this_60;
    case 0x85:
      goto code_?;
    case 0x86:
      this_63 = (MVAvatarSpawnRoleCreator *)func_?();
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                (this_63,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_63;
    case 0x87:
      this_64 = (MVGameOptionDataObject *)func_?();
      MVGameOptionDataObject::MVGameOptionDataObject__ctor
                (this_64,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_64;
    case 0x88:
      this_65 = (MVObjectTransparency *)func_?();
      WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                (this_65,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_65;
    case 0x91:
      this_66 = (MVCameraSettings *)func_?();
      MVCameraSettings::MVCameraSettings__ctor
                (this_66,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_66;
    case 0x92:
      this_67 = (MVGravityCube *)func_?();
      MVGravityCube::MVGravityCube__ctor(this_67,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_67;
    case 0x94:
      this_68 = (MVGameCoin *)func_?();
      MVGameCoin::MVGameCoin__ctor(this_68,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_68;
    case 0x95:
      this_69 = (MVGameCoinChest *)func_?();
      MVGameCoinChest::MVGameCoinChest__ctor(this_69,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_69;
    case 0x96:
      this_70 = (ThemeWorldObject *)func_?();
      ThemeWorldObject::ThemeWorldObject__ctor
                (this_70,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_70;
    case 0x97:
      this_71 = (MVDoor *)func_?();
      WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                (this_71,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_71;
    case 0x98:
      this_72 = (MVDoorBlueprint *)func_?();
      WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                (this_72,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_72;
    case 0x99:
      this_73 = (MVMeleeWeaponBase *)func_?();
      Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_73;
    case 0x9a:
      pMVar17 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar17,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar17;
    case 0x9b:
      this_74 = (MVCostumeBase *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                (this_74,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_74;
    case 0x9c:
      pMVar17 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar17,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar17;
    case 0xa1:
      this_75 = (TeamEditor *)func_?();
      TeamEditor::TeamEditor__ctor(this_75,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_75;
    case 0xa2:
      this_76 = (TriggerCube *)func_?();
      TriggerCube::TriggerCube__ctor(this_76,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_76;
    case 0xa4:
      this_77 = (CollectTheItemCollectableInstance *)func_?();
      CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                (this_77,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_77;
    case 0xa5:
      this_78 = (ShootableButton *)func_?();
      ShootableButton::ShootableButton__ctor(this_78,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_78;
    case 0xa6:
      this_79 = (UseLever *)func_?();
      UseLever::UseLever__ctor(this_79,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_79;
    case 0xa7:
      this_80 = (CollectTheItemDropOff *)func_?();
      CollectTheItemDropOff::CollectTheItemDropOff__ctor
                (this_80,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_80;
    case 0xa8:
      this_81 = (CollectTheItemCollectable *)func_?();
      CollectTheItemCollectable::CollectTheItemCollectable__ctor
                (this_81,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_81;
    case 0xa9:
      this_82 = (CollectTheItem *)func_?();
      CollectTheItem::CollectTheItem__ctor(this_82,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_82;
    case 0xaa:
      this_83 = (WindTurbine *)func_?();
      WindTurbine::WindTurbine__ctor(this_83,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_83;
    case 0xab:
      this_84 = (MVGlobalSoundEmitter *)func_?();
      MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                (this_84,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_84;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pIVar27 = extraout_ECX;
code_?:
  pauVar19 = (undefined1 (*) [16])func_?();
  extraout_ECX_00[-0x2eefaef1] =
       extraout_ECX_00[-0x2eefaef1] + (char)((uint)extraout_ECX_00 >> 8) + cVar37;
  sqrtps(in_XMM2,*pauVar19);
  bVar32 = (byte)unaff_EBX;
  bVar38 = CARRY1(bRam_?,bVar32);
  bRam_? = bRam_? + bVar32;
  pbVar43 = (byte *)CONCAT22(uVar28,in_DS);
  bVar39 = CARRY1(bRam_?,bVar32) || CARRY1(bRam_? + bVar32,bVar38);
  bRam_? = bRam_? + bVar32 + bVar38;
  pbVar1 = extraout_ECX_00 + 0x10;
  bVar38 = CARRY1(*pbVar1,extraout_DL) || CARRY1(*pbVar1 + extraout_DL,bVar39);
  *pbVar1 = *pbVar1 + extraout_DL + bVar39;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  bVar34 = (byte)pIVar27;
  bVar32 = *(char *)&pIVar2->data + bVar34;
  bVar39 = CARRY1(*(byte *)&pIVar2->data,bVar34) || CARRY1(bVar32,bVar38);
  *(byte *)&pIVar2->data = bVar32 + bVar38;
  (in_stack_45->_0).image = (Il2CppImage *)pIVar27;
  bVar30 = (byte)unaff_ESI.m_Index;
  bVar38 = CARRY1(bRam_?,bVar30) || CARRY1(bRam_? + bVar30,bVar39);
  bRam_? = bRam_? + bVar30 + bVar39;
  bVar39 = CARRY1(bRam_?,bVar30) || CARRY1(bRam_? + bVar30,bVar38);
  bRam_? = bRam_? + bVar30 + bVar38;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  bVar32 = *(byte *)&pIVar2->data;
  bVar9 = *(char *)&pIVar2->data + bVar34;
  *(byte *)&pIVar2->data = bVar9 + bVar39;
  puVar16 = (undefined1 *)(uint)(CARRY1(bVar32,bVar34) || CARRY1(bVar9,bVar39));
  puVar36 = (undefined1 *)((int)&in_stack_45[-0x140038]._0.fields + 2);
  bVar38 = in_stack_45 < (WorldObjectDataParameters__Enum__Class *)0x1d10511e ||
           puVar36 < puVar16;
  uVar20 = (int)puVar36 - (int)puVar16;
  bVar39 = CARRY1(bRam_?,bVar30) || CARRY1(bRam_? + bVar30,bVar38);
  bRam_? = bRam_? + bVar30 + bVar38;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  bVar32 = *(byte *)&pIVar2->data;
  bVar9 = *(char *)&pIVar2->data + bVar34;
  *(byte *)&pIVar2->data = bVar9 + bVar39;
  uVar7 = (uint)(CARRY1(bVar32,bVar34) || CARRY1(bVar9,bVar39));
  uVar21 = uVar20 + 0x7efaee2;
  bVar38 = uVar20 < 0xf810511e || uVar21 < uVar7;
  uVar21 = uVar21 - uVar7;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  bVar32 = *(byte *)&pIVar2->data;
  bVar9 = *(char *)&pIVar2->data + bVar34;
  *(byte *)&pIVar2->data = bVar9 + bVar38;
  uVar7 = (uint)(CARRY1(bVar32,bVar34) || CARRY1(bVar9,bVar38));
  uVar20 = uVar21 + 0xbdefaeef;
  uVar22 = uVar20 - uVar7;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  uVar7 = (uint)(uVar21 < 0x42105111 || uVar20 < uVar7);
  pvVar5 = (pIVar2->data).dummy;
  uVar21 = (int)&(pIVar27->_0).image + (int)(pIVar2->data).dummy;
  (pIVar2->data).typeHandle = (Il2CppMetadataTypeHandle)(uVar21 + uVar7);
  puVar24 = (uint *)segment(in_DS,(short)unaff_ESI.m_Index + (short)extraout_ECX_00 + 0x10);
  uVar7 = (uint)(CARRY4((uint)pvVar5,(uint)pIVar27) || CARRY4(uVar21,uVar7));
  uVar21 = (int)&(pIVar27->_0).image + *puVar24;
  bVar38 = CARRY4(*puVar24,(uint)pIVar27) || CARRY4(uVar21,uVar7);
  *puVar24 = uVar21 + uVar7;
  *(undefined2 *)&(in_stack_44->_0).image = in_SS;
  pbVar1 = (byte *)((int)&in_stack_44[-0x1cdc00].vtable.System_IConvertible_ToByte.method + 1)
  ;
  bVar32 = *pbVar1;
  bVar25 = (byte)((uint)pIVar27 >> 8);
  bVar9 = *pbVar1 + bVar25;
  *pbVar1 = bVar9 + bVar38;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  uVar7 = (uint)(CARRY1(bVar32,bVar25) || CARRY1(bVar9,bVar38));
  pvVar5 = (pIVar2->data).dummy;
  uVar21 = (int)&(pIVar27->_0).image + (int)(pIVar2->data).dummy;
  (pIVar2->data).typeHandle = (Il2CppMetadataTypeHandle)(uVar21 + uVar7);
  pIVar2 = &(in_stack_44->_0).byval_arg;
  (pIVar2->data).dummy =
       (void *)((int)(pIVar2->data).dummy +
               (int)&(pIVar27->_0).image +
               (uint)(CARRY4((uint)pvVar5,(uint)pIVar27) || CARRY4(uVar21,uVar7)));
  *(byte *)&(pIVar27->_0).image = *(byte *)&(pIVar27->_0).image & bVar34;
  pbVar1 = extraout_ECX_00 + 0x12;
  bVar32 = *pbVar1;
  bVar9 = (byte)uVar22;
  *pbVar1 = *pbVar1 + bVar9;
  pbVar1 = (byte *)((int)&(pIVar27->_0).byval_arg.data + 2);
  bVar26 = (byte)((uint)in_stack_44 >> 8);
  bVar38 = CARRY1(*pbVar1,bVar26) || CARRY1(*pbVar1 + bVar26,CARRY1(bVar32,bVar9));
  *pbVar1 = *pbVar1 + bVar26 + CARRY1(bVar32,bVar9);
  bVar39 = CARRY1(bRam_?,bVar30) || CARRY1(bRam_? + bVar30,bVar38);
  bRam_? = bRam_? + bVar30 + bVar38;
  pbVar1 = extraout_ECX_00 + -0x48efaeee;
  bVar25 = (byte)in_stack_44;
  bVar38 = CARRY1(*pbVar1,bVar25) || CARRY1(*pbVar1 + bVar25,bVar39);
  *pbVar1 = *pbVar1 + bVar25 + bVar39;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  bVar32 = bVar34 + *(char *)&pIVar2->data;
  uVar23 = (uint)(CARRY1(bVar34,*(byte *)&pIVar2->data) || CARRY1(bVar32,bVar38));
  bVar39 = uVar22 < 0x1d10511e || uVar22 + 0xe2efaee2 < uVar23;
  uVar23 = (uVar22 + 0xe2efaee2) - uVar23;
  bVar40 = CARRY1(bRam_?,bVar30);
  bVar30 = bRam_? + bVar30;
  bRam_? = bVar30 + bVar39;
  uVar20 = CONCAT31((int3)((uint)pIVar27 >> 8),
                    bVar32 + bVar38 + *(char *)&(in_stack_44->_0).byval_arg.data +
                    (bVar40 || CARRY1(bVar30,bVar39)));
  bVar38 = CARRY4((uint)((String *)unaff_ESI.m_Index)->klass,uVar20);
  ((String *)unaff_ESI.m_Index)->klass =
       (String__Class *)((int)&(((String *)unaff_ESI.m_Index)->klass->_0).image + uVar20);
  bVar32 = *pbVar43;
  bVar34 = (byte)(uVar23 >> 8);
  bVar9 = *pbVar43;
  *pbVar43 = bVar9 + bVar34 + bVar38;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  uVar7 = (uint)(CARRY1(bVar32,bVar34) || CARRY1(bVar9 + bVar34,bVar38));
  uVar21 = uVar20 + (int)(pIVar2->data).dummy;
  uVar22 = uVar21 + uVar7;
  puVar36 = &(((String *)(unaff_ESI.m_Index + -0x10))->fields).field_0x7;
  pIVar3 = &(in_stack_44->_0).byval_arg;
  uVar7 = (uint)(CARRY4(uVar20,(uint)(pIVar2->data).dummy) || CARRY4(uVar21,uVar7));
  uVar21 = uVar22 + (int)(pIVar3->data).dummy;
  bVar38 = CARRY4(uVar22,(uint)(pIVar3->data).dummy) || CARRY4(uVar21,uVar7);
  uVar21 = uVar21 + uVar7;
  pbVar1 = extraout_ECX_00 + -0x45efaeed;
  bVar32 = *pbVar1;
  bVar9 = *pbVar1 + (byte)uVar21;
  *pbVar1 = bVar9 + bVar38;
  pIVar2 = &(in_stack_44->_0).byval_arg;
  uVar7 = (uint)(CARRY1(bVar32,(byte)uVar21) || CARRY1(bVar9,bVar38));
  uVar20 = uVar21 + (int)(pIVar2->data).dummy;
  bVar38 = CARRY4(uVar21,(uint)(pIVar2->data).dummy) || CARRY4(uVar20,uVar7);
  iVar31 = uVar20 + uVar7;
  *(short *)puVar36 = (short)ROUND(extraout_ST0);
  pbVar1 = &stack0xffffffb0 + iVar31;
  bVar32 = *pbVar1 + (byte)uVar23;
  bVar39 = CARRY1(*pbVar1,(byte)uVar23) || CARRY1(bVar32,bVar38);
  *pbVar1 = bVar32 + bVar38;
  pbVar1 = (byte *)((int)&((String *)(unaff_ESI.m_Index + 0x10))->monitor + 1);
  bVar35 = (byte)((uint)puVar36 >> 8);
  bVar38 = CARRY1(*pbVar1,bVar35) || CARRY1(*pbVar1 + bVar35,bVar39);
  *pbVar1 = *pbVar1 + bVar35 + bVar39;
  pbVar1 = (byte *)(uVar23 + 0xc5105116);
  bVar39 = CARRY1(*pbVar1,bVar34) || CARRY1(*pbVar1 + bVar34,bVar38);
  *pbVar1 = *pbVar1 + bVar34 + bVar38;
  bVar30 = (byte)iVar31 + bVar26;
  bVar38 = CARRY1((byte)iVar31,bVar26) || CARRY1(bVar30,bVar39);
  bVar30 = bVar30 + bVar39;
  pbVar46 = (byte *)CONCAT31((int3)((uint)iVar31 >> 8),bVar30);
  bVar39 = CARRY1(*extraout_ECX_00,bVar25) || CARRY1(*extraout_ECX_00 + bVar25,bVar38);
  *extraout_ECX_00 = *extraout_ECX_00 + bVar25 + bVar38;
  pbVar1 = extraout_ECX_00 + (int)pbVar46;
  bVar9 = (byte)((uint)iVar31 >> 8);
  bVar32 = *pbVar1 + bVar9;
  bVar38 = CARRY1(*pbVar1,bVar9) || CARRY1(bVar32,bVar39);
  *pbVar1 = bVar32 + bVar39;
  puVar16 = &(in_stack_44->_0).byval_arg.field_0x7;
  bVar33 = (byte)puVar36;
  bVar39 = CARRY1(*puVar16,bVar33) || CARRY1(*puVar16 + bVar33,bVar38);
  *puVar16 = *puVar16 + bVar33 + bVar38;
  pbVar1 = pbVar43 + 0x17;
  bVar38 = CARRY1(*pbVar1,bVar35) || CARRY1(*pbVar1 + bVar35,bVar39);
  *pbVar1 = *pbVar1 + bVar35 + bVar39;
  pbVar1 = (byte *)((int)&((String *)(unaff_ESI.m_Index + -0x37efaef0))->monitor + 2);
  bVar39 = CARRY1(*pbVar1,bVar34) || CARRY1(*pbVar1 + bVar34,bVar38);
  *pbVar1 = *pbVar1 + bVar34 + bVar38;
  bVar38 = CARRY1(bVar26,bVar26) || CARRY1(bVar26 * '\x02',bVar39);
  uVar28 = (undefined2)((uint)in_stack_44 >> 0x10);
  bVar26 = bVar26 * '\x02' + bVar39;
  iVar31 = CONCAT22(uVar28,CONCAT11(bVar26,bVar25));
  bVar39 = CARRY1(*pbVar46,bVar30) || CARRY1(*pbVar46 + bVar30,bVar38);
  *pbVar46 = *pbVar46 + bVar30 + bVar38;
  pbVar1 = (byte *)(iVar31 + 0x10);
  bVar9 = *pbVar1;
  bVar32 = *pbVar1;
  *pbVar1 = (bVar32 - bVar30) - bVar39;
  uVar7 = (uint)(bVar9 < bVar30 || (byte)(bVar32 - bVar30) < bVar39);
  bVar38 = uVar23 < 0x3710511e || uVar23 + 0xc8efaee2 < uVar7;
  puVar24 = (uint *)((uVar23 + 0xc8efaee2) - uVar7);
  pbVar1 = (byte *)(iVar31 + 0x10);
  bVar39 = *pbVar1 < bVar30 || (byte)(*pbVar1 - bVar30) < bVar38;
  *pbVar1 = (*pbVar1 - bVar30) - bVar38;
  pbVar1 = (byte *)(iVar31 + 0x10);
  bVar32 = *pbVar1;
  bVar9 = *pbVar1;
  *pbVar1 = (bVar9 - bVar30) - bVar39;
  uVar7 = (uint)(bVar32 < bVar30 || (byte)(bVar9 - bVar30) < bVar39);
  bVar38 = *puVar24 < 0x18a61051 || *puVar24 + 0xe759efaf < uVar7;
  *puVar24 = (*puVar24 + 0xe759efaf) - uVar7;
  *(int *)(iVar31 + -4) = iVar31;
  bVar39 = CARRY1(bVar33,bVar25) || CARRY1(bVar33 + bVar25,bVar38);
  bVar34 = bVar33 + bVar25 + bVar38;
  pbVar1 = (byte *)(iVar31 + 0x10);
  bVar38 = *pbVar1 < bVar30 || (byte)(*pbVar1 - bVar30) < bVar39;
  *pbVar1 = (*pbVar1 - bVar30) - bVar39;
  LOCK();
  pbVar1 = (byte *)(iVar31 + 0x10);
  bVar32 = *pbVar1;
  bVar9 = *pbVar1;
  *pbVar1 = (bVar9 - bVar30) - bVar38;
  UNLOCK();
  uVar7 = (uint)(bVar32 < bVar30 || (byte)(bVar9 - bVar30) < bVar38);
  uVar20 = (int)puVar24 + 0x1f105119U + uVar7;
  uVar7 = (uint)((uint *)0xe0efaee6 < puVar24 || CARRY4((int)puVar24 + 0x1f105119U,uVar7));
  uVar21 = uVar20 + 0x15441051;
  bVar38 = 0xeabbefae < uVar20 || CARRY4(uVar21,uVar7);
  uVar21 = uVar21 + uVar7;
  *(int *)(iVar31 + -8) = iVar31;
  pbVar1 = (byte *)(iVar31 + 0x15);
  bVar39 = CARRY1(*pbVar1,bVar26) || CARRY1(*pbVar1 + bVar26,bVar38);
  *pbVar1 = *pbVar1 + bVar26 + bVar38;
  *(int *)(iVar31 + -0xc) = iVar31;
  pbVar43 = pbVar43 + -0x4cefaeeb;
  bVar32 = *pbVar43;
  bVar9 = *pbVar43;
  *pbVar43 = bVar9 + bVar25 + bVar39;
  uVar7 = (uint)(CARRY1(bVar32,bVar25) || CARRY1(bVar9 + bVar25,bVar39));
  uVar20 = uVar21 + 0x15d81051;
  bVar38 = 0xea27efae < uVar21 || CARRY4(uVar20,uVar7);
  uVar20 = uVar20 + uVar7;
  *(int *)(iVar31 + -0x10) = iVar31;
  iVar29 = CONCAT22(uVar28,CONCAT11(bVar26 + bVar35 + bVar38,bVar25));
  uVar7 = (uint)(CARRY1(bVar26,bVar35) || CARRY1(bVar26 + bVar35,bVar38));
  uVar21 = uVar20 + 0x177e1051;
  bVar38 = 0xe881efae < uVar20 || CARRY4(uVar21,uVar7);
  *(int *)(iVar31 + -0x14) = iVar29;
  pbVar1 = (byte *)(iVar29 + 0x51 + CONCAT31((int3)((uint)puVar36 >> 8),bVar34));
  bVar39 = CARRY1(*pbVar1,bVar30) || CARRY1(*pbVar1 + bVar30,bVar38);
  *pbVar1 = *pbVar1 + bVar30 + bVar38;
  pbVar1 = (byte *)(iVar29 + 0x19);
  bVar38 = CARRY1(*pbVar1,bVar35) || CARRY1(*pbVar1 + bVar35,bVar39);
  *pbVar1 = *pbVar1 + bVar35 + bVar39;
  *(int *)(iVar31 + -0x18) = iVar29;
  bVar39 = CARRY1(bRam_?,bVar34);
  bVar34 = bRam_? + bVar34;
  bRam_? = bVar34 + bVar38;
  *(int *)(iVar29 + 0x10) =
       (*(int *)(iVar29 + 0x10) - (int)pbVar46) - (uint)(bVar39 || CARRY1(bVar34,bVar38));
  return (MVWorldObjectClient *)(uVar21 + uVar7);
code_?:
  pOVar10 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  cVar37 = '\0';
  if (pMVar13 != (MVNetworkGame *)0x0) {
    uVar28 = 0x1051;
    pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0);
    cVar37 = '\0';
    if (pMVar14 != (MVLocalPlayer *)0x0) {
      unaff_EBX = (String *)(pMVar14->fields)._._ActorNr_k__BackingField;
      cVar37 = '\0';
      if (unaff_ESI.m_Index != 0) {
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        cVar37 = *(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) < pIVar4;
        pIVar27 = TypeInfo__System__Int32;
        if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) == pIVar4) {
          piVar12 = (int *)func_?();
          if ((String *)*piVar12 != unaff_EBX) {
            this_61 = (MVBuildModeAvatarRemote *)func_?();
            MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                      (this_61,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_61;
          }
          this_62 = (MVBuildModeAvatarLocal *)func_?();
          MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                    (this_62,worldObjectData,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_62;
        }
        goto code_?;
      }
    }
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

