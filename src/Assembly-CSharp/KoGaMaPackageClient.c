
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
  bVar2 = func_?();
  pbVar3 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),(char)extraout_ECX * '\x02' + cVar1);
  pbVar3[0x10] = pbVar3[0x10] + (char)extraout_EDX;
  *(int *)(pbVar3 + 0x10) = *(int *)(pbVar3 + 0x10) + extraout_EDX;
  *pbVar3 = *pbVar3 ^ bVar2;
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)in_stack_4 >> 0x10);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MVWaterPlanePreset);
    func_?(&TypeInfo__MVWaterPlane);
    func_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    func_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    func_?(&TypeInfo__ShootableButton);
    func_?(&TypeInfo__TeamEditor);
    uVar3 = 0x119a;
    func_?(&TypeInfo__ThemeWorldObject);
    func_?(&TypeInfo__TimeAttackFlag);
    func_?(&TypeInfo__TriggerCube);
    uVar1 = 0x1051;
    func_?(&TypeInfo__UseLever);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  pOVar5 = (Object *)func_?();
  bVar6 = 0;
  if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                      worldObjectData,pOVar5,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  bVar6 = 0;
  if (TVar7.m_Index == 0) goto code_?;
  pIVar8 = (TypeInfo__System__Int32->_0).element_class;
  bVar6 = *(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) < pIVar8;
  if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) != pIVar8) {
code_?:
    func_?();
    goto code_?;
  }
  piVar9 = (int *)func_?();
  iVar10 = *piVar9;
  if (0xab < iVar10) {
    if (iVar10 == 0xb4) {
      this = (TimeAttackFlag *)func_?();
      TimeAttackFlag::TimeAttackFlag__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this;
    }
    if (iVar10 == 0xb5) {
      this_00 = (MVGamePointChest *)func_?();
      MVGamePointChest::MVGamePointChest__ctor
                (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_00;
    }
code_?:
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar11,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar11,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  }
  switch(iVar10) {
  case 0:
    pOVar5 = (Object *)func_?();
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       worldObjectData,pOVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar12 == 0) {
      unaff_ESI.m_Index =
           (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                    HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::TextureId]::
      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)worldObjectData,
                 pOVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                );
      pOVar5 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar5,(MethodInfo *)0x0);
    }
    pOVar5 = (Object *)func_?();
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        worldObjectData,pOVar5,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    bVar6 = 0;
    if (TVar7.m_Index != 0) {
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar6 = *(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) < pIVar8;
      if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) != pIVar8) goto code_?;
      piVar9 = (int *)func_?();
      unaff_ESI.m_Index = *piVar9;
      pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar6 = 0;
      if (pMVar13 != (MVNetworkGame *)0x0) {
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0);
        bVar6 = 0;
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
    pOVar5 = (Object *)func_?();
    uVar1 = 0x1051;
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           worldObjectData,pOVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    bVar6 = 0;
    if (unaff_ESI.m_Index == 0) break;
    bVar6 = *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if ((!(bool)bVar6) &&
       (pDVar16 = *(Dictionary_2_System_Object_System_Object___Class **)
                  (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                  (uint)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment * 4),
       bVar6 = pDVar16 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar16 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
       ) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      bVar6 = 0;
      if (unaff_ESI.m_Index != 0) {
        bVar6 = 1;
        if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (pDVar16 = *(Dictionary_2_System_Object_System_Object___Class **)
                      (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                      (uint)(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment * 4),
           bVar6 = pDVar16 < 
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
           , pDVar16 != 
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (unaff_ESI.m_Index,(Object *)unaff_EBX,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        bVar6 = 0;
        if (TVar7.m_Index != 0) {
          pIVar8 = (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class;
          bVar6 = *(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) < pIVar8;
          if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) == pIVar8) {
            puVar17 = (undefined1 *)func_?();
            switch(*puVar17) {
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
              pSVar11 = mscorlib.dll::System::Enum::Enum_ToString
                                  ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
              pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar11,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pSVar11,(MethodInfo *)0x0);
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
    switch(iVar10) {
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
      pMVar18 = (MVWorldObjectClient *)func_?();
      MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                ((MVGamePassProgressionDataObject *)pMVar18,worldObjectData,worldObjects,
                 (MethodInfo *)0x0);
      return pMVar18;
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
      MVGameCoinChest::MVGameCoinChest__ctor(this_68,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
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
      pMVar19 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar19,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar19;
    case 0x9b:
      this_73 = (MVCostumeBase *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_73;
    case 0x9c:
      pMVar19 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar19,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar19;
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
      ShootableButton::ShootableButton__ctor(this_77,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
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
      CollectTheItem::CollectTheItem__ctor(this_81,worldObjectData,worldObjects,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?();
code_?:
  cVar20 = func_?();
  out(8,cVar20);
  pbVar21 = (byte *)(extraout_ECX + 10);
  bVar22 = *pbVar21;
  bVar23 = (byte)unaff_EBX;
  bVar24 = *pbVar21;
  *pbVar21 = bVar24 + bVar23 + bVar6;
  *(char *)(extraout_ECX + -0x59efaef6) =
       *(char *)(extraout_ECX + -0x59efaef6) + cVar20 +
       (CARRY1(bVar22,bVar23) || CARRY1(bVar24 + bVar23,bVar6));
  bVar25 = 0;
  pcVar26 = (code *)swi(0x18);
  (*pcVar26)();
  bVar24 = (byte)extraout_ECX_00;
  bVar22 = (byte)((uint)extraout_ECX_00 >> 8);
  bVar6 = bVar22 + bVar24;
  bVar27 = CARRY1(bVar22,bVar24) || CARRY1(bVar6,bVar25);
  pbVar21 = (byte *)(CONCAT22((short)((uint)extraout_ECX_00 >> 0x10),CONCAT11(bVar6 + bVar25,bVar24)
                            ) + 0x10);
  cVar20 = *pbVar21 < extraout_DL || (byte)(*pbVar21 - extraout_DL) < bVar27;
  *pbVar21 = (*pbVar21 - extraout_DL) - bVar27;
  pcVar26 = (code *)swi(0x18);
  (*pcVar26)();
  bVar28 = bVar23 + (char)extraout_ECX_01 + cVar20;
  puVar29 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar28);
  uVar30 = *puVar29;
  *puVar29 = (uint)(extraout_ECX_01 + *puVar29);
  bVar31 = (byte)((uint)unaff_EBX >> 8);
  *extraout_ECX_01 = *extraout_ECX_01 + bVar31 + CARRY4(uVar30,(uint)extraout_ECX_01);
  bVar23 = 0;
  pcVar26 = (code *)swi(0x18);
  (*pcVar26)();
  bVar24 = (byte)extraout_ECX_02;
  bVar22 = (byte)((uint)extraout_ECX_02 >> 8);
  bVar6 = bVar22 + bVar24;
  bVar27 = CARRY1(bVar22,bVar24) || CARRY1(bVar6,bVar23);
  pbVar21 = (byte *)(CONCAT22((short)((uint)extraout_ECX_02 >> 0x10),CONCAT11(bVar6 + bVar23,bVar24)
                            ) + 0x10);
  bVar6 = *pbVar21 < extraout_DL_00 || (byte)(*pbVar21 - extraout_DL_00) < bVar27;
  *pbVar21 = (*pbVar21 - extraout_DL_00) - bVar27;
  pcVar26 = (code *)swi(0x18);
  (*pcVar26)();
  pbVar21 = (byte *)((int)&(((String *)unaff_ESI.m_Index)->fields)._stringLength + 3);
  bVar27 = CARRY1(*pbVar21,bVar28) || CARRY1(*pbVar21 + bVar28,bVar6);
  *pbVar21 = *pbVar21 + bVar28 + bVar6;
  bVar24 = (byte)extraout_ECX_03;
  bVar22 = (byte)((uint)extraout_ECX_03 >> 8);
  bVar6 = bVar22 + bVar24;
  bVar32 = CARRY1(bVar22,bVar24) || CARRY1(bVar6,bVar27);
  pbVar21 = (byte *)(CONCAT22((short)((uint)extraout_ECX_03 >> 0x10),CONCAT11(bVar6 + bVar27,bVar24)
                            ) + 0x10);
  bVar23 = *pbVar21 < extraout_DL_01 || (byte)(*pbVar21 - extraout_DL_01) < bVar32;
  *pbVar21 = (*pbVar21 - extraout_DL_01) - bVar32;
  pcVar26 = (code *)swi(0x18);
  uVar33 = (*pcVar26)();
  bVar25 = (byte)extraout_ECX_04;
  bVar22 = (byte)((uint)extraout_ECX_04 >> 8);
  bVar6 = bVar22 + bVar25;
  uVar34 = (undefined2)((uint)extraout_ECX_04 >> 0x10);
  bVar24 = bVar6 + bVar23;
  pcVar35 = (char *)(CONCAT22(uVar34,CONCAT11(bVar24,bVar25)) + 0x10);
  *pcVar35 = (*pcVar35 - (char)extraout_EDX) - (CARRY1(bVar22,bVar25) || CARRY1(bVar6,bVar23));
  *puVar29 = *puVar29 | 0x51;
  uVar36 = CONCAT11(bVar24 + bVar25,bVar25);
  pcVar35 = (char *)(CONCAT22(uVar34,uVar36) + 0x10);
  *pcVar35 = (*pcVar35 - (char)extraout_EDX) - CARRY1(bVar24,bVar25);
  cVar20 = bVar24 + bVar25 + bVar25;
  iVar10 = CONCAT22(uVar34,CONCAT11(cVar20,bVar25));
  pcVar37 = (char *)(extraout_EDX | *(uint *)(iVar10 + 0x10) | *(uint *)(iVar10 + 0x10));
  pbVar21 = &stack0xffffffd4 + iVar10;
  bVar6 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar31;
  pbVar21 = (byte *)(iVar10 + 0xc);
  bVar24 = *pbVar21;
  bVar23 = (byte)((ushort)uVar33 >> 8);
  bVar22 = *pbVar21 + bVar23;
  *pbVar21 = bVar22 + CARRY1(bVar6,bVar31);
  puVar38 = &(((String *)(unaff_ESI.m_Index + -0x54efaf00))->fields)._firstChar;
  *(byte *)puVar38 =
       (char)*puVar38 + ((byte)uVar33 | 0x51) +
       (CARRY1(bVar24,bVar23) || CARRY1(bVar22,CARRY1(bVar6,bVar31)));
  bVar6 = cVar20 + (char)((uint)pcVar37 >> 8);
  *pcVar37 = *pcVar37 + bVar28;
  bVar24 = bVar6 + bVar25;
  pcVar35 = (char *)(CONCAT22(uVar34,CONCAT11(bVar24,bVar25)) + 0x10);
  bVar22 = (byte)pcVar37;
  *pcVar35 = (*pcVar35 - bVar22) - CARRY1(bVar6,bVar25);
  pbVar21 = (byte *)(CONCAT22(uVar34,CONCAT11(bVar24 + bVar25,bVar25)) + 0x10);
  bVar39 = *pbVar21 < bVar22 || (byte)(*pbVar21 - bVar22) < CARRY1(bVar24,bVar25);
  *pbVar21 = (*pbVar21 - bVar22) - CARRY1(bVar24,bVar25);
  pcVar26 = (code *)swi(0x18);
  uVar40 = (*pcVar26)(CONCAT22(uVar34,CONCAT11(bVar6,bVar25)),iVar10,iVar10);
  bVar23 = (byte)extraout_ECX_05;
  bVar6 = (byte)((uint)extraout_ECX_05 >> 8);
  bVar24 = bVar6 + bVar23;
  bVar27 = CARRY1(bVar6,bVar23) || CARRY1(bVar24,bVar39);
  bVar24 = bVar24 + bVar39;
  puVar41 = (uint *)CONCAT22((short)((uint)extraout_ECX_05 >> 0x10),CONCAT11(bVar24,bVar23));
  puVar42 = puVar41 + 4;
  uVar30 = *puVar42;
  bVar25 = (byte)((ulonglong)uVar40 >> 0x20);
  bVar6 = (byte)*puVar42 - bVar25;
  *(byte *)puVar42 = bVar6 - bVar27;
  uVar43 = CONCAT22((short)((ulonglong)uVar40 >> 0x30),
                    CONCAT11((char)((ulonglong)uVar40 >> 0x28) + bVar25 +
                             ((byte)uVar30 < bVar25 || bVar6 < bVar27),bVar25));
  pbVar44 = (byte *)((uint)uVar40 | 0xdfb1051);
  bVar6 = *pbVar44;
  bVar22 = (byte)((uint)pbVar44 >> 8);
  uRam_? = in_CS;
  *pbVar44 = *pbVar44 + bVar22;
  bVar27 = CARRY1(worldObjects._2_1_,(byte)pbVar44) ||
           CARRY1(worldObjects._2_1_ + (byte)pbVar44,CARRY1(bVar6,bVar22));
  pbVar21 = (byte *)(uVar43 + 0xe);
  bVar32 = CARRY1(*pbVar21,bVar24) || CARRY1(*pbVar21 + bVar24,bVar27);
  *pbVar21 = *pbVar21 + bVar24 + bVar27;
  pbVar21 = (byte *)((int)&worldObjectData[-0x194fe50].fields._entries + 2);
  bVar27 = CARRY1(*pbVar21,bVar23) || CARRY1(*pbVar21 + bVar23,bVar32);
  *pbVar21 = *pbVar21 + bVar23 + bVar32;
  uVar30 = *puVar29;
  bVar6 = (byte)*puVar29 + bVar24;
  *(byte *)puVar29 = bVar6 + bVar27;
  puVar42 = puVar41 + 4;
  uVar45 = (uint)(CARRY1((byte)uVar30,bVar24) || CARRY1(bVar6,bVar27));
  uVar30 = *puVar42;
  uVar46 = *puVar42;
  *puVar42 = uVar46 + uVar43 + uVar45;
  puVar42 = puVar41 + 4;
  uVar30 = (uint)(CARRY4(uVar30,uVar43) || CARRY4(uVar46 + uVar43,uVar45));
  bVar27 = CARRY4(*puVar42,uVar43) || CARRY4(*puVar42 + uVar43,uVar30);
  *puVar42 = *puVar42 + uVar43 + uVar30;
  if (*puVar42 != 0) {
    bVar6 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar24;
    bVar32 = CARRY1(*(byte *)&((String *)unaff_ESI.m_Index)->klass,bVar24) || CARRY1(bVar6,bVar27);
    *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar6 + bVar27;
    bVar6 = bVar25 + (byte)puVar41[4];
    bVar27 = CARRY1(bVar25,(byte)puVar41[4]) || CARRY1(bVar6,bVar32);
    uVar43 = CONCAT31((int3)(uVar43 >> 8),bVar6 + bVar32);
  }
  pbVar21 = (byte *)(uVar43 + 0xbf105111);
  bVar24 = *pbVar21;
  bVar6 = *pbVar21;
  *pbVar21 = bVar6 + bVar28 + bVar27;
  puVar42 = puVar41 + 4;
  uVar30 = (uint)(CARRY1(bVar24,bVar28) || CARRY1(bVar6 + bVar28,bVar27));
  bVar27 = CARRY4(*puVar42,uVar43) || CARRY4(*puVar42 + uVar43,uVar30);
  *puVar42 = *puVar42 + uVar43 + uVar30;
  uVar47 = in(0x11);
  uVar30 = CONCAT31((int3)((uint)pbVar44 >> 8),uVar47);
  bVar6 = (byte)*puVar41 + bVar23;
  bVar32 = CARRY1((byte)*puVar41,bVar23) || CARRY1(bVar6,bVar27);
  *(byte *)puVar41 = bVar6 + bVar27;
  bVar6 = (byte)uVar43 + (byte)puVar41[4];
  bVar27 = CARRY1((byte)uVar43,(byte)puVar41[4]) || CARRY1(bVar6,bVar32);
  bVar6 = bVar6 + bVar32;
  bVar24 = bVar6 + (byte)puVar41[4];
  bVar32 = CARRY1(bVar6,(byte)puVar41[4]) || CARRY1(bVar24,bVar27);
  bVar24 = bVar24 + bVar27;
  bVar6 = bVar24 + (byte)puVar41[4];
  bVar22 = bVar6 + bVar32;
  uVar46 = CONCAT31((int3)(uVar43 >> 8),bVar22);
  puVar42 = puVar29;
  if (-1 < (char)bVar22) {
    bVar22 = CARRY1(bVar22,(byte)puVar41[4]) ||
             CARRY1(bVar22 + (byte)puVar41[4],
                    CARRY1(in_stack_48,bVar28) ||
                    CARRY1(in_stack_48 + bVar28,
                           CARRY1(bVar24,(byte)puVar41[4]) || CARRY1(bVar6,bVar32)));
    pcVar26 = (code *)swi(0x18);
    uVar40 = (*pcVar26)(puVar29,puVar41,puVar41,pbVar44,puVar41,CONCAT22(uVar1,in_CS),puVar41,
                       puVar41,puVar41,CONCAT22(uVar3,in_CS),puVar41,puVar41,extraout_ECX_05);
    uVar30 = (uint)uVar40;
    bVar24 = (byte)((ulonglong)uVar40 >> 8);
    bVar6 = bVar31 + bVar24;
    puVar29 = (uint *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar6 + bVar22,bVar28));
    uVar46 = CONCAT31((int3)((ulonglong)uVar40 >> 0x28),
                      (char)((ulonglong)uVar40 >> 0x20) + (byte)extraout_ECX_06[4] +
                      (CARRY1(bVar31,bVar24) || CARRY1(bVar6,bVar22)));
    puVar41 = extraout_ECX_06;
    puVar42 = extraout_ECX_06;
  }
  pMVar18 = (MVWorldObjectClient *)(uVar30 | 0x13);
  uVar45 = *puVar41;
  bVar6 = (byte)(uVar46 >> 8);
  *(byte *)puVar41 = (byte)*puVar41 + bVar6;
  uVar45 = (uint)CARRY1((byte)uVar45,bVar6);
  uVar43 = uVar46 + puVar41[4];
  uVar49 = uVar43 + uVar45;
  uVar46 = (uint)(CARRY4(uVar46,puVar41[4]) || CARRY4(uVar43,uVar45));
  uVar45 = uVar49 + puVar41[4];
  bVar27 = CARRY4(uVar49,puVar41[4]) || CARRY4(uVar45,uVar46);
  uVar45 = uVar45 + uVar46;
  if ((POPCOUNT(uVar45 & 0xff) & 1U) == 0) {
    pcVar35 = (char *)((int)&pMVar18[-0x45d9b3].fields._.outputLinkRefs + 3);
    *pcVar35 = *pcVar35 + (char)(uVar30 >> 8) + bVar27;
    return pMVar18;
  }
  puVar50 = puVar41 + 4;
  bVar24 = (byte)uVar45;
  bVar6 = (byte)*puVar50 + bVar24;
  bVar32 = CARRY1((byte)*puVar50,bVar24) || CARRY1(bVar6,bVar27);
  *(byte *)puVar50 = bVar6 + bVar27;
  puVar50 = puVar41 + 4;
  bVar6 = (byte)*puVar50 + bVar24;
  bVar27 = CARRY1((byte)*puVar50,bVar24) || CARRY1(bVar6,bVar32);
  *(byte *)puVar50 = bVar6 + bVar32;
  sVar51 = ((ushort)uVar45 & 3) - (*(ushort *)&pMVar18->klass & 3);
  *(ushort *)&pMVar18->klass = *(short *)&pMVar18->klass + (ushort)(0 < sVar51) * sVar51;
  pMVar52 = pMVar18 + -0x624b7a;
  bVar22 = (byte)puVar41;
  bVar6 = *(char *)&pMVar52->klass + bVar22;
  bVar32 = CARRY1(*(byte *)&pMVar52->klass,bVar22) || CARRY1(bVar6,bVar27);
  *(byte *)&pMVar52->klass = bVar6 + bVar27;
  puVar50 = puVar41 + 4;
  uVar46 = *puVar50;
  bVar6 = (byte)*puVar50 + bVar24;
  *(byte *)puVar50 = bVar6 + bVar32;
  uVar53 = (undefined3)(uVar45 >> 8);
  bVar25 = bVar24 + (byte)puVar41[4] + (CARRY1((byte)uVar46,bVar24) || CARRY1(bVar6,bVar32));
  bVar24 = (byte)pMVar18;
  bVar23 = (byte)((uint)puVar41 >> 8);
  bVar6 = (byte)*puVar41 + bVar23;
  bVar27 = CARRY1((byte)*puVar41,bVar23) || CARRY1(bVar6,0xeb < bVar24);
  *(byte *)puVar41 = bVar6 + (0xeb < bVar24);
  bVar32 = 0xae < (byte)(bVar24 + 0x14) || CARRY1(bVar24 + 0x65,bVar27);
  bVar24 = bVar24 + 0x65 + bVar27;
  bVar27 = CARRY1(bVar23,bVar22) || CARRY1(bVar23 + bVar22,bVar32);
  bVar23 = bVar23 + bVar22 + bVar32;
  pbVar44 = (byte *)CONCAT22((short)((uint)puVar41 >> 0x10),CONCAT11(bVar23,bVar22));
  pbVar21 = pbVar44 + 0x10;
  bVar32 = *pbVar21 < bVar25 || (byte)(*pbVar21 - bVar25) < bVar27;
  *pbVar21 = (*pbVar21 - bVar25) - bVar27;
  puVar17 = &(((String *)(unaff_ESI.m_Index + -0x10))->fields).field_0x7;
  bVar6 = bVar24 + 0x51;
  bVar27 = 0xae < bVar24 || CARRY1(bVar6,bVar32);
  uVar46 = CONCAT31((int3)(uVar30 >> 8),bVar6 + bVar32);
  puVar50 = puVar29 + 5;
  bVar28 = (byte)(uVar45 >> 8);
  bVar6 = (byte)*puVar50 + bVar28;
  bVar32 = CARRY1((byte)*puVar50,bVar28) || CARRY1(bVar6,bVar27);
  *(byte *)puVar50 = bVar6 + bVar27;
  pbVar21 = (byte *)(uVar46 + 0x55105114);
  bVar6 = *pbVar21;
  bVar31 = (byte)puVar29;
  bVar24 = *pbVar21;
  *pbVar21 = bVar24 + bVar31 + bVar32;
  uVar30 = (uint)(CARRY1(bVar6,bVar31) || CARRY1(bVar24 + bVar31,bVar32));
  bVar27 = 0xea85efae < uVar46 || CARRY4(uVar46 + 0x157a1051,uVar30);
  uVar30 = uVar46 + 0x157a1051 + uVar30;
  pbVar21 = (byte *)((int)&worldObjectData[-0x13fa8fb].fields._keys + 1);
  bVar6 = *pbVar21;
  bVar24 = *pbVar21;
  *pbVar21 = bVar24 + bVar31 + bVar27;
  uVar46 = (uint)(CARRY1(bVar6,bVar31) || CARRY1(bVar24 + bVar31,bVar27));
  uVar45 = uVar30 + 0x15e91051;
  bVar27 = 0xea16efae < uVar30 || CARRY4(uVar45,uVar46);
  iVar10 = uVar45 + uVar46;
  bVar32 = CARRY1(*puVar17,bVar22) || CARRY1(*puVar17 + bVar22,bVar27);
  *puVar17 = *puVar17 + bVar22 + bVar27;
  bVar6 = (byte)*puVar29 + bVar28;
  bVar27 = CARRY1((byte)*puVar29,bVar28) || CARRY1(bVar6,bVar32);
  *(byte *)puVar29 = bVar6 + bVar32;
  pbVar21 = (byte *)(iVar10 + 0x16);
  bVar24 = *pbVar21;
  bVar6 = *pbVar21;
  *pbVar21 = bVar6 + bVar31 + bVar27;
  bVar39 = (byte)((uint)puVar29 >> 8);
  bVar27 = CARRY1(method._2_1_,bVar39) ||
           CARRY1(method._2_1_ + bVar39,CARRY1(bVar24,bVar31) || CARRY1(bVar6 + bVar31,bVar27));
  pbVar21 = (byte *)(CONCAT31(uVar53,bVar25) + -0x38efaeea);
  bVar24 = (byte)((uint)iVar10 >> 8);
  bVar32 = CARRY1(*pbVar21,bVar24) || CARRY1(*pbVar21 + bVar24,bVar27);
  *pbVar21 = *pbVar21 + bVar24 + bVar27;
  bVar27 = CARRY1(bVar24,bVar23) || CARRY1(bVar24 + bVar23,bVar32);
  bVar6 = (byte)iVar10;
  puVar50 = (uint *)CONCAT22((short)((uint)iVar10 >> 0x10),CONCAT11(bVar24 + bVar23 + bVar32,bVar6)
                            );
  bVar32 = CARRY1(*pbVar44,bVar25) || CARRY1(*pbVar44 + bVar25,bVar27);
  *pbVar44 = *pbVar44 + bVar25 + bVar27;
  bVar27 = CARRY1(*puVar17,bVar28) || CARRY1(*puVar17 + bVar28,bVar32);
  *puVar17 = *puVar17 + bVar28 + bVar32;
  pbVar21 = (byte *)((int)puVar29 + 0x17);
  bVar32 = CARRY1(*pbVar21,bVar31) || CARRY1(*pbVar21 + bVar31,bVar27);
  *pbVar21 = *pbVar21 + bVar31 + bVar27;
  pbVar21 = (byte *)((int)puVar50 + -0x5aefaee9);
  bVar27 = CARRY1(*pbVar21,bVar6) || CARRY1(*pbVar21 + bVar6,bVar32);
  *pbVar21 = *pbVar21 + bVar6 + bVar32;
  bVar32 = CARRY1(bVar25,bVar22) || CARRY1(bVar25 + bVar22,bVar27);
  bVar25 = bVar25 + bVar22 + bVar27;
  piVar9 = (int *)CONCAT31(uVar53,bVar25);
  bVar27 = CARRY1(bVar39,bVar23) || CARRY1(bVar39 + bVar23,bVar32);
  bVar6 = bVar39 + bVar23 + bVar32;
  pcVar37 = (char *)CONCAT22((short)((uint)puVar29 >> 0x10),CONCAT11(bVar6,bVar31));
  pbVar21 = (byte *)((int)puVar50 + (int)pcVar37);
  bVar32 = CARRY1(*pbVar21,bVar25) || CARRY1(*pbVar21 + bVar25,bVar27);
  *pbVar21 = *pbVar21 + bVar25 + bVar27;
  bVar27 = CARRY1(*pbVar44,bVar6) || CARRY1(*pbVar44 + bVar6,bVar32);
  *pbVar44 = *pbVar44 + bVar6 + bVar32;
  pbVar21 = pbVar44 + 0x10;
  bVar32 = *pbVar21 < bVar25 || (byte)(*pbVar21 - bVar25) < bVar27;
  *pbVar21 = (*pbVar21 - bVar25) - bVar27;
  pbVar21 = pbVar44 + 0x10;
  bVar6 = *pbVar21;
  bVar24 = *pbVar21;
  *pbVar21 = (bVar24 - bVar25) - bVar32;
  uVar45 = (uint)(bVar6 < bVar25 || (byte)(bVar24 - bVar25) < bVar32);
  uVar46 = *puVar50;
  uVar30 = *puVar50;
  *puVar50 = (uVar30 - 0x51) - uVar45;
  *(byte *)(puVar50 + 0x41446) =
       (char)puVar50[0x41446] + bVar23 + (uVar46 < 0x51 || uVar30 - 0x51 < uVar45);
  *piVar9 = *piVar9 + (int)puVar50;
  uVar30 = CONCAT31((int3)((uint)pbVar44 >> 8),bVar22 + *pbVar44);
  pcVar35 = (char *)(uVar30 | *(uint *)(&UNK_? + uVar30));
  *pcVar35 = (*pcVar35 - bVar31) - CARRY1(bVar25 + *pcVar37,*pbVar44);
  pcVar26 = (code *)swi(3);
  pMVar18 = (MVWorldObjectClient *)
            (*pcVar26)(uVar36,pbVar44,uVar36,pbVar44,pbVar44,pbVar44,uVar36,pbVar44,uVar36,pbVar44,
                      pbVar44,pbVar44,puVar41,puVar41,unaff_ESI.m_Index,puVar41,puVar42);
  return pMVar18;
code_?:
  pOVar5 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar5,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar6 = 0;
  if (pMVar13 != (MVNetworkGame *)0x0) {
    pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar13,(MethodInfo *)0x0);
    bVar6 = 0;
    if (pMVar14 != (MVLocalPlayer *)0x0) {
      unaff_EBX = (String *)(pMVar14->fields)._._ActorNr_k__BackingField;
      bVar6 = 0;
      if (unaff_ESI.m_Index != 0) {
        pIVar8 = (TypeInfo__System__Int32->_0).element_class;
        bVar6 = *(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) < pIVar8;
        if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) == pIVar8) {
          piVar9 = (int *)func_?();
          if ((String *)*piVar9 != unaff_EBX) {
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

