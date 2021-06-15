
/* Void AddLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddLink
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Link_1 *)func_?(TypeInfo__MV__WorldObject__Link);
  MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1(this_01,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 != (Link_1 *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pTVar1 = (Type *)func_?(CONCAT13((char)((uint)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter >>
                                                  0x18),CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).outputWOID = *piVar3;
        pTVar1 = (Type *)func_?(CONCAT22((short)((uint)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter >>
                                                  0x10),CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
  MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                   &stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 != (ObjectLink *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pTVar1 = (Type *)func_?(CONCAT13((char)((uint)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  >> 0x18),
                                                CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  )));
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).objectConnectorWOID = *piVar3;
        pTVar1 = (Type *)func_?(CONCAT22((short)((uint)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  >> 0x10),CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  )));
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1);
  this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    pIVar3 = extraout_EDX;
code_?:
    func_?(unaff_EBX,pIVar3);
    pIVar3 = extraout_EDX_00;
code_?:
    func_?(unaff_EDI,pIVar3);
    pSVar4 = extraout_ECX;
  }
  else {
    unaff_EBX = (RuntimePrototypeCubeModel *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_5 = 3;
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_5);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_6 = 1;
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_6);
    this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uStack_7 = 2;
    pTVar2 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_7);
    pPStack_8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this_01 = (RuntimePrototypeCubeModel *)func_?();
    pBStack_9 = TypeInfo__System__Byte;
    if (pPStack_8 == (Pool *)0x0) {
      data = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      data = (Dictionary_2_System_Object_System_Object_ *)
             func_?(pPStack_8,TypeInfo__System__Byte);
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    }
    if (this_00 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((((Dictionary_2_System_Int32_System_Object___Class *)this_00->klass)->_0).element_class ==
        (TypeInfo__System__Single->_0).element_class) {
      pPStack_8 = (Pool *)func_?(this_00);
      if (unaff_EDI == (Pool *)0x0) goto code_?;
      pIVar3 = TypeInfo__System__Int32;
      if ((unaff_EDI->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)func_?(unaff_EDI)
        ;
        if (unaff_EBX == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        pIVar3 = TypeInfo__System__Int32;
        if ((((Pool__Class *)unaff_EBX->klass)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar10 = (int32_t *)func_?(unaff_EBX);
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                    (this_01,*piVar10,(int32_t)this_00->klass,(float)pPStack_8->klass,
                     (Byte__Array *)data,(MethodInfo *)0x0);
          this_00 = (this->fields).prototypes;
          unaff_EBX = this_01;
          if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
            key = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                  NamedThemeAttribute_1_UnityEngine_Color__get_Name
                            ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
            if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                         (Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                        );
              return;
            }
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(this_00,pSVar4);
code_?:
  func_?(pPStack_8,pBStack_9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddWorldObject
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = KoGaMaPackageClient_WorldObjectFactory
                      (data,(this->fields).worldObjects,(this->fields).prototypes,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields).worldObjects;
  if (this_01 != (MVWorldObjectClient *)0x0) {
    key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                );
      return;
    }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((koGaMaPackageClientOriginal != (KoGaMaPackageClient *)0x0) &&
     (pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(koGaMaPackageClientOriginal->fields).worldObjects,
     pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0)) {
    this = (KoGaMaPackageClient__Class *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                     (pDVar1,(koGaMaPackageClientOriginal->fields).worldObjectRoot,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
    if ((koGaMaPackageClientDesendant != (KoGaMaPackageClient *)0x0) &&
       (pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(koGaMaPackageClientDesendant->fields).worldObjects,
       pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)0x0)) {
      this_00 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                          (pDVar1,(koGaMaPackageClientDesendant->fields).worldObjectRoot,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
      if (this_00 !=
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           (this_00,(MethodInfo *)0x0);
        if (this != (KoGaMaPackageClient__Class *)0x0) {
          pOVar3 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                               *)this,(MethodInfo *)0x0);
          if (pOVar2 == pOVar3) {
            pEVar4 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object___Class
                      *)(this->_0).image;
            koGaMaPackageClientDesendant = (KoGaMaPackageClient *)&stack0xfffffff4;
            method = pEVar4[1].vtable.
                     System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TSource___get_Current
                     .method;
            koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&stack0xfffffff8;
            pKVar5 = (KoGaMaPackageClient__Class *)&UNK_?;
            (*pEVar4[1].vtable.
              System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TSource___get_Current
              .methodPtr)();
            if (pKVar5 != (KoGaMaPackageClient__Class *)0x0) {
              method = (MethodInfo *)&koGaMaPackageClientOriginal;
              koGaMaPackageClientDesendant = (KoGaMaPackageClient *)TypeInfo__System__Int32;
              koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&UNK_?;
              arg0 = (KoGaMaPackageClient *)func_?();
              koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&stack0xfffffff0;
              arg1 = (KoGaMaPackageClient *)func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                method = (MethodInfo *)TypeInfo__System__String;
                koGaMaPackageClientDesendant = (KoGaMaPackageClient *)&UNK_?;
                func_?();
              }
              method = (MethodInfo *)0x0;
              koGaMaPackageClientOriginal = arg0;
              koGaMaPackageClientDesendant = arg1;
              pSVar6 = mscorlib.dll::System::String::String_Format_1
                                 (StringLiteral_InvestigatedCubeCount__0__Matchi,(Object *)arg0,
                                  (Object *)arg1,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar6,(MethodInfo *)0x0);
              return (float)(int)this / (float)(int)pKVar5;
            }
          }
          else {
            method = (MethodInfo *)0x0;
            koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&UNK_?;
            koGaMaPackageClientDesendant = (KoGaMaPackageClient *)this;
            System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
            Object,System::Object]::
            Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                        *)this,(MethodInfo *)0x0);
            method = (MethodInfo *)&koGaMaPackageClientOriginal;
            koGaMaPackageClientDesendant =
                 (KoGaMaPackageClient *)TypeInfo__MV__WorldObject__WorldObjectType;
            koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&UNK_?;
            pOVar2 = (Object *)func_?();
            koGaMaPackageClientOriginal = (KoGaMaPackageClient *)0x0;
            System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
            Object,System::Object]::
            Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                      (this_00,(MethodInfo *)0x0);
            koGaMaPackageClientOriginal = (KoGaMaPackageClient *)&stack0xfffffff0;
            pOVar3 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            method = (MethodInfo *)&UNK_?;
            pSVar6 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral_Comparing_packages_with_differen,pOVar2,pOVar3,
                                (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            _Stack00000024.genericMethod = (Il2CppGenericMethod *)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar6,(MethodInfo *)0x0);
          }
          return 0.0;
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void Destroy() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_Destroy
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    wo = (MVWorldObjectClient *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                   (this_00,(this->fields).worldObjectRoot,
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = KoGaMaPackageClient_WorldObjectFactory
                      (returnData,(this->fields).worldObjects,(this->fields).prototypes,
                       (MethodInfo *)0x0);
  this_00 = (this->fields).worldObjects;
  if ((this_01 != (MVWorldObjectClient *)0x0) &&
     (key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0),
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
              );
    return;
  }
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).worldObjects;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pTVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,(this->fields).worldObjectRoot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pTVar1 != (TerrainUtility_TerrainMap *)0x0) {
      *(undefined1 *)(in_stack_2 + 0x33) = 1;
      (**(code **)(*in_stack_2 + 0x240))();
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_ToString
                   (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,8);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_protypes_Count_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_protypes_Count_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_protypes_Count_;
    this_00 = (this->fields).prototypes;
    if (this_00 == (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)
    goto code_?;
    pOStack_3 = System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Count__
                          );
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_3);
    if ((pOVar4 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar4,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar4;
    if ((StringLiteral_u000A_worldObjects_Count_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000A_worldObjects_Count_,
                                (args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral_u000A_worldObjects_Count_;
    this_01 = (this->fields).worldObjects;
    if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    pOStack_5 = System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                          );
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_5);
    if ((pOVar4 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar4,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar4;
    if ((StringLiteral_u000A_links_Count_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000A_links_Count_,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (args->max_length < 5) goto code_?;
    args->vector[4] = (Object *)StringLiteral_u000A_links_Count_;
    this_02 = (this->fields).links;
    if (this_02 == (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) goto code_?;
    System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
    Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
              );
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    if ((pOVar4 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar4,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 6) goto code_?;
    args->vector[5] = pOVar4;
    if ((StringLiteral_u000A_objectLinks_Count_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_u000A_objectLinks_Count_,
                                (args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 7) goto code_?;
    args->vector[6] = (Object *)StringLiteral_u000A_objectLinks_Count_;
    this_03 = (this->fields).objectLinks;
    if (this_03 == (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0)
    goto code_?;
    System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
    Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
              );
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
    if ((pOVar4 == (Object *)0x0) || (iVar2 = func_?(pOVar4), iVar2 != 0)) {
      if (7 < args->max_length) {
        args->vector[7] = pOVar4;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        return pSVar6;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0);
  func_?(uVar1);
  pcVar7 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar7)();
  return pSVar6;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                    &stack0xfffffffb);
  data = worldObjectData;
  bVar2 = 0;
  if (worldObjectData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)worldObjectData,pTVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    bVar2 = 0;
    if (pPVar3 != (Pool *)0x0) {
      pIVar4 = (pPVar3->klass->_0).element_class;
      pIVar5 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar4 < pIVar5;
      if (pIVar4 == pIVar5) {
        puVar6 = (undefined4 *)func_?(pPVar3);
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)*puVar6;
        switch(pDVar7) {
        case (Dictionary_2_System_Object_System_Object_ *)0x0:
          worldObjectData =
               (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
          pSVar8 = (String *)
                    func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                    (int)&worldObjectData + 3);
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                   WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                   KogamaSettingWrapperBase]::
                   Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                             ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                               *)data,pSVar8,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar9 == 0) {
            pSVar8 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                      HashtableFunctions_PrettyString(data,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar8,(MethodInfo *)0x0);
            worldObjectData =
                 (Dictionary_2_System_Object_System_Object_ *)CONCAT13(6,worldObjectData._0_3_);
            pSVar8 = (String *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)data,pSVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
            pOVar10 = (Object *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar10,(MethodInfo *)0x0);
          }
          worldObjectData =
               (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
          pTVar1 = (Type *)func_?();
          pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          piVar11 = (int *)func_?(pPVar3,TypeInfo__System__Int32);
          unaff_ESI = (String *)*piVar11;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar12 != (MVNetworkGame *)0x0) {
            pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
            bVar2 = 0;
            if (pMVar13 != (MVLocalPlayer *)0x0) {
              pSVar8 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar13,
                                   (MethodInfo *)0x0);
              if (unaff_ESI == pSVar8) {
                this_01 = (MVAvatarLocal *)func_?();
                MVAvatarLocal::MVAvatarLocal__ctor(this_01,data,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this_01;
              }
              if (unaff_ESI != (String *)0xffffffff) {
                this = (MVAvatarRemote *)func_?();
                MVAvatarRemote::MVAvatarRemote__ctor(this,data,worldObjects,(MethodInfo *)0x0);
                return (MVWorldObjectClient *)this;
              }
              this_00 = (MVPreviewAvatar *)func_?();
              MVPreviewAvatar::MVPreviewAvatar__ctor(this_00,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_00;
            }
          }
          break;
        case (Dictionary_2_System_Object_System_Object_ *)0x1:
          this_02 = (MVCubeModelInstance *)func_?(TypeInfo__MVCubeModelInstance);
          MVCubeModelInstance::MVCubeModelInstance__ctor
                    (this_02,data,worldObjects,prototypes,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_02;
        case (Dictionary_2_System_Object_System_Object_ *)0x2:
          this_03 = (MVPointLight *)func_?(TypeInfo__MVPointLight);
          MVPointLight::MVPointLight__ctor(this_03,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_03;
        case (Dictionary_2_System_Object_System_Object_ *)0x3:
          this_04 = (MVTriggerBox *)func_?(TypeInfo__MVTriggerBox);
          MVTriggerBox::MVTriggerBox__ctor(this_04,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_04;
        default:
          switch(pDVar7) {
          case (Dictionary_2_System_Object_System_Object_ *)0xa1:
            this_56 = (TeamEditor *)func_?(TypeInfo__TeamEditor);
            TeamEditor::TeamEditor__ctor(this_56,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_56;
          case (Dictionary_2_System_Object_System_Object_ *)0xa2:
            this_57 = (TriggerCube *)func_?(TypeInfo__TriggerCube);
            TriggerCube::TriggerCube__ctor(this_57,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_57;
          case (Dictionary_2_System_Object_System_Object_ *)0xa4:
            this_58 = (CollectTheItemCollectableInstance *)
                      func_?(TypeInfo__CollectTheItemCollectableInstance);
            CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                      (this_58,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_58;
          case (Dictionary_2_System_Object_System_Object_ *)0xa5:
            this_59 = (ShootableButton *)func_?(TypeInfo__ShootableButton);
            ShootableButton::ShootableButton__ctor(this_59,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_59;
          case (Dictionary_2_System_Object_System_Object_ *)0xa6:
            this_60 = (UseLever *)func_?(TypeInfo__UseLever);
            UseLever::UseLever__ctor(this_60,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_60;
          case (Dictionary_2_System_Object_System_Object_ *)0xa7:
            this_61 = (CollectTheItemDropOff *)func_?(TypeInfo__CollectTheItemDropOff);
            CollectTheItemDropOff::CollectTheItemDropOff__ctor
                      (this_61,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_61;
          case (Dictionary_2_System_Object_System_Object_ *)0xa8:
            this_62 = (CollectTheItemCollectable *)
                      func_?(TypeInfo__CollectTheItemCollectable);
            CollectTheItemCollectable::CollectTheItemCollectable__ctor
                      (this_62,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_62;
          case (Dictionary_2_System_Object_System_Object_ *)0xa9:
            this_63 = (CollectTheItem *)func_?(TypeInfo__CollectTheItem);
            CollectTheItem::CollectTheItem__ctor(this_63,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_63;
          case (Dictionary_2_System_Object_System_Object_ *)0xaa:
            this_64 = (WindTurbine *)func_?(TypeInfo__WindTurbine);
            WindTurbine::WindTurbine__ctor(this_64,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_64;
          case (Dictionary_2_System_Object_System_Object_ *)0xab:
            this_65 = (MVGlobalSoundEmitter *)func_?(TypeInfo__MVGlobalSoundEmitter);
            MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                      (this_65,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_65;
          case (Dictionary_2_System_Object_System_Object_ *)0xb4:
            this_66 = (TimeAttackFlag *)func_?(TypeInfo__TimeAttackFlag);
            TimeAttackFlag::TimeAttackFlag__ctor(this_66,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_66;
          case (Dictionary_2_System_Object_System_Object_ *)0xb5:
            this_67 = (MVGamePointChest *)func_?(TypeInfo__MVGamePointChest);
            MVGamePointChest::MVGamePointChest__ctor(this_67,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_67;
          }
          switch(pDVar7) {
          case (Dictionary_2_System_Object_System_Object_ *)0x82:
            this_68 = (MVGamePoint *)func_?(TypeInfo__MVGamePoint);
            MVGamePoint::MVGamePoint__ctor(this_68,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_68;
          case (Dictionary_2_System_Object_System_Object_ *)0x83:
            pMVar14 = (MVWorldObjectClient *)
                      func_?(TypeInfo__MVGamePassProgressionDataObject);
            MVGamePassProgressionDataObject::MVGamePassProgressionDataObject__ctor
                      ((MVGamePassProgressionDataObject *)pMVar14,data,worldObjects,
                       (MethodInfo *)0x0);
            return pMVar14;
          default:
            switch(pDVar7) {
            case (Dictionary_2_System_Object_System_Object_ *)0x91:
              this_73 = (MVCameraSettings *)func_?(TypeInfo__MVCameraSettings);
              MVCameraSettings::MVCameraSettings__ctor(this_73,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_73;
            case (Dictionary_2_System_Object_System_Object_ *)0x92:
              this_74 = (MVGravityCube *)func_?(TypeInfo__MVGravityCube);
              MVGravityCube::MVGravityCube__ctor(this_74,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_74;
            case (Dictionary_2_System_Object_System_Object_ *)0x94:
              this_75 = (MVGameCoin *)func_?(TypeInfo__MVGameCoin);
              MVGameCoin::MVGameCoin__ctor(this_75,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_75;
            case (Dictionary_2_System_Object_System_Object_ *)0x95:
              this_76 = (MVGameCoinChest *)func_?(TypeInfo__MVGameCoinChest);
              MVGameCoinChest::MVGameCoinChest__ctor(this_76,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_76;
            case (Dictionary_2_System_Object_System_Object_ *)0x96:
              this_77 = (ThemeWorldObject *)func_?(TypeInfo__ThemeWorldObject);
              ThemeWorldObject::ThemeWorldObject__ctor(this_77,data,worldObjects,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)this_77;
            }
            worldObjectData = pDVar7;
            pOVar10 = (Object *)
                      func_?(TypeInfo__MV__WorldObject__WorldObjectType,&worldObjectData);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar8 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_WOCM_trying_to_create_unknown_ty,pOVar10,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)pSVar8,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)0x0;
          case (Dictionary_2_System_Object_System_Object_ *)0x85:
            goto code_?;
          case (Dictionary_2_System_Object_System_Object_ *)0x86:
            this_71 = (MVAvatarSpawnRoleCreator *)
                      func_?(TypeInfo__MVAvatarSpawnRoleCreator);
            MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                      (this_71,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_71;
          case (Dictionary_2_System_Object_System_Object_ *)0x87:
            this_72 = (MVGameOptionDataObject *)func_?(TypeInfo__MVGameOptionDataObject);
            MVGameOptionDataObject::MVGameOptionDataObject__ctor
                      (this_72,data,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)this_72;
          }
        case (Dictionary_2_System_Object_System_Object_ *)0x7:
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
          pMVar15 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
          MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar15,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)pMVar15;
        case (Dictionary_2_System_Object_System_Object_ *)0x8:
          this_05 = (MVCubeModelPrototypeTerrain *)
                    func_?(TypeInfo__MVCubeModelPrototypeTerrain);
          MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
                    (this_05,data,worldObjects,prototypes,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_05;
        case (Dictionary_2_System_Object_System_Object_ *)0x9:
          this_06 = (MVGroup *)func_?(TypeInfo__MVGroup);
          MVGroup::MVGroup__ctor_2(this_06,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_06;
        case (Dictionary_2_System_Object_System_Object_ *)0xd:
          this_07 = (MVSoundEmitter *)func_?(TypeInfo__MVSoundEmitter);
          MVSoundEmitter::MVSoundEmitter__ctor(this_07,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_07;
        case (Dictionary_2_System_Object_System_Object_ *)0x11:
          this_08 = (MVFlag *)func_?(TypeInfo__MVFlag);
          MVFlag::MVFlag__ctor(this_08,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_08;
        case (Dictionary_2_System_Object_System_Object_ *)0x13:
          this_09 = (MVBattery *)func_?(TypeInfo__MVBattery);
          MVBattery::MVBattery__ctor(this_09,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_09;
        case (Dictionary_2_System_Object_System_Object_ *)0x14:
          this_10 = (MVToggleBox *)func_?(TypeInfo__MVToggleBox);
          MVToggleBox::MVToggleBox__ctor(this_10,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_10;
        case (Dictionary_2_System_Object_System_Object_ *)0x15:
          this_11 = (MVNegate *)func_?(TypeInfo__MVNegate);
          MVNegate::MVNegate__ctor(this_11,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_11;
        case (Dictionary_2_System_Object_System_Object_ *)0x16:
          this_12 = (MVAnd *)func_?(TypeInfo__MVAnd);
          MVAnd::MVAnd__ctor(this_12,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_12;
        case (Dictionary_2_System_Object_System_Object_ *)0x17:
          this_13 = (MVExplosives *)func_?(TypeInfo__MVExplosives);
          MVExplosives::MVExplosives__ctor(this_13,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_13;
        case (Dictionary_2_System_Object_System_Object_ *)0x18:
          this_14 = (MVTextMsg *)func_?(TypeInfo__MVTextMsg);
          MVTextMsg::MVTextMsg__ctor(this_14,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_14;
        case (Dictionary_2_System_Object_System_Object_ *)0x19:
          this_15 = (MVFire *)func_?(TypeInfo__MVFire);
          MVFire::MVFire__ctor(this_15,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_15;
        case (Dictionary_2_System_Object_System_Object_ *)0x1a:
          this_16 = (MVSmoke *)func_?(TypeInfo__MVSmoke);
          MVSmoke::MVSmoke__ctor(this_16,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_16;
        case (Dictionary_2_System_Object_System_Object_ *)0x1b:
          this_17 = (MVTimeTrigger *)func_?(TypeInfo__MVTimeTrigger);
          MVTimeTrigger::MVTimeTrigger__ctor(this_17,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_17;
        case (Dictionary_2_System_Object_System_Object_ *)0x1c:
          this_18 = (MVTeleporter *)func_?(TypeInfo__MVTeleporter);
          MVTeleporter::MVTeleporter__ctor(this_18,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_18;
        case (Dictionary_2_System_Object_System_Object_ *)0x1d:
          this_19 = (MVGoal *)func_?(TypeInfo__MVGoal);
          MVGoal::MVGoal__ctor(this_19,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_19;
        case (Dictionary_2_System_Object_System_Object_ *)0x20:
          this_20 = (MVCubeModelFineGrainedTerrain *)
                    func_?(TypeInfo__MVCubeModelFineGrainedTerrain);
          MVCubeModelFineGrainedTerrain::MVCubeModelFineGrainedTerrain__ctor
                    (this_20,data,worldObjects,prototypes,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_20;
        case (Dictionary_2_System_Object_System_Object_ *)0x21:
          this_21 = (MVPressurePlate *)func_?(TypeInfo__MVPressurePlate);
          MVPressurePlate::MVPressurePlate__ctor(this_21,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_21;
        case (Dictionary_2_System_Object_System_Object_ *)0x25:
          this_22 = (MVPickupItemBase *)func_?(TypeInfo__MVPickupItemBase);
          MVPickupItemBase::MVPickupItemBase__ctor(this_22,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_22;
        case (Dictionary_2_System_Object_System_Object_ *)0x26:
          this_23 = (MVSkybox *)func_?(TypeInfo__MVSkybox);
          MVSkybox::MVSkybox__ctor(this_23,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_23;
        case (Dictionary_2_System_Object_System_Object_ *)0x27:
          this_24 = (MVSpawnPointRed *)func_?(TypeInfo__MVSpawnPointRed);
          MVSpawnPointRed::MVSpawnPointRed__ctor(this_24,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_24;
        case (Dictionary_2_System_Object_System_Object_ *)0x28:
          this_25 = (MVSpawnPointGreen *)func_?(TypeInfo__MVSpawnPointGreen);
          MVSpawnPointGreen::MVSpawnPointGreen__ctor(this_25,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_25;
        case (Dictionary_2_System_Object_System_Object_ *)0x29:
          this_26 = (MVSpawnPointYellow *)func_?(TypeInfo__MVSpawnPointYellow);
          MVSpawnPointYellow::MVSpawnPointYellow__ctor(this_26,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_26;
        case (Dictionary_2_System_Object_System_Object_ *)0x2a:
          pMVar15 = (MVSpawnPointBlue *)func_?(TypeInfo__MVSpawnPointBlue);
          MVSpawnPointBlue::MVSpawnPointBlue__ctor(pMVar15,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)pMVar15;
        case (Dictionary_2_System_Object_System_Object_ *)0x2b:
          this_27 = (MVObjectEnabler *)func_?(TypeInfo__MVObjectEnabler);
          MVObjectEnabler::MVObjectEnabler__ctor(this_27,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_27;
        case (Dictionary_2_System_Object_System_Object_ *)0x2c:
          this_28 = (MVWaterPlane *)func_?(TypeInfo__MVWaterPlane);
          MVWaterPlane::MVWaterPlane__ctor(this_28,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_28;
        case (Dictionary_2_System_Object_System_Object_ *)0x2d:
          worldObjectData =
               (Dictionary_2_System_Object_System_Object_ *)CONCAT13(7,worldObjectData._0_3_);
          pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                            (int)&worldObjectData + 3);
          pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          this_29 = (Dictionary_2_System_Type_Pool_ *)
                    func_?(pPVar3,
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
          bVar2 = 0;
          if (this_29 != (Dictionary_2_System_Type_Pool_ *)0x0) {
            pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                (this_29,(Type *)StringLiteral_BlueprintData,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            unaff_EBX = (Dictionary_2_System_Type_Pool_ *)
                        func_?(pPVar3,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       );
            unaff_ESI = (String *)
                        func_?(TypeInfo__MV__Common__BlueprintData,&stack0xfffffff4);
            bVar2 = 0;
            if (unaff_ESI != (String *)0x0) {
              pTVar1 = (Type *)func_?(3,unaff_ESI);
              func_?(unaff_ESI);
              bVar2 = 0;
              if (unaff_EBX != (Dictionary_2_System_Type_Pool_ *)0x0) {
                pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                    (unaff_EBX,pTVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                puVar16 = (undefined1 *)
                          func_?(pPVar3,TypeInfo__MV__WorldObject__BlueprintType);
                switch(*puVar16) {
                case 7:
                  this_30 = (MVMovable *)func_?(TypeInfo__MVMovable);
                  MVMovable::MVMovable__ctor(this_30,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_30;
                case 8:
                  this_31 = (MVBody *)func_?(TypeInfo__MVBody);
                  MVBody::MVBody__ctor(this_31,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_31;
                case 9:
                  this_32 = (MVTeleportGroup *)func_?(TypeInfo__MVTeleportGroup);
                  MVTeleportGroup::MVTeleportGroup__ctor
                            (this_32,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_32;
                case 10:
                  this_33 = (MVSentryGunBlueprint *)func_?(TypeInfo__MVSentryGunBlueprint);
                  MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
                            (this_33,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_33;
                case 0xb:
                  this_34 = (MVMovingPlatform *)func_?(TypeInfo__MVMovingPlatform);
                  MVMovingPlatform::MVMovingPlatform__ctor
                            (this_34,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_34;
                case 0xc:
                  this_35 = (MVMovingPlatformGroup *)
                            func_?(TypeInfo__MVMovingPlatformGroup);
                  MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                            (this_35,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_35;
                case 0xd:
                  this_36 = (MVRotator *)func_?(TypeInfo__MVRotator);
                  MVRotator::MVRotator__ctor(this_36,data,worldObjects,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)this_36;
                case 0xe:
                  goto code_?;
                default:
                  worldObjectData =
                       (Dictionary_2_System_Object_System_Object_ *)
                       CONCAT13(*puVar16,worldObjectData._0_3_);
                  pOVar10 = (Object *)
                            func_?(TypeInfo__MV__WorldObject__BlueprintType,
                                            (int)&worldObjectData + 3);
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__String);
                  }
                  pSVar8 = mscorlib.dll::System::String::String_Concat
                                      ((Object *)StringLiteral_WOCM_trying_to_create_unknown_bl,
                                       pOVar10,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                            ((Object *)pSVar8,(MethodInfo *)0x0);
                  return (MVWorldObjectClient *)0x0;
                }
              }
            }
          }
          break;
        case (Dictionary_2_System_Object_System_Object_ *)0x2e:
          this_37 = (MVPulseBox *)func_?(TypeInfo__MVPulseBox);
          MVPulseBox::MVPulseBox__ctor(this_37,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_37;
        case (Dictionary_2_System_Object_System_Object_ *)0x2f:
          this_38 = (MVRandomBox *)func_?(TypeInfo__MVRandomBox);
          MVRandomBox::MVRandomBox__ctor(this_38,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_38;
        case (Dictionary_2_System_Object_System_Object_ *)0x30:
          this_39 = (MVSentryGun *)func_?(TypeInfo__MVSentryGun);
          MVSentryGun::MVSentryGun__ctor(this_39,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_39;
        case (Dictionary_2_System_Object_System_Object_ *)0x31:
          this_40 = (MVCollectible *)func_?(TypeInfo__MVCollectible);
          MVCollectible::MVCollectible__ctor(this_40,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_40;
        case (Dictionary_2_System_Object_System_Object_ *)0x32:
          this_41 = (MVMovingPlatformNode *)func_?(TypeInfo__MVMovingPlatformNode);
          MVMovingPlatformNode::MVMovingPlatformNode__ctor
                    (this_41,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_41;
        case (Dictionary_2_System_Object_System_Object_ *)0x33:
          this_42 = (MVWaterPlanePreset *)func_?(TypeInfo__MVWaterPlanePreset);
          MVWaterPlanePreset::MVWaterPlanePreset__ctor(this_42,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_42;
        case (Dictionary_2_System_Object_System_Object_ *)0x34:
          this_43 = (MVPointLightPreset *)func_?(TypeInfo__MVPointLightPreset);
          MVPointLightPreset::MVPointLightPreset__ctor(this_43,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_43;
        case (Dictionary_2_System_Object_System_Object_ *)0x35:
code_?:
          this_44 = (MVGhostInstance *)func_?(TypeInfo__MVGhostInstance);
          MVGhostInstance::MVGhostInstance__ctor(this_44,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_44;
        case (Dictionary_2_System_Object_System_Object_ *)0x36:
          this_45 = (MVCubeGun *)func_?(TypeInfo__MVCubeGun);
          MVCubeGun::MVCubeGun__ctor(this_45,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_45;
        case (Dictionary_2_System_Object_System_Object_ *)0x37:
          this_46 = (MVCheckpoint *)func_?(TypeInfo__MVCheckpoint);
          MVCheckpoint::MVCheckpoint__ctor(this_46,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_46;
        case (Dictionary_2_System_Object_System_Object_ *)0x38:
          this_47 = (MVHoverCraft *)func_?(TypeInfo__MVHoverCraft);
          MVHoverCraft::MVHoverCraft__ctor(this_47,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_47;
        case (Dictionary_2_System_Object_System_Object_ *)0x39:
          this_48 = (MVWorldObjectSpawnerVehicle *)
                    func_?(TypeInfo__MVWorldObjectSpawnerVehicle);
          MVWorldObjectSpawnerVehicle::MVWorldObjectSpawnerVehicle__ctor
                    (this_48,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_48;
        case (Dictionary_2_System_Object_System_Object_ *)0x3b:
          this_49 = (MVJetPack *)func_?(TypeInfo__MVJetPack);
          MVJetPack::MVJetPack__ctor(this_49,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_49;
        case (Dictionary_2_System_Object_System_Object_ *)0x3c:
          this_50 = (MVRoundCube *)func_?(TypeInfo__MVRoundCube);
          MVRoundCube::MVRoundCube__ctor(this_50,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_50;
        case (Dictionary_2_System_Object_System_Object_ *)0x3d:
          this_51 = (MVAdvancedGhost *)func_?(TypeInfo__MVAdvancedGhost);
          MVAdvancedGhost::MVAdvancedGhost__ctor(this_51,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_51;
        case (Dictionary_2_System_Object_System_Object_ *)0x3e:
          this_52 = (MVHamsterWheel *)func_?(TypeInfo__MVHamsterWheel);
          MVHamsterWheel::MVHamsterWheel__ctor(this_52,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_52;
        case (Dictionary_2_System_Object_System_Object_ *)0x3f:
          this_53 = (MVKillLimit *)func_?(TypeInfo__MVKillLimit);
          MVKillLimit::MVKillLimit__ctor(this_53,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_53;
        case (Dictionary_2_System_Object_System_Object_ *)0x40:
          this_54 = (MVOculusKillLimit *)func_?(TypeInfo__MVOculusKillLimit);
          MVOculusKillLimit::MVOculusKillLimit__ctor(this_54,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_54;
        case (Dictionary_2_System_Object_System_Object_ *)0x41:
          this_55 = (MVCountingCube *)func_?(TypeInfo__MVCountingCube);
          MVCountingCube::MVCountingCube__ctor(this_55,data,worldObjects,(MethodInfo *)0x0);
          return (MVWorldObjectClient *)this_55;
        }
      }
      else {
        func_?(pPVar3,TypeInfo__System__Int32);
      }
    }
  }
code_?:
  uVar17 = 0x1019;
  uVar18 = func_?(0);
  uVar19 = (uint)((ulonglong)uVar18 >> 0x20);
  uVar20 = (int)&unaff_EBX->klass + *extraout_ECX;
  bVar21 = CARRY4(*extraout_ECX,(uint)unaff_EBX) || CARRY4(uVar20,(uint)bVar2);
  *extraout_ECX = uVar20 + bVar2;
  pbVar22 = (byte *)((int)&unaff_EBX[-0x15361fb].fields.linkSlots + 2);
  bVar23 = (byte)((ulonglong)uVar18 >> 0x20);
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar21);
  *pbVar22 = *pbVar22 + bVar23 + bVar21;
  bVar2 = (byte)unaff_EBX + (char)*extraout_ECX;
  bVar21 = CARRY1((byte)unaff_EBX,(byte)*extraout_ECX) || CARRY1(bVar2,bVar24);
  bVar2 = bVar2 + bVar24;
  bVar25 = (byte)((ulonglong)uVar18 >> 8);
  bVar26 = (byte)uVar18 + bVar25;
  bVar24 = CARRY1((byte)uVar18,bVar25) || CARRY1(bVar26,bVar21);
  uVar27 = (undefined3)((ulonglong)uVar18 >> 8);
  bVar26 = bVar26 + bVar21;
  bVar25 = bVar2 + (char)*extraout_ECX;
  bVar21 = CARRY1(bVar2,(byte)*extraout_ECX) || CARRY1(bVar25,bVar24);
  uVar28 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar25 + bVar24);
  bVar24 = CARRY1(bRam_?,bVar26) || CARRY1(bRam_? + bVar26,bVar21);
  bRam_? = bRam_? + bVar26 + bVar21;
  bVar21 = bVar26 < 0x19 || (byte)(bVar26 - 0x19) < bVar24;
  bVar26 = (bVar26 - 0x19) - bVar24;
  bVar24 = CARRY1(bRam_?,bVar26);
  bVar2 = bRam_? + bVar26;
  bRam_? = bVar2 + bVar21;
  uVar20 = (uint)(bVar24 || CARRY1(bVar2,bVar21));
  uVar29 = uVar28 + *extraout_ECX;
  bVar21 = CARRY4(uVar28,*extraout_ECX) || CARRY4(uVar29,uVar20);
  uVar29 = uVar29 + uVar20;
  pbVar22 = (byte *)(uVar29 + 0x19 + uVar19);
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar21);
  *pbVar22 = *pbVar22 + bVar23 + bVar21;
  pbVar22 = (byte *)(uVar29 + 0x19 + uVar19);
  bVar25 = (byte)(uVar29 >> 8);
  bVar2 = *pbVar22 + bVar25;
  bVar21 = CARRY1(*pbVar22,bVar25) || CARRY1(bVar2,bVar24);
  *pbVar22 = bVar2 + bVar24;
  bVar24 = CARRY1(bRam_?,bVar26) || CARRY1(bRam_? + bVar26,bVar21);
  bRam_? = bRam_? + bVar26 + bVar21;
  bVar21 = bVar26 < 0x19 || (byte)(bVar26 - 0x19) < bVar24;
  bVar26 = (bVar26 - 0x19) - bVar24;
  bVar24 = CARRY1(bRam_?,bVar26);
  bVar2 = bRam_? + bVar26;
  bRam_? = bVar2 + bVar21;
  uVar20 = (uint)(bVar24 || CARRY1(bVar2,bVar21));
  bVar21 = CARRY4(uVar29,*extraout_ECX) || CARRY4(uVar29 + *extraout_ECX,uVar20);
  uVar20 = uVar29 + *extraout_ECX + uVar20;
  bVar24 = CARRY1(bRam_?,bVar26) || CARRY1(bRam_? + bVar26,bVar21);
  bRam_? = bRam_? + bVar26 + bVar21;
  bVar21 = bVar26 < 0x19 || (byte)(bVar26 - 0x19) < bVar24;
  bVar26 = (bVar26 - 0x19) - bVar24;
  pbVar22 = (byte *)CONCAT31(uVar27,bVar26);
  bVar24 = CARRY1(bRam_?,bVar26);
  bVar2 = bRam_? + bVar26;
  bRam_? = bVar2 + bVar21;
  uVar29 = (uint)(bVar24 || CARRY1(bVar2,bVar21));
  uVar28 = uVar20 + *extraout_ECX;
  bVar21 = CARRY4(uVar20,*extraout_ECX) || CARRY4(uVar28,uVar29);
  uVar28 = uVar28 + uVar29;
  bVar24 = CARRY1(bRam_?,bVar26);
  bVar2 = bRam_? + bVar26;
  bRam_? = bVar2 + bVar21;
  uVar20 = (uint)(bVar24 || CARRY1(bVar2,bVar21));
  uVar29 = uVar28 + *extraout_ECX;
  bVar21 = CARRY4(uVar28,*extraout_ECX) || CARRY4(uVar29,uVar20);
  pbVar30 = (byte *)(uVar29 + uVar20);
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar21);
  *pbVar22 = *pbVar22 + bVar23 + bVar21;
  bVar21 = 0xe6 < bVar26 || CARRY1(bVar26 + 0x19,bVar24);
  bVar2 = bVar26 + 0x19 + bVar24;
  bVar31 = (byte)((ulonglong)uVar18 >> 0x28);
  bVar24 = CARRY1(bRam_?,bVar31) || CARRY1(bRam_? + bVar31,bVar21);
  bRam_? = bRam_? + bVar31 + bVar21;
  bVar26 = bVar2 + 0x19;
  bVar21 = 0xe6 < bVar2 || CARRY1(bVar26,bVar24);
  bVar26 = bVar26 + bVar24;
  puVar32 = (uint *)CONCAT31(uVar27,bVar26);
  ppOVar33 = &(data->fields).valueSlots;
  bVar2 = *(byte *)ppOVar33;
  bVar34 = (byte)((uint)pbVar30 >> 8);
  cVar35 = *(char *)ppOVar33;
  *(byte *)ppOVar33 = cVar35 + bVar34 + bVar21;
  uVar20 = (uint)(CARRY1(bVar2,bVar34) || CARRY1(cVar35 + bVar34,bVar21));
  bVar21 = *puVar32 < uVar19 || *puVar32 - uVar19 < uVar20;
  *puVar32 = (*puVar32 - uVar19) - uVar20;
  puVar36 = (uint *)((int)&data->klass + 1);
  puVar32 = (uint *)((int)&unaff_ESI->klass + 1);
  *(undefined1 *)&data->klass = *(undefined1 *)&unaff_ESI->klass;
  bVar24 = 0xe6 < bVar26 || CARRY1(bVar26 + 0x19,bVar21);
  bVar26 = bVar26 + 0x19 + bVar21;
  bVar2 = (byte)extraout_ECX;
  bVar21 = CARRY1(bVar2,bVar2) || CARRY1(bVar2 * '\x02',bVar24);
  bVar25 = bVar2 * '\x02' + bVar24;
  puVar37 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),bVar25);
  bVar2 = bVar26 + 0x19;
  bVar24 = 0xe6 < bVar26 || CARRY1(bVar2,bVar21);
  bVar2 = bVar2 + bVar21;
  bVar38 = (byte)((uint)extraout_ECX >> 8);
  bVar21 = CARRY1(bVar31,bVar38) || CARRY1(bVar31 + bVar38,bVar24);
  bVar31 = bVar31 + bVar38 + bVar24;
  uVar39 = CONCAT11(bVar31,bVar23);
  uVar40 = CONCAT22((short)((ulonglong)uVar18 >> 0x30),uVar39);
  bVar26 = bVar2 + 0x19;
  bVar24 = 0xe6 < bVar2 || CARRY1(bVar26,bVar21);
  uVar28 = CONCAT31(uVar27,bVar26 + bVar21);
  bVar2 = *pbVar30;
  bVar26 = *pbVar30;
  *pbVar30 = bVar26 + bVar23 + bVar24;
  uVar20 = (uint)(CARRY1(bVar2,bVar23) || CARRY1(bVar26 + bVar23,bVar24));
  uVar29 = uVar28 + 0x15381019;
  puVar41 = (uint *)(uVar29 + uVar20);
  uVar28 = (uint)(0xeac7efe6 < uVar28 || CARRY4(uVar29,uVar20));
  uVar29 = *puVar41;
  uVar20 = *puVar41;
  *puVar41 = (uVar20 - uVar40) - uVar28;
  uVar20 = (uint)(uVar29 < uVar40 || uVar20 - uVar40 < uVar28);
  piVar11 = (int *)((int)puVar41 + 0x1c051019U + uVar20);
  *piVar11 = (*piVar11 - uVar40) -
             (uint)((uint *)0xe3faefe6 < puVar41 || CARRY4((int)puVar41 + 0x1c051019U,uVar20));
  piVar42 = (int *)((int)piVar11 + 0x97ba2935U + (uint)((int *)0x7defe6e3 < piVar11));
  *piVar42 = (*piVar42 - uVar40) -
             (uint)((int *)0xea55efe6 < piVar11 + -0x1f7bf9b9 ||
                   CARRY4((int)piVar11 + 0x97ba2935U,(uint)((int *)0x7defe6e3 < piVar11)));
  bVar26 = (byte)(piVar42 + 0x1440647);
  bVar2 = bVar26 - 0x19;
  bVar21 = bVar26 < 0x19 || bVar2 < ((int *)0xfaefe6e3 < piVar42);
  bVar2 = bVar2 - ((int *)0xfaefe6e3 < piVar42);
  uVar28 = CONCAT31((int3)((uint)(piVar42 + 0x1440647) >> 8),bVar2);
  bVar24 = CARRY1(bRam_?,bVar2);
  bVar2 = bRam_? + bVar2;
  bRam_? = bVar2 + bVar21;
  uVar20 = (uint)(bVar24 || CARRY1(bVar2,bVar21));
  uVar29 = uVar28 + 0x15f41019;
  puVar41 = (uint *)(uVar29 + uVar20);
  uVar28 = (uint)(0xea0befe6 < uVar28 || CARRY4(uVar29,uVar20));
  uVar29 = *puVar41;
  uVar20 = *puVar41;
  *puVar41 = (uVar20 - uVar40) - uVar28;
  uVar28 = (uint)(uVar29 < uVar40 || uVar20 - uVar40 < uVar28);
  uVar29 = *puVar32;
  uVar20 = *puVar32;
  *puVar32 = (uVar20 - uVar40) - uVar28;
  uVar28 = (uint)(uVar29 < uVar40 || uVar20 - uVar40 < uVar28);
  uVar20 = *puVar41;
  uVar29 = *puVar41;
  *puVar41 = (uVar29 - uVar40) - uVar28;
  uVar28 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar20 = *puVar41;
  uVar29 = *puVar41;
  *puVar41 = (uVar29 - uVar40) - uVar28;
  sVar43 = (bVar23 & 3) - (*(ushort *)puVar32 & 3);
  *(ushort *)puVar32 = *(short *)puVar32 + (ushort)(0 < sVar43) * sVar43;
  uVar28 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar20 = *puVar41;
  uVar29 = *puVar41;
  *puVar41 = (uVar29 - uVar40) - uVar28;
  *(byte *)puVar32 = bVar23;
  uVar28 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar20 = *puVar41;
  uVar29 = *puVar41;
  *puVar41 = (uVar29 - uVar40) - uVar28;
  puVar41 = (uint *)((int)&unaff_ESI->monitor + 1);
  puVar32 = (uint *)*puVar32;
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  bVar21 = *puVar32 < uVar40 || *puVar32 - uVar40 < uVar20;
  *puVar32 = (*puVar32 - uVar40) - uVar20;
  bVar2 = (bVar25 & 0x1f) % 9;
  uVar44 = CONCAT11(bVar21,*(undefined1 *)puVar41);
  uVar44 = uVar44 << bVar2 | uVar44 >> 9 - bVar2;
  *(char *)puVar41 = (char)uVar44;
  uVar28 = (uint)(byte)((bVar2 == 0) * bVar21 | (bVar2 != 0) * ((uVar44 & 0x100) != 0));
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  *puVar41 = ~*puVar41;
  uVar28 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  puVar45 = (uint *)((int)&unaff_ESI->monitor + 2);
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  bVar21 = (byte *)*puVar37 < pbVar30 || *puVar37 - (int)pbVar30 < uVar20;
  *puVar37 = (*puVar37 - (int)pbVar30) - uVar20;
  pbVar22 = pbVar30 + 0x19;
  bVar2 = *pbVar22;
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar38 + bVar21;
  uVar28 = (uint)(CARRY1(bVar2,bVar38) || CARRY1(bVar26 + bVar38,bVar21));
  uVar29 = *puVar32;
  uVar20 = *puVar32;
  *puVar32 = (uVar20 - uVar40) - uVar28;
  uVar20 = (uint)(uVar29 < uVar40 || uVar20 - uVar40 < uVar28);
  bVar21 = (byte *)*puVar37 < pbVar30 || *puVar37 - (int)pbVar30 < uVar20;
  *puVar37 = (*puVar37 - (int)pbVar30) - uVar20;
  pbVar22 = (byte *)(CONCAT22(uVar17,in_ES) + -0x25efe6e7);
  bVar2 = *pbVar22;
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar31 + bVar21;
  uVar20 = (uint)(CARRY1(bVar2,bVar31) || CARRY1(bVar26 + bVar31,bVar21));
  bVar21 = (byte *)*puVar37 < pbVar30 || *puVar37 - (int)pbVar30 < uVar20;
  *puVar37 = (*puVar37 - (int)pbVar30) - uVar20;
  bVar25 = (byte)pbVar30;
  bVar46 = bVar34 * '\x02' + bVar21;
  uVar29 = CONCAT22((short)((uint)pbVar30 >> 0x10),CONCAT11(bVar46,bVar25));
  uVar20 = (uint)(CARRY1(bVar34,bVar34) || CARRY1(bVar34 * '\x02',bVar21));
  bVar21 = *puVar37 < uVar29 || *puVar37 - uVar29 < uVar20;
  *puVar37 = (*puVar37 - uVar29) - uVar20;
  pbVar22 = (byte *)(uVar40 + uVar29);
  bVar2 = *pbVar22;
  bVar38 = (byte)((uint)puVar32 >> 8);
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar38 + bVar21;
  uVar20 = (uint)(CARRY1(bVar2,bVar38) || CARRY1(bVar26 + bVar38,bVar21));
  bVar21 = *puVar32 < uVar40 || *puVar32 - uVar40 < uVar20;
  *puVar32 = (*puVar32 - uVar40) - uVar20;
  puVar41 = (uint *)((int)puVar37 + -1);
  bVar24 = bVar25 < *(byte *)puVar41 || (byte)(bVar25 - *(byte *)puVar41) < bVar21;
  bVar25 = (bVar25 - *(byte *)puVar41) - bVar21;
  puVar47 = (uint *)CONCAT31((int3)(uVar29 >> 8),bVar25);
  pSVar8 = unaff_ESI + 2;
  bVar2 = *(byte *)&pSVar8->klass;
  bVar23 = (byte)((uint)puVar41 >> 8);
  bVar26 = *(char *)&pSVar8->klass + bVar23;
  *(byte *)&pSVar8->klass = bVar26 + bVar24;
  uVar20 = (uint)(CARRY1(bVar2,bVar23) || CARRY1(bVar26,bVar24));
  bVar21 = *puVar32 < uVar40 || *puVar32 - uVar40 < uVar20;
  *puVar32 = (*puVar32 - uVar40) - uVar20;
  bVar2 = (byte)puVar32 - *(byte *)puVar41;
  bVar24 = (byte)puVar32 < *(byte *)puVar41 || bVar2 < bVar21;
  bVar2 = bVar2 - bVar21;
  pbVar22 = (byte *)((int)puVar47 + -0x22efe6e6);
  bVar21 = CARRY1(*pbVar22,bVar38) || CARRY1(*pbVar22 + bVar38,bVar24);
  *pbVar22 = *pbVar22 + bVar38 + bVar24;
  bVar26 = bVar2 - *(byte *)puVar41;
  bVar24 = bVar2 < *(byte *)puVar41 || bVar26 < bVar21;
  uVar28 = CONCAT31((int3)((uint)puVar32 >> 8),bVar26 - bVar21);
  bVar21 = CARRY1(bRam_?,bVar25);
  bVar25 = bRam_? + bVar25;
  bRam_? = bVar25 + bVar24;
  uVar20 = (uint)(bVar21 || CARRY1(bVar25,bVar24));
  uVar29 = uVar28 - *puVar41;
  bVar21 = uVar28 < *puVar41 || uVar29 < uVar20;
  uVar29 = uVar29 - uVar20;
  bVar26 = *(byte *)puVar36;
  bVar2 = *(byte *)puVar36;
  *(byte *)puVar36 = bVar2 + bVar46 + bVar21;
  uVar20 = (uint)(CARRY1(bVar26,bVar46) || CARRY1(bVar2 + bVar46,bVar21));
  uVar19 = uVar29 - *puVar41;
  bVar21 = uVar29 < *puVar41 || uVar19 < uVar20;
  uVar19 = uVar19 - uVar20;
  pbVar22 = (byte *)(uVar19 * 2 + 0x19);
  bVar25 = (byte)puVar41;
  bVar24 = CARRY1(*pbVar22,bVar25) || CARRY1(*pbVar22 + bVar25,bVar21);
  *pbVar22 = *pbVar22 + bVar25 + bVar21;
  pbVar22 = (byte *)((int)puVar37 + 0x1a);
  bVar2 = *pbVar22;
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar31 + bVar24;
  uVar28 = (uint)(CARRY1(bVar2,bVar31) || CARRY1(bVar26 + bVar31,bVar24));
  uVar20 = *puVar47;
  uVar29 = *puVar47;
  *puVar47 = (uVar29 - uVar40) - uVar28;
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  bVar21 = uVar19 < *puVar41 || uVar19 - *puVar41 < uVar20;
  uVar20 = (uVar19 - *puVar41) - uVar20;
  pbVar22 = (byte *)(uVar20 + 0xe010191b);
  bVar2 = *pbVar22;
  bVar38 = (byte)(uVar20 >> 8);
  bVar26 = *pbVar22 + bVar38;
  *pbVar22 = bVar26 + bVar21;
  uVar28 = (uint)(CARRY1(bVar2,bVar38) || CARRY1(bVar26,bVar21));
  bVar21 = uVar20 < *puVar41 || uVar20 - *puVar41 < uVar28;
  uVar28 = (uVar20 - *puVar41) - uVar28;
  uVar27 = (undefined3)((uint)puVar41 >> 8);
  bVar38 = bVar25 * '\x02' + bVar21;
  pbVar30 = (byte *)CONCAT31(uVar27,bVar38);
  uVar19 = (uint)(CARRY1(bVar25,bVar25) || CARRY1(bVar25 * '\x02',bVar21));
  uVar20 = *puVar45;
  uVar29 = *puVar45;
  *puVar45 = (uVar29 - uVar40) - uVar19;
  bVar25 = (byte)puVar45;
  out(uVar39,bVar25);
  uVar19 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar19);
  uVar20 = *puVar45;
  uVar29 = *puVar45;
  *puVar45 = (uVar29 - uVar40) - uVar19;
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar19);
  uVar29 = uVar28 + *puVar45;
  uVar19 = uVar29 + uVar20;
  *puVar45 = (*puVar45 - uVar40) - (uint)(CARRY4(uVar28,*puVar45) || CARRY4(uVar29,uVar20));
  bVar2 = (byte)uVar19;
  bVar21 = *puVar45 < uVar40 || *puVar45 - uVar40 < (uint)(*(byte *)puVar45 < bVar2);
  *puVar45 = (*puVar45 - uVar40) - (uint)(*(byte *)puVar45 < bVar2);
  bVar24 = *pbVar30 < bVar2 || (byte)(*pbVar30 - bVar2) < bVar21;
  *pbVar30 = (*pbVar30 - bVar2) - bVar21;
  pbVar22 = (byte *)(uVar40 + 0xa7101918);
  bVar21 = CARRY1(*pbVar22,bVar25) || CARRY1(*pbVar22 + bVar25,bVar24);
  *pbVar22 = *pbVar22 + bVar25 + bVar24;
  bVar24 = *pbVar30 < bVar2 || (byte)(*pbVar30 - bVar2) < bVar21;
  *pbVar30 = (*pbVar30 - bVar2) - bVar21;
  pbVar22 = pbVar30 + 0x1a;
  bVar2 = *pbVar22;
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar38 + bVar24;
  uVar28 = (uint)(CARRY1(bVar2,bVar38) || CARRY1(bVar26 + bVar38,bVar24));
  uVar20 = *puVar45;
  uVar29 = *puVar45;
  *puVar45 = (uVar29 - uVar40) - uVar28;
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar29 = uVar19 - *(uint *)(pbVar30 + uVar19);
  bVar21 = uVar19 < *(uint *)(pbVar30 + uVar19) || uVar29 < uVar20;
  iVar48 = uVar29 - uVar20;
  pbVar22 = (byte *)((int)&unaff_ESI[2].klass + 2);
  bVar2 = *pbVar22;
  bVar26 = *pbVar22;
  *pbVar22 = bVar26 + bVar25 + bVar21;
  uVar28 = (uint)(CARRY1(bVar2,bVar25) || CARRY1(bVar26 + bVar25,bVar21));
  uVar20 = *puVar45;
  uVar29 = *puVar45;
  *puVar45 = (uVar29 - uVar40) - uVar28;
  uVar19 = CONCAT31((int3)((uint)puVar45 >> 8),*(undefined1 *)(iVar48 + ((uint)puVar45 & 0xff)));
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar29 = uVar19 + 0xe39aefe7;
  puVar32 = (uint *)(uVar29 - uVar20);
  uVar20 = (uint)(uVar19 < 0x1c651019 || uVar29 < uVar20);
  bVar21 = *puVar32 < uVar40 || *puVar32 - uVar40 < uVar20;
  *puVar32 = (*puVar32 - uVar40) - uVar20;
  bVar2 = pbVar30[iVar48];
  iVar49 = CONCAT31((int3)((uint)iVar48 >> 8),bVar2);
  pbVar22 = (byte *)((int)&data[-0xd84e4a].fields.threshold + 1);
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,bVar21);
  *pbVar22 = *pbVar22 + bVar23 + bVar21;
  bVar25 = (byte)puVar32 - 0x19;
  bVar21 = (byte)puVar32 < 0x19 || bVar25 < bVar24;
  bVar25 = bVar25 - bVar24;
  bVar23 = (byte)((uint)iVar48 >> 8);
  bVar26 = bVar38 + bVar23;
  bVar24 = CARRY1(bVar38,bVar23) || CARRY1(bVar26,bVar21);
  pbVar22 = (byte *)CONCAT31(uVar27,bVar26 + bVar21);
  bVar26 = bVar25 - 0x19;
  bVar21 = bVar25 < 0x19 || bVar26 < bVar24;
  uVar28 = CONCAT31((int3)((uint)puVar32 >> 8),bVar26 - bVar24);
  uVar20 = *puVar47;
  bVar26 = (byte)*puVar47 + bVar2;
  *(byte *)puVar47 = bVar26 + bVar21;
  uVar20 = (uint)(CARRY1((byte)uVar20,bVar2) || CARRY1(bVar26,bVar21));
  uVar29 = uVar28 + 0xe2bcefe7;
  puVar32 = (uint *)(uVar29 - uVar20);
  uVar28 = (uint)(uVar28 < 0x1d431019 || uVar29 < uVar20);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  puVar41 = (uint *)(((int)puVar32 + 0xe228efe7U) - uVar20);
  uVar28 = (uint)(puVar32 < (uint *)0x1dd71019 || (int)puVar32 + 0xe228efe7U < uVar20);
  uVar20 = *puVar41;
  uVar29 = *puVar41;
  *puVar41 = (uVar29 - uVar40) - uVar28;
  uVar19 = CONCAT31((int3)((uint)puVar41 >> 8),*(undefined1 *)(iVar49 + ((uint)puVar41 & 0xff)));
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar29 = uVar19 + 0xe228efe7;
  puVar32 = (uint *)(uVar29 - uVar20);
  uVar28 = (uint)(uVar19 < 0x1dd71019 || uVar29 < uVar20);
  uVar29 = *puVar32;
  uVar20 = *puVar32;
  *puVar32 = (uVar20 - uVar40) - uVar28;
  uVar19 = CONCAT31((int3)((uint)puVar32 >> 8),*(undefined1 *)(iVar49 + ((uint)puVar32 & 0xff)));
  uVar20 = (uint)(uVar29 < uVar40 || uVar20 - uVar40 < uVar28);
  uVar29 = uVar19 + 0xe228efe7;
  puVar32 = (uint *)(uVar29 - uVar20);
  uVar28 = (uint)(uVar19 < 0x1dd71019 || uVar29 < uVar20);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  uVar19 = CONCAT31((int3)((uint)puVar32 >> 8),*(undefined1 *)(iVar49 + ((uint)puVar32 & 0xff)));
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar29 = uVar19 + 0xe228efe7;
  puVar32 = (uint *)(uVar29 - uVar20);
  uVar28 = (uint)(uVar19 < 0x1dd71019 || uVar29 < uVar20);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  uVar28 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  uVar19 = in(uVar39);
  uVar20 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  puVar32 = (uint *)((uVar19 + 0xe1edefe7) - uVar20);
  uVar28 = (uint)(uVar19 < 0x1e121019 || uVar19 + 0xe1edefe7 < uVar20);
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar28;
  *puVar32 = (*puVar32 - uVar40) - (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar28);
  in_AF = 9 < ((byte)puVar32 & 0xf) | in_AF;
  uVar20 = CONCAT31((int3)((uint)puVar32 >> 8),(byte)puVar32 + in_AF * '\x06') & 0xffffff0f;
  puVar32 = (uint *)CONCAT22((short)(uVar20 >> 0x10),
                             CONCAT11((char)((uint)puVar32 >> 8) + in_AF,(char)uVar20));
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - (uint)in_AF;
  *puVar32 = (*puVar32 - uVar40) - (uint)(uVar20 < uVar40 || uVar29 - uVar40 < (uint)in_AF);
  uVar28 = *puVar36;
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - (uint)(0x1db21019 < uVar28);
  uVar19 = (uint)(uVar20 < uVar40 || uVar29 - uVar40 < (uint)(0x1db21019 < uVar28));
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - uVar19;
  uVar28 = *puVar36;
  *puVar32 = (*puVar32 - uVar40) - (uint)(uVar20 < uVar40 || uVar29 - uVar40 < uVar19);
  *pbVar22 = *pbVar22 & (byte)uVar28;
  pbVar22 = (byte *)((int)puVar32 + -0x2aefe6e1);
  bVar2 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar31;
  uVar20 = *puVar32;
  uVar29 = *puVar32;
  *puVar32 = (uVar29 - uVar40) - (uint)CARRY1(bVar2,bVar31);
  *puVar32 = (*puVar32 - uVar40) -
             (uint)(uVar20 < uVar40 || uVar29 - uVar40 < (uint)CARRY1(bVar2,bVar31));
  pcVar50 = (code *)swi(3);
  pMVar14 = (MVWorldObjectClient *)(*pcVar50)();
  return pMVar14;
code_?:
  worldObjectData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(9,worldObjectData._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                    (int)&worldObjectData + 3);
  unaff_EBX = (Dictionary_2_System_Type_Pool_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  bVar2 = 0;
  if (pMVar12 != (MVNetworkGame *)0x0) {
    pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar12,(MethodInfo *)0x0);
    bVar2 = 0;
    if (pMVar13 != (MVLocalPlayer *)0x0) {
      pSVar8 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar13,(MethodInfo *)0x0);
      piVar11 = (int *)func_?(unaff_EBX,TypeInfo__System__Int32);
      if ((String *)*piVar11 != pSVar8) {
        this_69 = (MVBuildModeAvatarRemote *)func_?();
        MVBuildModeAvatarRemote::MVBuildModeAvatarRemote__ctor
                  (this_69,data,worldObjects,(MethodInfo *)0x0);
        return (MVWorldObjectClient *)this_69;
      }
      this_70 = (MVBuildModeAvatarLocal *)func_?();
      MVBuildModeAvatarLocal::MVBuildModeAvatarLocal__ctor
                (this_70,data,worldObjects,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)this_70;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  (this->fields).prototypes = this_00;
  this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  (this->fields).worldObjects = this_01;
  this_02 = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  (this->fields).links = this_02;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>;
  this_03 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  (this->fields).objectLinks = this_03;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_04,(Object *)this,
             MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__UnityAction_System__Object__void__
            );
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  iVar1 = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                    (koGaMaData,
                     (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                      *)this_04,readRuntimeValues,(MethodInfo *)0x0);
  (this->fields).worldObjectRoot = iVar1;
  return;
}

