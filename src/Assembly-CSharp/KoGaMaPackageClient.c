
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
  uVar2 = func_?();
  LOCK();
  pcVar3 = (char *)*(undefined4 *)uVar2;
  *(undefined4 *)uVar2 = extraout_ECX;
  UNLOCK();
  pcVar3[-0x11efadf8] = pcVar3[-0x11efadf8] + unaff_BL + cVar1;
  pbVar4 = (byte *)((int)((ulonglong)uVar2 >> 0x20) + 0x10);
  *pbVar4 = *pbVar4 | (byte)((ulonglong)uVar2 >> 0x20);
  *pcVar3 = *pcVar3 + (char)pcVar3;
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
  pOVar1 = (Object *)func_?();
  bVar2 = 0;
  if (worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                        worldObjectData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    bVar2 = 0;
    if (TVar3.m_Index == 0) goto code_?;
    pIVar4 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = *(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) < pIVar4;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) != pIVar4) {
code_?:
      func_?();
      goto code_?;
    }
    piVar5 = (int *)func_?();
    iVar6 = *piVar5;
    if (0xab < iVar6) {
      if (iVar6 == 0xb4) {
        this = (TimeAttackFlag *)func_?();
        TimeAttackFlag::TimeAttackFlag__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this;
      }
      if (iVar6 == 0xb5) {
        this_00 = (MVGamePointChest *)func_?();
        MVGamePointChest::MVGamePointChest__ctor
                  (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
code_?:
      pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar7,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar7,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    switch(iVar6) {
    case 0:
      pOVar1 = (Object *)func_?();
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar8 == 0) {
        unaff_ESI.m_Index =
             (int32_t)MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI.m_Index,(MethodInfo *)0x0);
        pOVar1 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::TextureId]::
        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)worldObjectData,
                   pOVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  );
        pOVar1 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar1,(MethodInfo *)0x0);
      }
      pOVar1 = (Object *)func_?();
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                          worldObjectData,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      bVar2 = 0;
      if (TVar3.m_Index != 0) {
        pIVar4 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = *(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) < pIVar4;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) != pIVar4) goto code_?;
        piVar5 = (int *)func_?();
        unaff_ESI.m_Index = *piVar5;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar9 != (MVNetworkGame *)0x0) {
          pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar10 != (MVLocalPlayer *)0x0) {
            if ((String *)unaff_ESI.m_Index ==
                (String *)(pMVar10->fields)._._ActorNr_k__BackingField) {
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
      pMVar11 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar11,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar11;
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
      pMVar11 = (MVSpawnPointBlue *)func_?();
      MVSpawnPointBlue::MVSpawnPointBlue__ctor
                (pMVar11,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar11;
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
      pOVar1 = (Object *)func_?();
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             worldObjectData,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      bVar2 = 0;
      if (unaff_ESI.m_Index == 0) goto code_?;
      bVar2 = *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      if ((!(bool)bVar2) &&
         (pDVar12 = *(Dictionary_2_System_Object_System_Object___Class **)
                    (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                    (uint)(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment * 4),
         bVar2 = pDVar12 < 
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
         , pDVar12 == 
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (unaff_ESI.m_Index,(Object *)StringLiteral_BlueprintData,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                              ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
        bVar2 = 0;
        if (unaff_ESI.m_Index != 0) {
          bVar2 = 1;
          if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (pDVar12 = *(Dictionary_2_System_Object_System_Object___Class **)
                        (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
                        (uint)(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              ->_1).naturalAligment * 4),
             bVar2 = pDVar12 < 
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
             , pDVar12 != 
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          break;
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_ESI.m_Index,(Object *)unaff_EBX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          bVar2 = 0;
          if (TVar3.m_Index != 0) {
            pIVar4 = (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class;
            bVar2 = *(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) < pIVar4;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) == pIVar4) {
              puVar13 = (undefined1 *)func_?();
              switch(*puVar13) {
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
                pSVar7 = mscorlib.dll::System::Enum::Enum_ToString
                                    ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
                pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                    (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar7,
                                     (MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)pSVar7,(MethodInfo *)0x0);
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
      switch(iVar6) {
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
        pMVar14 = (MVWorldObjectClient *)func_?();
        MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                  ((MVGamePassProgressionDataObject *)pMVar14,worldObjectData,worldObjects,
                   (MethodInfo *)0x0);
        return pMVar14;
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
        pMVar15 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar15,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar15;
      case 0x9b:
        this_73 = (MVCostumeBase *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                  (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_73;
      case 0x9c:
        pMVar15 = (MVCostumeBaseBlueprint *)func_?();
        Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
        MVCostumeBaseBlueprint__ctor(pMVar15,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)pMVar15;
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
  uVar16 = func_?();
  bVar17 = (byte)((ulonglong)uVar16 >> 0x20);
  iVar6 = CONCAT22((short)((ulonglong)uVar16 >> 0x30),CONCAT11(0x10,bVar17));
  bVar18 = (byte)((uint)extraout_ECX >> 8);
  bVar19 = *extraout_ECX + bVar18;
  bVar20 = CARRY1(*extraout_ECX,bVar18) || CARRY1(bVar19,bVar2);
  *extraout_ECX = bVar19 + bVar2;
  pbVar21 = (byte *)(iVar6 + 0x10);
  bVar2 = bVar17 + *pbVar21;
  bVar22 = CARRY1(bVar17,*pbVar21) || CARRY1(bVar2,bVar20);
  uVar23 = (undefined3)((uint)iVar6 >> 8);
  bVar2 = bVar2 + bVar20;
  pbVar21 = (byte *)(CONCAT31(uVar23,bVar2) + 0x10);
  bVar24 = CARRY1(bVar2,*pbVar21);
  bVar2 = bVar2 + *pbVar21;
  bVar20 = CARRY1(bVar2,bVar22);
  bVar25 = bVar24 || bVar20;
  bVar2 = bVar2 + bVar22;
  iVar6 = CONCAT31(uVar23,bVar2);
  bVar22 = bVar2 == 0;
  bVar19 = (byte)unaff_EBX;
  if ((!bVar24 && !bVar20) && !bVar22) {
    *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar2;
    *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar2;
    bVar25 = CARRY1(bVar2,*(byte *)(iVar6 + 0x10));
    cVar26 = bVar2 + *(byte *)(iVar6 + 0x10);
    iVar6 = CONCAT31(uVar23,cVar26);
    bVar22 = cVar26 == '\0';
  }
  pfVar27 = (float *)(extraout_ECX + -1);
  bVar2 = (byte)pfVar27;
  if (pfVar27 == (float *)0x0 || !bVar22) {
    bVar17 = *(byte *)pfVar27;
    bVar18 = *(byte *)pfVar27;
    *(byte *)pfVar27 = bVar18 + bVar2 + bVar25;
    iVar6 = iVar6 + *(int *)(iVar6 + 0x10) +
             (uint)(CARRY1(bVar17,bVar2) || CARRY1(bVar18 + bVar2,bVar25));
    bVar18 = (byte)iVar6;
    *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
    *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
    bVar25 = false;
    *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
  }
  iVar6 = iVar6 + *(int *)(iVar6 + 0x10) + (uint)bVar25;
  bVar18 = (byte)iVar6;
  *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
  *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
  *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & bVar18;
  uVar28 = iVar6 + *(int *)(iVar6 + 0x10);
  pbVar21 = (byte *)(uVar28 + 0x10);
  bVar20 = false;
  *pbVar21 = *pbVar21 & (byte)uVar28;
  if (-1 < (char)*pbVar21) {
    uVar29 = uVar28 + *(uint *)(uVar28 + 0x10);
    bVar20 = CARRY4(uVar28,*(uint *)(uVar28 + 0x10)) ||
             CARRY4(uVar29,(uint)CARRY1(in_stack_30,bVar19));
    uVar28 = uVar29 + CARRY1(in_stack_30,bVar19);
    out(0x13,(int)uVar16);
    pbVar21 = &stack0xffffffe8 + uVar28;
    bVar22 = CARRY1(*pbVar21,bVar2) || CARRY1(*pbVar21 + bVar2,bVar20);
    *pbVar21 = *pbVar21 + bVar2 + bVar20;
    bVar17 = (byte)(uVar28 >> 8);
    bVar18 = *(byte *)pfVar27 + bVar17;
    bVar20 = CARRY1(*(byte *)pfVar27,bVar17) || CARRY1(bVar18,bVar22);
    *(byte *)pfVar27 = bVar18 + bVar22;
  }
  bVar18 = (byte)uVar16 + 0x52;
  bVar22 = 0xad < (byte)uVar16 || CARRY1(bVar18,bVar20);
  uVar23 = (undefined3)((ulonglong)uVar16 >> 8);
  bVar18 = bVar18 + bVar20;
  ppMVar31 = &((String *)(unaff_ESI.m_Index + 0x10))->monitor;
  bVar32 = (byte)uVar28;
  bVar20 = CARRY1(*(byte *)ppMVar31,bVar32) || CARRY1(*(char *)ppMVar31 + bVar32,bVar22);
  *(byte *)ppMVar31 = *(char *)ppMVar31 + bVar32 + bVar22;
  ppMVar31 = &unaff_EBX[1].monitor;
  bVar33 = (byte)((uint)unaff_EBX >> 8);
  bVar22 = CARRY1(*(byte *)ppMVar31,bVar33) || CARRY1(*(char *)ppMVar31 + bVar33,bVar20);
  *(byte *)ppMVar31 = *(char *)ppMVar31 + bVar33 + bVar20;
  pbVar21 = (byte *)(CONCAT31(uVar23,bVar18) + -0x3aefadec);
  bVar17 = (byte)((ulonglong)uVar16 >> 8);
  bVar20 = CARRY1(*pbVar21,bVar17) || CARRY1(*pbVar21 + bVar17,bVar22);
  *pbVar21 = *pbVar21 + bVar17 + bVar22;
  bVar22 = 0xad < bVar18 || CARRY1(bVar18 + 0x52,bVar20);
  bVar34 = (byte)((uint)pfVar27 >> 8);
  bVar35 = bVar32 + bVar34 + bVar22;
  uVar36 = CONCAT31((int3)(uVar28 >> 8),bVar35);
  bVar18 = bVar18 + 0x52 + bVar20 + 'R' + (CARRY1(bVar32,bVar34) || CARRY1(bVar32 + bVar34,bVar22));
  *(byte *)(uVar36 + 0x10) = *(byte *)(uVar36 + 0x10) & bVar35;
  bVar20 = 9 < (bVar18 & 0xf) || ((uint)unaff_EBX & 0x10) != 0;
  uVar29 = CONCAT31(uVar23,bVar18 + bVar20 * '\x06') & 0xffffff0f;
  uVar37 = CONCAT22((short)(uVar29 >> 0x10),CONCAT11(bVar17 + bVar20,(char)uVar29)) + 0x209d1052 +
           (uint)bVar20;
  *(byte *)(uVar36 + 0x10) = *(byte *)(uVar36 + 0x10) & bVar35;
  *(uint *)(uVar36 - 4) = uVar36;
  pbVar21 = (byte *)((int)&((String *)(unaff_ESI.m_Index + -0x34efadf0))->monitor + 1);
  bVar18 = *pbVar21;
  bVar32 = (byte)(uVar37 + 0x15811052 >> 8);
  bVar17 = *pbVar21 + bVar32;
  *pbVar21 = bVar17 + (0xea7eefad < uVar37);
  uVar29 = (uint)(CARRY1(bVar18,bVar32) || CARRY1(bVar17,0xea7eefad < uVar37));
  bVar20 = 0xea0fefad < uVar37 + 0x15811052 || CARRY4(uVar37 + 0x2b7120a4,uVar29);
  pbVar38 = (byte *)(uVar37 + 0x2b7120a4 + uVar29);
  *(uint *)(uVar36 - 8) = uVar36;
  bVar22 = CARRY1(bRam_?,bVar35) || CARRY1(bRam_? + bVar35,bVar20);
  bRam_? = bRam_? + bVar35 + bVar20;
  *(undefined2 *)(uVar36 - 0xc) = in_SS;
  *(uint *)(uVar36 - 0x10) = uVar36;
  pbVar21 = (byte *)((int)&(worldObjectData->fields)._freeList + 2);
  bVar20 = CARRY1(*pbVar21,bVar19) || CARRY1(*pbVar21 + bVar19,bVar22);
  *pbVar21 = *pbVar21 + bVar19 + bVar22;
  *(uint *)(uVar36 - 0x14) = uVar36;
  pbVar21 = (byte *)((int)&((String *)(unaff_ESI.m_Index + 0x18fb1050))->klass + uVar36 + 2);
  bVar32 = (byte)pbVar38;
  bVar22 = CARRY1(*pbVar21,bVar32) || CARRY1(*pbVar21 + bVar32,bVar20);
  *pbVar21 = *pbVar21 + bVar32 + bVar20;
  *(uint *)(uVar36 - 0x18) = uVar36;
  bVar19 = *pbVar38;
  bVar17 = (byte)((uint)pbVar38 >> 8);
  bVar18 = *pbVar38;
  *pbVar38 = bVar18 + bVar17 + bVar22;
  puVar39 = (uint *)(uVar36 + 0x10);
  uVar40 = (uint)(CARRY1(bVar19,bVar17) || CARRY1(bVar18 + bVar17,bVar22));
  uVar37 = *puVar39;
  uVar29 = *puVar39;
  *puVar39 = (uVar29 - uVar36) - uVar40;
  puVar39 = (uint *)(uVar36 + 0x10);
  uVar29 = (uint)(uVar37 < uVar36 || uVar29 - uVar36 < uVar40);
  bVar20 = *puVar39 < uVar36 || *puVar39 - uVar36 < uVar29;
  *puVar39 = (*puVar39 - uVar36) - uVar29;
  *(undefined4 *)(uVar36 - 0x1c) = 0x19;
  *(uint *)(uVar36 - 0x20) = uVar36;
  pbVar21 = (byte *)((int)&worldObjectData[-0x194fe4b].fields._values + 1);
  bVar18 = *pbVar21;
  bVar19 = *pbVar21;
  *pbVar21 = bVar19 + bVar2 + bVar20;
  puVar39 = (uint *)(uVar36 + 0x10);
  uVar29 = (uint)(CARRY1(bVar18,bVar2) || CARRY1(bVar19 + bVar2,bVar20));
  bVar20 = *puVar39 < uVar36 || *puVar39 - uVar36 < uVar29;
  *puVar39 = (*puVar39 - uVar36) - uVar29;
  *pfVar27 = (float)extraout_ST0;
  *(uint *)(uVar36 - 0x24) = uVar36;
  bVar18 = (byte)(uVar28 >> 8);
  bVar19 = bVar18 + bVar33;
  puVar39 = (uint *)CONCAT22((short)(uVar28 >> 0x10),CONCAT11(bVar19 + bVar20,bVar35));
  puVar39[4] = (puVar39[4] - (int)puVar39) - (uint)(CARRY1(bVar18,bVar33) || CARRY1(bVar19,bVar20));
  uVar28 = *puVar39;
  *(uint **)(uVar36 - 0x28) = puVar39;
  pbVar21 = pbVar38 + 0x1a;
  bVar19 = *pbVar21;
  *pbVar21 = *pbVar21 + bVar2;
  *(uint **)(uVar36 - 0x2c) = puVar39;
  *(uint **)(uVar36 - 0x30) = puVar39;
  *(char *)((int)puVar39 + -0x62efade6) =
       *(char *)((int)puVar39 + -0x62efade6) + bVar35 +
       (CARRY1(in_stack_41,bVar34) || CARRY1(in_stack_41 + bVar34,CARRY1(bVar19,bVar2)))
  ;
  *(byte *)(puVar39 + 4) = (byte)puVar39[4] & bVar35;
  bVar19 = (byte)((uint)unaff_EBX & uVar28);
  puVar42 = (uint *)CONCAT22((short)(((uint)unaff_EBX & uVar28) >> 0x10),CONCAT11(0x1a,bVar19));
  *(uint **)(uVar36 - 0x34) = puVar39;
  bVar18 = bVar17 + bVar19;
  uVar43 = (undefined2)((uint)pbVar38 >> 0x10);
  puVar44 = (uint *)CONCAT22(uVar43,CONCAT11(bVar18,bVar32));
  uVar37 = CONCAT31((int3)((uint)puVar39 >> 8),(bVar35 - (char)puVar39[4]) - CARRY1(bVar17,bVar19));
  uVar28 = *puVar42;
  *puVar42 = *puVar42 + (int)puVar42;
  puVar45 = (undefined1 *)(uVar36 - 0x38);
  puVar46 = (undefined1 *)(uVar36 - 0x38);
  *(uint *)(uVar36 - 0x38) = uVar37;
  bVar19 = *(byte *)&((String *)unaff_ESI.m_Index)->klass;
  bVar17 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar18;
  *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar17 + CARRY4(uVar28,(uint)puVar42);
  uVar28 = (uint)(CARRY1(bVar19,bVar18) || CARRY1(bVar17,CARRY4(uVar28,(uint)puVar42)));
  uVar29 = uVar37 - *(uint *)(uVar37 + 0x10);
  uVar40 = uVar29 - uVar28;
  pbVar21 = (byte *)((int)puVar42 + -1);
  puVar39 = (uint *)(uVar40 + 0x10);
  uVar28 = (uint)(uVar37 < *(uint *)(uVar37 + 0x10) || uVar29 < uVar28);
  uVar29 = uVar40 - *puVar39;
  bVar20 = uVar40 < *puVar39 || uVar29 < uVar28;
  iVar6 = uVar29 - uVar28;
  bVar19 = (byte)iVar6;
  if (SBORROW4(uVar40,*puVar39) == SBORROW4(uVar29,uVar28)) {
    *(int *)(uVar36 - 0x3c) = iVar6;
    bVar20 = CARRY1(in_stack_47,bVar19) || CARRY1(in_stack_47 + bVar19,bVar20);
    *(int *)(uVar36 - 0x3c) = iVar6;
    bVar22 = CARRY1(bVar18,bVar32) || CARRY1(bVar18 + bVar32,bVar20);
    puVar44 = (uint *)CONCAT22(uVar43,CONCAT11(bVar18 + bVar32 + bVar20,bVar32));
    *(int *)(uVar36 - 0x3c) = iVar6;
    bVar20 = CARRY1(bVar2,bVar34) || CARRY1(bVar2 + bVar34,bVar22);
    bVar17 = bVar2 + bVar34 + bVar22;
    pfVar27 = (float *)CONCAT31((int3)((uint)pfVar27 >> 8),bVar17);
    *(int *)(uVar36 - 0x3c) = iVar6;
    bVar2 = *(byte *)&((String *)unaff_ESI.m_Index)->klass;
    bVar18 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar17;
    *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar18 + bVar20;
    *(char *)(iVar6 + 0x10) =
         (*(char *)(iVar6 + 0x10) - bVar19) - (CARRY1(bVar2,bVar17) || CARRY1(bVar18,bVar20));
    pbVar21 = (byte *)((uint)pbVar21 ^ *puVar44);
    *(int *)(uVar36 - 0x40) = iVar6;
    puVar39 = puVar44 + 6;
    uVar28 = *puVar39;
    *(byte *)puVar39 = (byte)*puVar39 + (byte)pbVar21;
    puVar45 = (undefined1 *)(uVar36 - 0x44);
    *(int *)(uVar36 - 0x44) = iVar6;
    bVar2 = (byte)((uint)pbVar21 >> 8);
    bVar22 = CARRY1(in_stack_48,bVar2) ||
             CARRY1(in_stack_48 + bVar2,CARRY1((byte)uVar28,(byte)pbVar21));
  }
  else {
    pbVar38 = (byte *)(iVar6 + 0x10);
    bVar2 = *pbVar38;
    bVar18 = *pbVar38 - bVar19;
    bVar22 = *pbVar38 < bVar19 || bVar18 < bVar20;
    *pbVar38 = bVar18 - bVar20;
    if ((SBORROW1(bVar2,bVar19) != SBORROW1(bVar18,bVar20)) == (char)*pbVar38 < '\0')
    goto code_?;
  }
  *(int *)(puVar45 + -4) = iVar6;
  bVar18 = (byte)((uint)iVar6 >> 8);
  bVar32 = (byte)((uint)pbVar21 >> 8);
  bVar2 = bVar18 + bVar32;
  uVar29 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(bVar2 + bVar22,bVar19));
  puVar39 = (uint *)(uVar29 + 0x10);
  uVar28 = (uint)(CARRY1(bVar18,bVar32) || CARRY1(bVar2,bVar22));
  bVar20 = *puVar39 < uVar29 || *puVar39 - uVar29 < uVar28;
  *puVar39 = (*puVar39 - uVar29) - uVar28;
  bVar19 = (byte)puVar44;
  bVar18 = bVar19 % 0x1b;
  *(uint *)(puVar45 + -8) = uVar29;
  bVar17 = (byte)pfVar27;
  bVar2 = bVar17 + bVar32;
  pfVar27 = (float *)CONCAT31((int3)((uint)pfVar27 >> 8),bVar2 + bVar20);
  iVar6 = (uVar29 - *(int *)(uVar29 + 0x10)) -
           (uint)(CARRY1(bVar17,bVar32) || CARRY1(bVar2,bVar20));
  *(byte *)(iVar6 + 0x10) = *(byte *)(iVar6 + 0x10) & (byte)iVar6;
  puVar46 = puVar45 + -8;
  *(undefined2 *)(puVar45 + -8) = in_DS;
  bVar2 = bVar18 + 0xae;
  puVar44 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)puVar44 >> 0x10),
                                             CONCAT11(bVar19 / 0x1b,bVar19)) >> 8),bVar2);
  pbVar38 = pbVar21 + 0x1c;
  bVar22 = CARRY1(*pbVar38,bVar2) || CARRY1(*pbVar38 + bVar2,bVar18 < 0x52);
  *pbVar38 = *pbVar38 + bVar2 + (bVar18 < 0x52);
code_?:
  *(int *)(puVar46 + -4) = iVar6;
  puVar39 = puVar44 + 7;
  bVar32 = (byte)((uint)pfVar27 >> 8);
  bVar2 = (byte)*puVar39 + bVar32;
  bVar20 = CARRY1((byte)*puVar39,bVar32) || CARRY1(bVar2,bVar22);
  *(byte *)puVar39 = bVar2 + bVar22;
  *(int *)(puVar46 + -8) = iVar6;
  bVar2 = (byte)((uint)puVar44 >> 8);
  bVar22 = CARRY1(bRam_?,bVar2);
  bVar2 = bRam_? + bVar2;
  bRam_? = bVar2 + bVar20;
  uVar28 = (uint)(bVar22 || CARRY1(bVar2,bVar20));
  bVar20 = puVar44 < (uint *)0x1d6f1052 || (int)puVar44 + 0xe290efaeU < uVar28;
  uVar28 = ((int)puVar44 + 0xe290efaeU) - uVar28;
  *(int *)(puVar46 + -0xc) = iVar6;
  pbVar38 = &stack0x1db9104f + (int)pbVar21;
  bVar34 = (byte)iVar6;
  bVar22 = CARRY1(*pbVar38,bVar34) || CARRY1(*pbVar38 + bVar34,bVar20);
  *pbVar38 = *pbVar38 + bVar34 + bVar20;
  *(int *)(puVar46 + -0x10) = iVar6;
  bVar19 = (byte)((uint)iVar6 >> 8);
  bVar33 = (byte)pbVar21;
  bVar2 = bVar19 + bVar33;
  bVar35 = bVar2 + bVar22;
  piVar5 = (int *)CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(bVar35,bVar34));
  uVar29 = (uint)(CARRY1(bVar19,bVar33) || CARRY1(bVar2,bVar22));
  uVar37 = uVar28 + 0xe1fcefae;
  bVar20 = uVar28 < 0x1e031052 || uVar37 < uVar29;
  pbVar49 = (byte *)(uVar37 - uVar29);
  *(int **)(puVar46 + -0x14) = piVar5;
  bVar19 = *pbVar49;
  bVar2 = *pbVar49;
  *pbVar49 = bVar2 + bVar32 + bVar20;
  *(undefined2 *)(puVar46 + -0x18) = in_DS;
  *(int **)(puVar46 + -0x1c) = piVar5;
  bVar18 = (byte)pfVar27;
  bVar20 = CARRY1(in_stack_50,bVar18) ||
           CARRY1(in_stack_50 + bVar18,CARRY1(bVar19,bVar32) || CARRY1(bVar2 + bVar32,bVar20));
  *(int **)(puVar46 + -0x20) = piVar5;
  pbVar38 = (byte *)((int)piVar5 + 0x1e);
  bVar22 = CARRY1(*pbVar38,bVar35) || CARRY1(*pbVar38 + bVar35,bVar20);
  *pbVar38 = *pbVar38 + bVar35 + bVar20;
  *(int **)(puVar46 + -0x24) = piVar5;
  pbVar38 = (byte *)((int)&worldObjectData[-0x16a53a0].fields._version + 2);
  bVar20 = CARRY1(*pbVar38,bVar34) || CARRY1(*pbVar38 + bVar34,bVar22);
  *pbVar38 = *pbVar38 + bVar34 + bVar22;
  *(undefined2 *)(puVar46 + -0x28) = in_DS;
  *(int **)(puVar46 + -0x2c) = piVar5;
  bVar17 = (byte)((uint)pbVar49 >> 8);
  bVar22 = CARRY1(bVar18,bVar17) || CARRY1(bVar18 + bVar17,bVar20);
  uVar23 = (undefined3)((uint)pfVar27 >> 8);
  cVar26 = bVar18 + bVar17 + bVar20;
  pcVar51 = (char *)CONCAT31(uVar23,cVar26);
  *(undefined2 *)(puVar46 + -0x30) = in_DS;
  *(int **)(puVar46 + -0x34) = piVar5;
  bVar18 = (byte)pbVar49;
  bVar2 = *(char *)&((String *)unaff_ESI.m_Index)->klass + bVar18;
  bVar20 = CARRY1(*(byte *)&((String *)unaff_ESI.m_Index)->klass,bVar18) || CARRY1(bVar2,bVar22);
  *(byte *)&((String *)unaff_ESI.m_Index)->klass = bVar2 + bVar22;
  *(int **)(puVar46 + -0x34) = piVar5;
  bVar22 = CARRY1(*pbVar21,bVar32) || CARRY1(*pbVar21 + bVar32,bVar20);
  *pbVar21 = *pbVar21 + bVar32 + bVar20;
  *(int **)(puVar46 + -0x34) = piVar5;
  pbVar38 = pbVar49 + 0x1f;
  bVar19 = *pbVar38;
  bVar2 = *pbVar38;
  *pbVar38 = bVar2 + bVar34 + bVar22;
  *(int **)(puVar46 + -0x38) = piVar5;
  bVar20 = CARRY1(in_stack_52,bVar35) ||
           CARRY1(in_stack_52 + bVar35,CARRY1(bVar19,bVar34) || CARRY1(bVar2 + bVar34,bVar22))
  ;
  *(int **)(puVar46 + -0x3c) = piVar5;
  pbVar38 = (byte *)((int)piVar5 + -0x40efade1);
  bVar22 = CARRY1(*pbVar38,bVar33) || CARRY1(*pbVar38 + bVar33,bVar20);
  *pbVar38 = *pbVar38 + bVar33 + bVar20;
  *(int **)(puVar46 + -0x3c) = piVar5;
  pcVar53 = (char *)CONCAT22((short)((uint)pbVar49 >> 0x10),CONCAT11(bVar17 * '\x02' + bVar22,bVar18)
                            );
  *(int **)(puVar46 + -0x3c) = piVar5;
  *pcVar51 = *pcVar51 + cVar26 + (CARRY1(bVar17,bVar17) || CARRY1(bVar17 * '\x02',bVar22));
  *(byte *)(piVar5 + 4) = *(byte *)(piVar5 + 4) & bVar34;
  *(byte *)(piVar5 + 4) = *(byte *)(piVar5 + 4) & bVar34;
  *(byte **)(puVar46 + -0x40) = pbVar21;
  pbVar38 = (byte *)(piVar5 + 4);
  *pbVar38 = *pbVar38 & bVar34;
  if (-1 < (char)*pbVar38) {
    *(int **)(puVar46 + -0x44) = piVar5;
    *pcVar53 = *pcVar53 + bVar18;
    *piVar5 = (int)(pcVar53 + *piVar5);
    pcVar51 = (char *)CONCAT31(uVar23,cVar26 + *pcVar51);
  }
  *(char *)((uint)pcVar51 | *(uint *)(pcVar51 + 0xADDR)) =
       (*(char *)((uint)pcVar51 | *(uint *)(pcVar51 + 0xADDR)) - bVar33) -
       CARRY1(bVar34 + *pbVar21,*(byte *)&((String *)unaff_ESI.m_Index)->klass);
  pcVar54 = (code *)swi(3);
  pMVar14 = (MVWorldObjectClient *)(*pcVar54)();
  return pMVar14;
code_?:
  pOVar1 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar2 = 0;
  if (pMVar9 == (MVNetworkGame *)0x0) goto code_?;
  pMVar10 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0);
  bVar2 = 0;
  if (pMVar10 == (MVLocalPlayer *)0x0) goto code_?;
  unaff_EBX = (String *)(pMVar10->fields)._._ActorNr_k__BackingField;
  bVar2 = 0;
  if (unaff_ESI.m_Index == 0) goto code_?;
  pIVar4 = (TypeInfo__System__Int32->_0).element_class;
  bVar2 = *(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) < pIVar4;
  if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) == pIVar4) {
    piVar5 = (int *)func_?();
    if ((String *)*piVar5 != unaff_EBX) {
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

