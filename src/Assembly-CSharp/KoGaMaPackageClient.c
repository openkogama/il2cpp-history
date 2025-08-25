
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
          (*(code *)pOVar2->klass[2]._1.instance_size)(pOVar2,pOVar3);
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
  cVar1 = '\0';
  func_?();
  LOCK();
  *unaff_EBX = this;
  UNLOCK();
  pcVar2 = (char *)(unaff_FS_OFFSET + extraout_ECX + -0x11ef9bcd);
  *pcVar2 = *pcVar2 + (char)unaff_EBX + cVar1;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      (**(code **)(*in_stack_2 + 600))();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) {
code_?:
    func_?();
    goto code_?;
  }
  puVar3 = (undefined4 *)func_?();
  switch(*puVar3) {
  case 0:
    pOVar1 = (Object *)func_?();
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       worldObjectData,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
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
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                       worldObjectData,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar5 = (int *)func_?();
      unaff_ESI.m_Index = *piVar5;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 != (MVNetworkGame *)0x0) &&
         (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
         pMVar7 != (MVLocalPlayer *)0x0)) {
        if ((String *)unaff_ESI.m_Index == (String *)(pMVar7->fields)._._ActorNr_k__BackingField) {
          this_01 = (MVAvatarLocal *)func_?();
          MVAvatarLocal::MVAvatarLocal__ctor(this_01,worldObjectData,worldObjects,(MethodInfo *)0x0)
          ;
          return (MVWorldObjectClient *)this_01;
        }
        if ((String *)unaff_ESI.m_Index != (String *)0xffffffff) {
          this = (MVAvatarRemote *)func_?();
          MVAvatarRemote::MVAvatarRemote__ctor(this,worldObjectData,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this;
        }
        this_00 = (MVPreviewAvatar *)func_?();
        MVPreviewAvatar::MVPreviewAvatar__ctor
                  (this_00,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_00;
      }
    }
    break;
  case 1:
    this_02 = (MVCubeModelInstance *)func_?();
    MVCubeModelInstance::MVCubeModelInstance__ctor
              (this_02,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_02;
  case 2:
    this_03 = (MVPointLight *)func_?();
    MVPointLight::MVPointLight__ctor(this_03,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_03;
  case 3:
    this_04 = (MVTriggerBox *)func_?();
    MVTriggerBox::MVTriggerBox__ctor(this_04,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_04;
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
    pSVar8 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_WOCM_trying_to_create_unknown_ty,pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar8,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)0x0;
  case 7:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
    pMVar9 = (MVSpawnPointBlue *)func_?();
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar9,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)pMVar9;
  case 8:
    this_05 = (MVCubeModelPrototypeTerrain *)func_?();
    MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
              (this_05,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_05;
  case 9:
    this_06 = (MVGroup *)func_?();
    MVGroup::MVGroup__ctor_2(this_06,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_06;
  case 0xd:
    this_07 = (MVSoundEmitter *)func_?();
    MVSoundEmitter::MVSoundEmitter__ctor(this_07,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_07;
  case 0x11:
    this_08 = (MVFlag *)func_?();
    MVFlag::MVFlag__ctor(this_08,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_08;
  case 0x13:
    this_09 = (MVBattery *)func_?();
    MVBattery::MVBattery__ctor(this_09,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_09;
  case 0x14:
    this_10 = (MVToggleBox *)func_?();
    MVToggleBox::MVToggleBox__ctor(this_10,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_10;
  case 0x15:
    this_11 = (MVNegate *)func_?();
    MVNegate::MVNegate__ctor(this_11,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_11;
  case 0x16:
    this_12 = (MVAnd *)func_?();
    MVAnd::MVAnd__ctor(this_12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_12;
  case 0x17:
    this_13 = (MVExplosives *)func_?();
    MVExplosives::MVExplosives__ctor(this_13,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_13;
  case 0x18:
    this_14 = (MVTextMsg *)func_?();
    MVTextMsg::MVTextMsg__ctor(this_14,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_14;
  case 0x19:
    this_15 = (MVFire *)func_?();
    MVFire::MVFire__ctor(this_15,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_15;
  case 0x1a:
    this_16 = (MVSmoke *)func_?();
    MVSmoke::MVSmoke__ctor(this_16,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_16;
  case 0x1b:
    this_17 = (MVTimeTrigger *)func_?();
    MVTimeTrigger::MVTimeTrigger__ctor(this_17,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_17;
  case 0x1c:
    this_18 = (MVTeleporter *)func_?();
    MVTeleporter::MVTeleporter__ctor(this_18,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_18;
  case 0x1d:
    this_19 = (MVGoal *)func_?();
    MVGoal::MVGoal__ctor(this_19,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_19;
  case 0x20:
    this_20 = (MVCubeModelFineGrainedTerrain *)func_?();
    MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
              (this_20,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_20;
  case 0x21:
    this_21 = (MVPressurePlate *)func_?();
    MVPressurePlate::MVPressurePlate__ctor(this_21,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_21;
  case 0x25:
    this_22 = (MVPickupItemBase *)func_?();
    MVPickupItemBase::MVPickupItemBase__ctor(this_22,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)this_22;
  case 0x26:
    this_23 = (MVSkybox *)func_?();
    MVSkybox::MVSkybox__ctor(this_23,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_23;
  case 0x27:
    this_24 = (MVSpawnPointRed *)func_?();
    MVSpawnPointRed::MVSpawnPointRed__ctor(this_24,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_24;
  case 0x28:
    this_25 = (MVSpawnPointGreen *)func_?();
    MVSpawnPointGreen::MVSpawnPointGreen__ctor
              (this_25,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_25;
  case 0x29:
    this_26 = (MVSpawnPointYellow *)func_?();
    MVSpawnPointYellow::MVSpawnPointYellow__ctor
              (this_26,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_26;
  case 0x2a:
    pMVar9 = (MVSpawnPointBlue *)func_?();
    MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar9,worldObjectData,worldObjects,(MethodInfo *)0x0)
    ;
    return (MVWorldObjectClient *)pMVar9;
  case 0x2b:
    this_27 = (MVObjectEnabler *)func_?();
    MVObjectEnabler::MVObjectEnabler__ctor(this_27,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_27;
  case 0x2c:
    this_28 = (MVWaterPlane *)func_?();
    MVWaterPlane::MVWaterPlane__ctor(this_28,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_28;
  case 0x2d:
    pOVar1 = (Object *)func_?();
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           worldObjectData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI.m_Index == 0) break;
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
      unaff_EBX = mscorlib.dll::System::Enum::Enum_ToString
                            ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
      if (unaff_ESI.m_Index != 0) {
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
                          (unaff_ESI.m_Index,(Object *)unaff_EBX,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
            puVar10 = (undefined1 *)func_?();
            switch(*puVar10) {
            case 7:
              this_29 = (MVMovable *)func_?();
              MVMovable::MVMovable__ctor(this_29,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_29;
            case 8:
              this_30 = (MVBody *)func_?();
              MVBody::MVBody__ctor(this_30,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_30;
            case 9:
              this_31 = (MVTeleportGroup *)func_?();
              MVTeleportGroup::MVTeleportGroup__ctor
                        (this_31,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_31;
            case 10:
              this_32 = (MVSentryGunBlueprint *)func_?();
              MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                        (this_32,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_32;
            case 0xb:
              this_33 = (MVMovingPlatform *)func_?();
              MVMovingPlatform::MVMovingPlatform__ctor
                        (this_33,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_33;
            case 0xc:
              this_34 = (MVMovingPlatformGroup *)func_?();
              MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                        (this_34,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_34;
            case 0xd:
              this_35 = (MVRotator *)func_?();
              MVRotator::MVRotator__ctor(this_35,worldObjectData,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_35;
            case 0xe:
              goto code_?;
            default:
              pSVar8 = mscorlib.dll::System::Enum::Enum_ToString
                                  ((Enum *)&stack0xffffffec,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_3
                                  (StringLiteral_WOCM_trying_to_create_unknown_bl,pSVar8,
                                   (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pSVar8,(MethodInfo *)0x0);
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
    this_36 = (MVPulseBox *)func_?();
    MVPulseBox::MVPulseBox__ctor(this_36,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_36;
  case 0x2f:
    this_37 = (MVRandomBox *)func_?();
    MVRandomBox::MVRandomBox__ctor(this_37,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_37;
  case 0x30:
    this_38 = (MVSentryGun *)func_?();
    MVSentryGun::MVSentryGun__ctor(this_38,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_38;
  case 0x31:
    this_39 = (MVCollectible *)func_?();
    MVCollectible::MVCollectible__ctor(this_39,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_39;
  case 0x32:
    this_40 = (MVMovingPlatformNode *)func_?();
    MVMovingPlatformNode::MVMovingPlatformNode__ctor
              (this_40,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_40;
  case 0x33:
    this_41 = (MVWaterPlanePreset *)func_?();
    MVWaterPlanePreset::MVWaterPlanePreset__ctor
              (this_41,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_41;
  case 0x34:
    this_42 = (MVPointLightPreset *)func_?();
    MVPointLightPreset::MVPointLightPreset__ctor
              (this_42,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_42;
  case 0x35:
code_?:
    this_43 = (MVGhostInstance *)func_?();
    MVGhostInstance::MVGhostInstance__ctor(this_43,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_43;
  case 0x36:
    this_44 = (MVCubeGun *)func_?();
    MVCubeGun::MVCubeGun__ctor(this_44,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_44;
  case 0x37:
    this_45 = (MVCheckpoint *)func_?();
    MVCheckpoint::MVCheckpoint__ctor(this_45,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_45;
  case 0x38:
    this_46 = (MVHoverCraft *)func_?();
    MVHoverCraft::MVHoverCraft__ctor(this_46,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_46;
  case 0x39:
    this_47 = (MVWorldObjectSpawnerVehicle *)func_?();
    MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
              (this_47,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_47;
  case 0x3b:
    this_48 = (MVJetPack *)func_?();
    MVJetPack::MVJetPack__ctor(this_48,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_48;
  case 0x3c:
    this_49 = (MVRoundCube *)func_?();
    MVRoundCube::MVRoundCube__ctor(this_49,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_49;
  case 0x3d:
    this_50 = (MVAdvancedGhost *)func_?();
    MVAdvancedGhost::MVAdvancedGhost__ctor(this_50,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_50;
  case 0x3e:
    this_51 = (MVHamsterWheel *)func_?();
    MVHamsterWheel::MVHamsterWheel__ctor(this_51,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_51;
  case 0x3f:
    this_52 = (MVKillLimit *)func_?();
    MVKillLimit::MVKillLimit__ctor(this_52,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_52;
  case 0x40:
    this_53 = (MVOculusKillLimit *)func_?();
    MVOculusKillLimit::MVOculusKillLimit__ctor
              (this_53,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_53;
  case 0x41:
    this_54 = (MVCountingCube *)func_?();
    MVCountingCube::MVCountingCube__ctor(this_54,worldObjectData,worldObjects,(MethodInfo *)0x0);
    return (MVWorldObjectClient *)this_54;
  default:
    switch(*puVar3) {
    case 0x76:
      this_55 = (MVVehicleEnergy *)func_?();
      WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                (this_55,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_55;
    case 0x77:
      this_56 = (MVWorldObjectSpawnerVehicleEnergy *)func_?();
      WorldObjectTypes::VehicleEnergy::MVWorldObjectSpawnerVehicleEnergy::
      MVWorldObjectSpawnerVehicleEnergy__ctor
                (this_56,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_56;
    default:
      goto code_?;
    case 0x82:
      this_57 = (MVGamePoint *)func_?();
      MVGamePoint::MVGamePoint__ctor(this_57,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_57;
    case 0x83:
      pMVar11 = (MVWorldObjectClient *)func_?();
      MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                ((MVGamePassProgressionDataObject *)pMVar11,worldObjectData,worldObjects,
                 (MethodInfo *)0x0);
      return pMVar11;
    case 0x85:
      goto code_?;
    case 0x86:
      this_60 = (MVAvatarSpawnRoleCreator *)func_?();
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                (this_60,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_60;
    case 0x87:
      this_61 = (MVGameOptionDataObject *)func_?();
      MVGameOptionDataObject::MVGameOptionDataObject__ctor
                (this_61,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_61;
    case 0x88:
      this_62 = (MVObjectTransparency *)func_?();
      WorldObjectTypes::MVObjectTransparency::MVObjectTransparency::MVObjectTransparency__ctor
                (this_62,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_62;
    case 0x91:
      this_63 = (MVCameraSettings *)func_?();
      MVCameraSettings::MVCameraSettings__ctor
                (this_63,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_63;
    case 0x92:
      this_64 = (MVGravityCube *)func_?();
      MVGravityCube::MVGravityCube__ctor(this_64,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_64;
    case 0x94:
      this_65 = (MVGameCoin *)func_?();
      MVGameCoin::MVGameCoin__ctor(this_65,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_65;
    case 0x95:
      this_66 = (MVGameCoinChest *)func_?();
      MVGameCoinChest::MVGameCoinChest__ctor(this_66,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      return (MVWorldObjectClient *)this_66;
    case 0x96:
      this_67 = (ThemeWorldObject *)func_?();
      ThemeWorldObject::ThemeWorldObject__ctor
                (this_67,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_67;
    case 0x97:
      this_68 = (MVDoor *)func_?();
      WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                (this_68,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_68;
    case 0x98:
      this_69 = (MVDoorBlueprint *)func_?();
      WorldObjectTypes::MVDoor::MVDoorBlueprint::MVDoorBlueprint__ctor
                (this_69,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_69;
    case 0x99:
      this_70 = (MVMeleeWeaponBase *)func_?();
      Assets::Scripts::WorldObjectTypes::MeleeWeapon::MVMeleeWeaponBase::MVMeleeWeaponBase__ctor
                (this_70,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_70;
    case 0x9a:
      pMVar12 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar12;
    case 0x9b:
      this_71 = (MVCostumeBase *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::MVCostumeBase__ctor
                (this_71,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_71;
    case 0x9c:
      pMVar12 = (MVCostumeBaseBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
      MVCostumeBaseBlueprint__ctor(pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar12;
    case 0x9d:
      this_72 = (MVCustomGunBase *)func_?();
      Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBase::MVCustomGunBase__ctor
                (this_72,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_72;
    case 0x9e:
      this_73 = (MVCustomGunBlueprint *)func_?();
      Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::MVCustomGunBlueprint__ctor
                (this_73,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_73;
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
    case 0xb4:
      this_84 = (TimeAttackFlag *)func_?();
      TimeAttackFlag::TimeAttackFlag__ctor(this_84,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_84;
    case 0xb5:
      this_85 = (MVGamePointChest *)func_?();
      MVGamePointChest::MVGamePointChest__ctor
                (this_85,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_85;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  uVar13 = func_?();
  bVar14 = (byte)uVar13;
  bVar15 = (byte)unaff_EBX;
  bVar16 = (char)((uint)unaff_EBX >> 8) * '\x02' + (bVar14 < 100);
  ppDVar17 = &worldObjectData[0x194a5ac].fields._keys;
  bVar18 = (byte)((ulonglong)uVar13 >> 8);
  bVar19 = CARRY1(*(byte *)ppDVar17,bVar18) || CARRY1(*(char *)ppDVar17 + bVar18,bVar14 < 100);
  *(byte *)ppDVar17 = *(char *)ppDVar17 + bVar18 + (bVar14 < 100);
  bVar20 = bVar16 + bVar15;
  bVar21 = CARRY1(bVar16,bVar15) || CARRY1(bVar20,bVar19);
  iVar22 = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar20 + bVar19,bVar15)) + -1;
  bVar15 = (byte)iVar22;
  bVar16 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar16 + bVar15;
  bVar19 = CARRY1(bVar16,bVar15) || CARRY1(bVar20,bVar21);
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + bVar21,bVar15)) + -1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + extraout_ECX + 0x3d);
  bVar15 = *pbVar23;
  bVar16 = (byte)extraout_ECX;
  bVar20 = *pbVar23;
  *pbVar23 = bVar20 + bVar16 + bVar19;
  pcVar24 = (char *)((int)worldObjectData + unaff_FS_OFFSET + -0x48ef9bc3);
  *pcVar24 = *pcVar24 + bVar16 + (CARRY1(bVar15,bVar16) || CARRY1(bVar20 + bVar16,bVar19));
  bVar19 = (uint)uVar13 < 0x4bdf1064;
  bVar15 = (byte)iVar22;
  bVar25 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar25 + bVar15;
  bVar21 = CARRY1(bVar25,bVar15) || CARRY1(bVar20,bVar19);
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + bVar19,bVar15)) + -1;
  bVar15 = (byte)iVar22;
  bVar26 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar26 + bVar15;
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + bVar21,bVar15)) + -1;
  bVar25 = (byte)iVar22;
  bVar18 = bVar18 + bVar25 + (CARRY1(bVar26,bVar15) || CARRY1(bVar20,bVar21));
  uVar27 = CONCAT22((short)((ulonglong)uVar13 >> 0x10),CONCAT11(bVar18,bVar14));
  bVar15 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar15 + bVar25;
  bVar19 = CARRY1(bVar15,bVar25) || CARRY1(bVar20,uVar27 < 0x4bdf1064);
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + (uVar27 < 0x4bdf1064),bVar25)) +
           -1;
  bVar15 = (byte)iVar22;
  bVar25 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar25 + bVar15;
  bVar21 = CARRY1(bVar25,bVar15) || CARRY1(bVar20,bVar19);
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + bVar19,bVar15)) + -1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + extraout_ECX);
  bVar19 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar21);
  *pbVar23 = *pbVar23 + bVar14 + bVar21;
  bVar15 = (byte)iVar22;
  bVar25 = (byte)((uint)iVar22 >> 8);
  bVar20 = bVar25 + bVar15;
  bVar21 = CARRY1(bVar25,bVar15) || CARRY1(bVar20,bVar19);
  iVar22 = CONCAT22((short)((uint)iVar22 >> 0x10),CONCAT11(bVar20 + bVar19,bVar15));
  iVar28 = iVar22 + -1;
  pbVar23 = (byte *)((int)&((String *)unaff_ESI.m_Index)->klass + unaff_FS_OFFSET);
  bVar19 = CARRY1(*pbVar23,bVar18) || CARRY1(*pbVar23 + bVar18,bVar21);
  *pbVar23 = *pbVar23 + bVar18 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + 0x3d);
  bVar21 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar19);
  *pbVar23 = *pbVar23 + bVar16 + bVar19;
  pbVar23 = (byte *)(unaff_FS_OFFSET + uVar27 + 0x3e);
  bVar29 = (byte)((ulonglong)uVar13 >> 0x28);
  bVar19 = CARRY1(*pbVar23,bVar29) || CARRY1(*pbVar23 + bVar29,bVar21);
  *pbVar23 = *pbVar23 + bVar29 + bVar21;
  pbVar23 = &stack0xba10643a + unaff_FS_OFFSET;
  bVar26 = (byte)((ulonglong)uVar13 >> 0x20);
  bVar21 = CARRY1(*pbVar23,bVar26) || CARRY1(*pbVar23 + bVar26,bVar19);
  *pbVar23 = *pbVar23 + bVar26 + bVar19;
  bVar30 = (byte)iVar28;
  bVar15 = (byte)((uint)iVar28 >> 8);
  bVar20 = bVar15 + bVar30;
  bVar19 = CARRY1(bVar15,bVar30) || CARRY1(bVar20,bVar21);
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar20 + bVar21,bVar30));
  pbVar23 = (byte *)(unaff_FS_OFFSET + (int)worldObjectData * 2);
  bVar20 = *pbVar23;
  bVar15 = *pbVar23;
  *pbVar23 = bVar15 + bVar14 + bVar19;
  bVar25 = (byte)((uint)extraout_ECX >> 8);
  *(char *)(unaff_FS_OFFSET + extraout_ECX) =
       *(char *)(unaff_FS_OFFSET + extraout_ECX) + bVar25 +
       (CARRY1(bVar20,bVar14) || CARRY1(bVar15 + bVar14,bVar19));
  in_AF = 9 < (bVar14 & 0xf) | in_AF;
  uVar27 = CONCAT31((int3)(uVar27 >> 8),bVar14 + in_AF * -6) & 0xffffff0f;
  bVar15 = (byte)uVar27;
  iVar22 = CONCAT22((short)(uVar27 >> 0x10),CONCAT11(bVar18 - in_AF,bVar15));
  pbVar23 = &(((String *)(unaff_ESI.m_Index + 0x30))->fields).field_0x7 + unaff_FS_OFFSET;
  bVar19 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,in_AF);
  *pbVar23 = *pbVar23 + bVar16 + in_AF;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar28 + 0x3f);
  bVar21 = CARRY1(*pbVar23,bVar29) || CARRY1(*pbVar23 + bVar29,bVar19);
  *pbVar23 = *pbVar23 + bVar29 + bVar19;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + -0x20ef9bc1);
  bVar19 = CARRY1(*pbVar23,bVar30) || CARRY1(*pbVar23 + bVar30,bVar21);
  *pbVar23 = *pbVar23 + bVar30 + bVar21;
  iVar28 = iVar28 + -1;
  bVar14 = (byte)iVar28;
  bVar30 = (byte)((uint)iVar28 >> 8);
  bVar20 = bVar30 + bVar14;
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar20 + bVar19,bVar14)) + -1;
  bVar31 = (byte)((uint)iVar28 >> 8);
  (&stack0xe510643b)[unaff_FS_OFFSET] =
       (&stack0xe510643b)[unaff_FS_OFFSET] + bVar31 +
       (CARRY1(bVar30,bVar14) || CARRY1(bVar20,bVar19));
  bVar20 = 9 < bVar15 | in_AF;
  uVar27 = CONCAT31((int3)((uint)iVar22 >> 8),bVar15 + bVar20 * -6) & 0xffffff0f;
  iVar22 = CONCAT22((short)(uVar27 >> 0x10),CONCAT11((bVar18 - in_AF) - bVar20,(char)uVar27));
  bVar15 = (byte)iVar28;
  bVar19 = CARRY1(bVar31,bVar15) || CARRY1(bVar31 + bVar15,bVar20);
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar31 + bVar15 + bVar20,bVar15)) + -1;
  bVar15 = (byte)iVar28;
  bVar14 = (byte)((uint)iVar28 >> 8);
  bVar20 = bVar14 + bVar15;
  bVar21 = CARRY1(bVar14,bVar15) || CARRY1(bVar20,bVar19);
  iVar28 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar20 + bVar19,bVar15)) + -1;
  bVar14 = (byte)iVar28;
  bVar15 = (byte)((uint)iVar28 >> 8);
  bVar20 = bVar15 + bVar14;
  bVar19 = CARRY1(bVar15,bVar14) || CARRY1(bVar20,bVar21);
  iVar32 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar20 + bVar21,bVar14));
  iVar28 = iVar32 + -1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + (int)((ulonglong)uVar13 >> 0x20));
  bVar21 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar19);
  *pbVar23 = *pbVar23 + bVar16 + bVar19;
  pbVar23 = (byte *)((int)&worldObjectData->klass + unaff_FS_OFFSET);
  bVar19 = CARRY1(*pbVar23,bVar25) || CARRY1(*pbVar23 + bVar25,bVar21);
  *pbVar23 = *pbVar23 + bVar25 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 * 3 + 0x6a);
  bVar21 = CARRY1(*pbVar23,bVar26) || CARRY1(*pbVar23 + bVar26,bVar19);
  *pbVar23 = *pbVar23 + bVar26 + bVar19;
  pbVar23 = (byte *)(extraout_ECX + 0x40);
  bVar15 = (byte)((uint)iVar28 >> 8);
  bVar20 = *pbVar23 + bVar15;
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = (byte *)((int)&((String *)(unaff_ESI.m_Index + -0x3cef9bc0))->klass + unaff_FS_OFFSET);
  bVar15 = (byte)iVar28;
  bVar20 = *pbVar23 + bVar15;
  bVar21 = CARRY1(*pbVar23,bVar15) || CARRY1(bVar20,bVar19);
  *pbVar23 = bVar20 + bVar19;
  iVar22 = iVar22 + 3;
  bVar15 = (byte)iVar22;
  bVar20 = bVar15 + bVar25;
  bVar19 = CARRY1(bVar15,bVar25) || CARRY1(bVar20,bVar21);
  iVar22 = CONCAT31((int3)((uint)iVar22 >> 8),bVar20 + bVar21);
  iVar28 = iVar22 + 1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + 0x32106441);
  bVar21 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar19);
  *pbVar23 = *pbVar23 + bVar16 + bVar19;
  iVar33 = extraout_ECX + 1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + extraout_ECX + -0x31ef9bbc);
  bVar16 = (byte)((uint)iVar33 >> 8);
  bVar19 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar21);
  *pbVar23 = *pbVar23 + bVar16 + bVar21;
  bVar21 = CARRY1(bVar14,bVar29) || CARRY1(bVar14 + bVar29,bVar19);
  iVar34 = CONCAT31((int3)((uint)iVar32 >> 8),bVar14 + bVar29 + bVar19) + 1;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar28);
  bVar30 = (byte)iVar34;
  bVar19 = CARRY1(*pbVar23,bVar30) || CARRY1(*pbVar23 + bVar30,bVar21);
  *pbVar23 = *pbVar23 + bVar30 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + 0x62106444);
  bVar15 = (byte)((uint)iVar34 >> 8);
  bVar21 = CARRY1(*pbVar23,bVar15) || CARRY1(*pbVar23 + bVar15,bVar19);
  *pbVar23 = *pbVar23 + bVar15 + bVar19;
  pbVar23 = (byte *)((int)worldObjectData + unaff_FS_OFFSET + -0x53ef9bbc);
  bVar14 = (byte)iVar28;
  bVar19 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar21);
  *pbVar23 = *pbVar23 + bVar14 + bVar21;
  bVar20 = (byte)iVar33 + bVar26;
  bVar21 = CARRY1((byte)iVar33,bVar26) || CARRY1(bVar20,bVar19);
  bVar20 = bVar20 + bVar19;
  bVar19 = CARRY1(bVar29,bVar29) || CARRY1(bVar29 * '\x02',bVar21);
  bVar25 = bVar29 * '\x02' + bVar21;
  iVar32 = CONCAT22((short)((ulonglong)uVar13 >> 0x30),CONCAT11(bVar25,bVar26));
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar34);
  bVar21 = CARRY1(*pbVar23,bVar30) || CARRY1(*pbVar23 + bVar30,bVar19);
  *pbVar23 = *pbVar23 + bVar30 + bVar19;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + 0x46);
  bVar19 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar21);
  *pbVar23 = *pbVar23 + bVar14 + bVar21;
  bVar21 = CARRY1(bVar15,bVar30) || CARRY1(bVar15 + bVar30,bVar19);
  bVar31 = bVar15 + bVar30 + bVar19;
  iVar34 = CONCAT22((short)((uint)iVar34 >> 0x10),CONCAT11(bVar31,bVar30));
  pbVar23 = &stack0x00000042 + unaff_FS_OFFSET;
  bVar15 = (byte)((uint)iVar28 >> 8);
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(*pbVar23 + bVar15,bVar21);
  *pbVar23 = *pbVar23 + bVar15 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar32 + -0x50ef9bbb);
  bVar21 = CARRY1(*pbVar23,bVar20) || CARRY1(*pbVar23 + bVar20,bVar19);
  *pbVar23 = *pbVar23 + bVar20 + bVar19;
  bVar19 = CARRY1(bVar15,bVar26) || CARRY1(bVar15 + bVar26,bVar21);
  uVar35 = (undefined2)((uint)iVar28 >> 0x10);
  bVar18 = bVar15 + bVar26 + bVar21;
  bVar29 = (byte)((uint)(iVar34 + -1) >> 8);
  bVar15 = bVar20 + bVar29;
  bVar21 = CARRY1(bVar20,bVar29) || CARRY1(bVar15,bVar19);
  bVar15 = bVar15 + bVar19;
  pbVar23 = (byte *)((int)&((String *)unaff_ESI.m_Index)->klass + unaff_FS_OFFSET);
  bVar29 = (byte)(iVar34 + -1);
  bVar20 = *pbVar23 + bVar29;
  bVar19 = CARRY1(*pbVar23,bVar29) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar34 + 0x45);
  bVar21 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar19);
  *pbVar23 = *pbVar23 + bVar14 + bVar19;
  pbVar23 = &stack0x00000042 + unaff_FS_OFFSET;
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(*pbVar23 + bVar15,bVar21);
  *pbVar23 = *pbVar23 + bVar15 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar32 + 0x42);
  bVar21 = CARRY1(*pbVar23,bVar25) || CARRY1(*pbVar23 + bVar25,bVar19);
  *pbVar23 = *pbVar23 + bVar25 + bVar19;
  pbVar23 = (byte *)((int)worldObjectData + unaff_FS_OFFSET + -0x43ef9bbe);
  bVar19 = CARRY1(*pbVar23,bVar26) || CARRY1(*pbVar23 + bVar26,bVar21);
  *pbVar23 = *pbVar23 + bVar26 + bVar21;
  bVar21 = CARRY1(bVar15,bVar18) || CARRY1(bVar15 + bVar18,bVar19);
  bVar20 = bVar15 + bVar18 + bVar19;
  iVar32 = iVar32 + 2;
  pbVar23 = (byte *)((int)&((String *)unaff_ESI.m_Index)->klass + unaff_FS_OFFSET + 1);
  bVar19 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar21);
  *pbVar23 = *pbVar23 + bVar14 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar34);
  bVar21 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar19);
  *pbVar23 = *pbVar23 + bVar16 + bVar19;
  pbVar23 = &stack0x4682104d + unaff_FS_OFFSET + CONCAT22(uVar35,CONCAT11(bVar18,bVar14)) * 2;
  bVar19 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar21);
  *pbVar23 = *pbVar23 + bVar16 + bVar21;
  pbVar23 = (byte *)((int)worldObjectData + unaff_FS_OFFSET + -0x20ef9bba);
  bVar21 = CARRY1(*pbVar23,bVar18) || CARRY1(*pbVar23 + bVar18,bVar19);
  *pbVar23 = *pbVar23 + bVar18 + bVar19;
  bVar19 = CARRY1(bVar18,bVar20) || CARRY1(bVar18 + bVar20,bVar21);
  bVar26 = (byte)((uint)iVar32 >> 8);
  bVar36 = CARRY1(bVar20,bVar26) || CARRY1(bVar20 + bVar26,bVar19);
  bVar16 = bVar20 + bVar26 + bVar19;
  iVar33 = CONCAT31((int3)((uint)iVar33 >> 8),bVar16);
  pbVar23 = (byte *)((int)&((String *)unaff_ESI.m_Index)->klass + unaff_FS_OFFSET + 3);
  bVar25 = (byte)iVar32;
  bVar19 = CARRY1(*pbVar23,bVar25) || CARRY1(*pbVar23 + bVar25,bVar36);
  *pbVar23 = *pbVar23 + bVar25 + bVar36;
  bVar36 = CARRY1(bVar30,bVar25) || CARRY1(bVar30 + bVar25,bVar19);
  bVar29 = bVar30 + bVar25 + bVar19;
  bVar19 = CARRY1(bVar14,bVar31) || CARRY1(bVar14 + bVar31,bVar36);
  iVar22 = CONCAT31((int3)(CONCAT22(uVar35,CONCAT11(bVar18 + bVar20 + bVar21,bVar14)) >> 8),
                    bVar14 + bVar31 + bVar36);
  pbVar23 = (byte *)(unaff_FS_OFFSET + 0x42106448);
  bVar21 = CARRY1(*pbVar23,bVar29) || CARRY1(*pbVar23 + bVar29,bVar19);
  *pbVar23 = *pbVar23 + bVar29 + bVar19;
  pbVar23 = (byte *)((int)&worldObjectData[1].fields._freeCount + unaff_FS_OFFSET + 3);
  bVar15 = (byte)((uint)(iVar22 + -1) >> 8);
  bVar20 = *pbVar23 + bVar15;
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + 0x48b11063 + iVar33 * 2);
  bVar21 = CARRY1(*pbVar23,bVar16) || CARRY1(*pbVar23 + bVar16,bVar19);
  *pbVar23 = *pbVar23 + bVar16 + bVar19;
  bVar19 = CARRY1(bVar26,bVar25) || CARRY1(bVar26 + bVar25,bVar21);
  uVar35 = (undefined2)((uint)iVar32 >> 0x10);
  bVar16 = bVar26 + bVar25 + bVar21;
  bVar21 = CARRY1(bVar29,bVar31) || CARRY1(bVar29 + bVar31,bVar19);
  bVar26 = bVar29 + bVar31 + bVar19;
  iVar34 = CONCAT31((int3)((uint)iVar34 >> 8),bVar26);
  iVar28 = iVar22 + -3;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar28);
  bVar15 = (byte)((uint)iVar28 >> 8);
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(*pbVar23 + bVar15,bVar21);
  *pbVar23 = *pbVar23 + bVar15 + bVar21;
  pbVar23 = &stack0x00000049 + unaff_FS_OFFSET;
  bVar14 = (byte)iVar28;
  bVar21 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar19);
  *pbVar23 = *pbVar23 + bVar14 + bVar19;
  pbVar23 = (byte *)(unaff_FS_OFFSET + CONCAT22(uVar35,CONCAT11(bVar16,bVar25)) + 0x49);
  bVar18 = (byte)((uint)(iVar33 + -1) >> 8);
  bVar20 = *pbVar23 + bVar18;
  bVar19 = CARRY1(*pbVar23,bVar18) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = (byte *)((int)worldObjectData + unaff_FS_OFFSET + -0x4bef9bb4);
  bVar18 = (byte)(iVar33 + -1);
  bVar20 = *pbVar23 + bVar18;
  bVar21 = CARRY1(*pbVar23,bVar18) || CARRY1(bVar20,bVar19);
  *pbVar23 = bVar20 + bVar19;
  bVar18 = (byte)(iVar33 + -2);
  bVar20 = bVar18 + bVar26;
  bVar19 = CARRY1(bVar18,bVar26) || CARRY1(bVar20,bVar21);
  bVar36 = CARRY1(bVar16,bVar31) || CARRY1(bVar16 + bVar31,bVar19);
  iVar32 = CONCAT22(uVar35,CONCAT11(bVar16 + bVar31 + bVar19,bVar25));
  pcVar24 = (char *)(CONCAT31((int3)((uint)(iVar33 + -2) >> 8),bVar20 + bVar21) + -2);
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar34);
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(*pbVar23 + bVar15,bVar36);
  *pbVar23 = *pbVar23 + bVar15 + bVar36;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + 0x47);
  bVar18 = (byte)pcVar24;
  bVar21 = CARRY1(*pbVar23,bVar18) || CARRY1(*pbVar23 + bVar18,bVar19);
  *pbVar23 = *pbVar23 + bVar18 + bVar19;
  pbVar23 = &stack0x0000004a + unaff_FS_OFFSET;
  bVar16 = (byte)((uint)pcVar24 >> 8);
  bVar20 = *pbVar23 + bVar16;
  bVar19 = CARRY1(*pbVar23,bVar16) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar32 + -0x48ef9bb7);
  bVar20 = *pbVar23 + (bVar25 - 1);
  bVar21 = CARRY1(*pbVar23,bVar25 - 1) || CARRY1(bVar20,bVar19);
  *pbVar23 = bVar20 + bVar19;
  bVar19 = CARRY1(bVar15,bVar26) || CARRY1(bVar15 + bVar26,bVar21);
  bVar20 = bVar15 + bVar26 + bVar21;
  iVar22 = CONCAT22((short)((uint)iVar28 >> 0x10),CONCAT11(bVar20,bVar14));
  pbVar37 = (byte *)(iVar32 + -3);
  pbVar23 = (byte *)(pcVar24 + unaff_FS_OFFSET);
  bVar21 = CARRY1(*pbVar23,bVar14) || CARRY1(*pbVar23 + bVar14,bVar19);
  *pbVar23 = *pbVar23 + bVar14 + bVar19;
  pbVar23 = (byte *)((int)&((String *)unaff_ESI.m_Index)->klass + unaff_FS_OFFSET + 3);
  bVar19 = CARRY1(*pbVar23,bVar20) || CARRY1(*pbVar23 + bVar20,bVar21);
  *pbVar23 = *pbVar23 + bVar20 + bVar21;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar34 + 0x49);
  bVar21 = CARRY1(*pbVar23,bVar18) || CARRY1(*pbVar23 + bVar18,bVar19);
  *pbVar23 = *pbVar23 + bVar18 + bVar19;
  pbVar23 = (byte *)(unaff_FS_OFFSET + iVar22 + 0x4b);
  bVar15 = (byte)((uint)pbVar37 >> 8);
  bVar20 = *pbVar23 + bVar15;
  bVar19 = CARRY1(*pbVar23,bVar15) || CARRY1(bVar20,bVar21);
  *pbVar23 = bVar20 + bVar21;
  pbVar23 = &stack0xba10644b + unaff_FS_OFFSET;
  bVar20 = *pbVar23;
  bVar16 = (byte)pbVar37;
  bVar15 = *pbVar23;
  *pbVar23 = bVar15 + bVar16 + bVar19;
  pbVar38 = (byte *)(iVar34 + -3);
  *(char *)(unaff_FS_OFFSET + iVar22) =
       *(char *)(unaff_FS_OFFSET + iVar22) + bVar14 +
       (CARRY1(bVar20,bVar16) || CARRY1(bVar15 + bVar16,bVar19));
  *(int *)pbVar37 = *(int *)pbVar37 + iVar22;
  iVar22 = CONCAT31((int3)((uint)iVar22 >> 8),
                    bVar14 + *pbVar37 + *pbVar37 + *pbVar37 + *pbVar37 + *pbVar38 + '\x02') +
           0x2080706;
  uVar27 = CONCAT31((int3)((uint)pcVar24 >> 8),bVar18 + *pcVar24);
  pbVar39 = (byte *)(uVar27 | *(uint *)(&UNK_? + uVar27));
  piVar5 = (int *)CONCAT31((int3)((uint)pbVar37 >> 8),bVar16 + *pbVar38);
  pbVar23 = (byte *)CONCAT31((int3)((uint)iVar22 >> 8),
                             ((char)iVar22 + *pbVar37 + *pbVar37 + *pbVar37 | *pbVar37) + 0x15 +
                             CARRY1(bVar16,*pbVar38) + (char)*piVar5);
  *piVar5 = (*piVar5 - CONCAT31((int3)((uint)pbVar38 >> 8),(byte)pbVar38 + *pbVar23)) -
            (uint)CARRY1((byte)pbVar38,*pbVar23);
  *pbVar39 = *pbVar39 & (byte)((uint)iVar22 >> 8);
  pcVar40 = (code *)swi(3);
  pMVar11 = (MVWorldObjectClient *)(*pcVar40)();
  return pMVar11;
code_?:
  pOVar1 = (Object *)func_?();
  unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar6 != (MVNetworkGame *)0x0) &&
      (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
      pMVar7 != (MVLocalPlayer *)0x0)) &&
     (unaff_EBX = (String *)(pMVar7->fields)._._ActorNr_k__BackingField, unaff_ESI.m_Index != 0)) {
    if (*(Il2CppClass **)(*(int *)unaff_ESI.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar5 = (int *)func_?();
      if ((String *)*piVar5 != unaff_EBX) {
        this_58 = (MVBuildModeAvatarRemote *)func_?();
        MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                  (this_58,worldObjectData,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_58;
      }
      this_59 = (MVBuildModeAvatarLocal *)func_?();
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                (this_59,worldObjectData,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_59;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

