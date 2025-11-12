
/* Void AddLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddLink
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
  uStackX_10 = 0;
  value[1].klass = (Object__Class *)0xffffffffffffffff;
  *(undefined4 *)&value[1].monitor = 0xffffffff;
  pLVar1 = TypeInfo__MV__WorldObject__LinkDataParameter;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
      FUN_?(pOVar3 + 1,&uStackX_10,(longlong)(int)(pLVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        in_R9 = (ulonglong)(uVar4 & 0x3f);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << in_R9;
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined4 *)&value[1].klass = *(undefined4 *)&pOVar3[1].klass;
    uStackX_10 = 1;
    pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_10);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((longlong)&value[1].klass + 4) = *(undefined4 *)&pOVar3[1].klass;
      uStackX_10 = 2;
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_10);
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)&value[1].monitor = *(undefined4 *)&pOVar3[1].klass;
        this_00 = (this->fields).links;
        if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,*(int32_t *)&value[1].klass
                     ,value,(InsertionBehavior__Enum)CONCAT71((int7)(in_R9 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddObjectLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddObjectLink
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLink);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
  uStackX_10 = 0;
  value[1].klass = (Object__Class *)0xffffffffffffffff;
  *(undefined4 *)&value[1].monitor = 0xffffffff;
  *(undefined1 *)((longlong)&value[1].monitor + 4) = 1;
  pOVar1 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
      FUN_?(pOVar3 + 1,&uStackX_10,(longlong)(int)(pOVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        in_R9 = (ulonglong)(uVar4 & 0x3f);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << in_R9;
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined4 *)&value[1].klass = *(undefined4 *)&pOVar3[1].klass;
    uStackX_10 = 1;
    pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_10)
    ;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)((longlong)&value[1].klass + 4) = *(undefined4 *)&pOVar3[1].klass;
      uStackX_10 = 2;
      pOVar3 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_10);
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)&value[1].monitor = *(undefined4 *)&pOVar3[1].klass;
        this_00 = (this->fields).objectLinks;
        if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,*(int32_t *)&value[1].klass
                     ,value,(InsertionBehavior__Enum)CONCAT71((int7)(in_R9 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddPrototype
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimePrototypeCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
  uStackX_10 = 0;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
      FUN_?(pOVar3 + 1,&uStackX_10,(longlong)(int)(pPVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        in_R9 = (ulonglong)(uVar4 & 0x3f);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << in_R9;
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uStackX_10 = 3;
    pOVar9 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10)
    ;
    pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar9,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uStackX_10 = 1;
    pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10)
    ;
    pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uStackX_10 = 2;
    pOVar11 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10);
    pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    this_01 = (RuntimePrototypeCubeModel *)FUN_?(TypeInfo__RuntimePrototypeCubeModel);
    pBVar12 = TypeInfo__System__Byte;
    if (pOVar11 == (Object *)0x0) {
      data_00 = (Byte__Array *)0x0;
    }
    else {
      data_00 = (Byte__Array *)FUN_?(pOVar11,TypeInfo__System__Byte);
      if (data_00 == (Byte__Array *)0x0) {
        FUN_?(pOVar11,pBVar12);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10,lRam_?);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (pOVar9 != (Object *)0x0) {
        if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar9);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar3);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                    (this_01,*(int32_t *)&pOVar3[1].klass,*(int32_t *)&pOVar9[1].klass,
                     *(float *)&pOVar10[1].klass,data_00,(MethodInfo *)0x0);
          if ((this_01 != (RuntimePrototypeCubeModel *)0x0) &&
             (this_00 = (this->fields).prototypes,
             this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                       (this_01->fields).prototypeId,(Object *)this_01,
                       (InsertionBehavior__Enum)CONCAT71((int7)(in_R9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                       ->klass->rgctx_data[0x22].method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_AddWorldObject
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  value = KoGaMaPackageClient_WorldObjectFactory
                    (data,(this->fields).worldObjects,(this->fields).prototypes,(MethodInfo *)0x0);
  if ((value != (MVWorldObjectClient *)0x0) &&
     (this_00 = (this->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(value->fields)._.id,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single Compare(KoGaMaPackageClient, KoGaMaPackageClient) */

float Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_Compare
                (KoGaMaPackageClient *koGaMaPackageClientOriginal,
                KoGaMaPackageClient *koGaMaPackageClientDesendant,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Comparing_packages_with_differen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InvestigatedCubeCount__0__Matchi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((koGaMaPackageClientOriginal != (KoGaMaPackageClient *)0x0) &&
       (pDVar1 = (koGaMaPackageClientOriginal->fields).worldObjects,
       pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                           (koGaMaPackageClientOriginal->fields).worldObjectRoot,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          ), koGaMaPackageClientDesendant != (KoGaMaPackageClient *)0x0)) &&
     (((pDVar1 = (koGaMaPackageClientDesendant->fields).worldObjects,
       pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0 &&
       (pMVar3 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
       , pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                             (koGaMaPackageClientDesendant->fields).worldObjectRoot,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                            ), pOVar4 != (Object *)0x0)) && (pOVar2 != (Object *)0x0)))) {
    aiStack_5[0] = *(int *)&pOVar2[6].monitor;
    if (*(int *)&pOVar4[6].monitor == aiStack_5[0]) {
      aiStackX_8[0] = 0;
      aiStackX_20[0] = 0;
      (*pOVar2->klass[2].vtable.Equals.methodPtr)
                (pOVar2,pOVar4,CONCAT71((int7)((ulonglong)pMVar3 >> 8),1),aiStackX_8,aiStackX_20,
                 pOVar2->klass[2].vtable.Equals.method);
      if (aiStackX_20[0] != 0) {
        aiStack_5[0] = aiStackX_20[0];
        pOVar2 = (Object *)FUN_?(uRam_?,aiStack_5);
        aiStack_5[0] = aiStackX_8[0];
        pOVar4 = (Object *)FUN_?(uRam_?,aiStack_5);
        pSVar6 = StringLiteral_InvestigatedCubeCount__0__Matchi;
        PStack_7._arg0 = (Object *)0x0;
        PStack_7._arg1 = (Object *)0x0;
        PStack_7._arg2 = (Object *)0x0;
        PStack_7._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_7,pOVar2,pOVar4,(MethodInfo *)0x0);
        PStack_8._arg0 = PStack_7._arg0;
        PStack_8._arg1 = PStack_7._arg1;
        PStack_8._arg2 = PStack_7._arg2;
        PStack_8._args = PStack_7._args;
        pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar6,&PStack_8,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return (float)aiStackX_8[0] / (float)aiStackX_20[0];
      }
    }
    else {
      pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aiStack_5);
      aiStack_5[0] = *(int *)&pOVar4[6].monitor;
      pOVar4 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,aiStack_5);
      pSVar6 = StringLiteral_Comparing_packages_with_differen;
      PStack_7._arg0 = (Object *)0x0;
      PStack_7._arg1 = (Object *)0x0;
      PStack_7._arg2 = (Object *)0x0;
      PStack_7._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_7,pOVar2,pOVar4,(MethodInfo *)0x0);
      PStack_8._arg0 = PStack_7._arg0;
      PStack_8._arg1 = PStack_7._arg1;
      PStack_8._arg2 = PStack_7._arg2;
      PStack_8._args = PStack_7._args;
      pSVar6 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar6,&PStack_8,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar6,(MethodInfo *)0x0);
    }
    return 0.0;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float)(*pcVar9)();
  return fVar10;
}


/* Void Destroy() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_Destroy
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_01 = (MVGroup *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                       (this->fields).worldObjectRoot,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                      );
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  if (this_01 == (MVGroup *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
  if ((bVar3 <= (this_01->klass->_1).naturalAligment) &&
     ((MVGroup__Class *)(this_01->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
      TypeInfo__MVGroup)) {
    pLVar4 = MVGroup::MVGroup_get_Children(this_01,(MethodInfo *)0x0);
    if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    puStack_11 = (undefined *)0x0;
    LStack_2._8_8_ = pLStack_10;
    LStack_2._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_2;
    LStack_2._list = (List_1_System_Object_ *)pLVar4;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_2,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), wo = LStack_2._current, bVar12 != 0) {
      if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
    }
  }
  (*(this_01->klass->vtable).Destroy.methodPtr)(this_01,(this_01->klass->vtable).Destroy.method);
  return;
}


/* Void HandleDeserializedData(Dictionary`2[System.Object,System.Object], KogamaDataType) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_HandleDeserializedData
               (KoGaMaPackageClient *this,Dictionary_2_System_Object_System_Object_ *returnData,
               KogamaDataType__Enum dataType,MethodInfo *method)

{
  if ((char)dataType == '\0') {
    KoGaMaPackageClient_AddPrototype(this,returnData,(MethodInfo *)0x0);
  }
  else {
    if ((dataType & 0xff) == KogamaDataType__Enum_WorldObjects) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar1 = 0;
      value = KoGaMaPackageClient_WorldObjectFactory
                        (returnData,(this->fields).worldObjects,(this->fields).prototypes,
                         (MethodInfo *)0x0);
      if ((value != (MVWorldObjectClient *)0x0) &&
         (this_00 = (this->fields).worldObjects,
         this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(value->fields)._.id,
                   (Object *)value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = (dataType & 0xff) - KogamaDataType__Enum_Links;
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                      ,returnData,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__Link);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
      uStackX_10 = 0;
      pOVar5[1].klass = (Object__Class *)0xffffffffffffffff;
      *(undefined4 *)&pOVar5[1].monitor = 0xffffffff;
      pLVar6 = TypeInfo__MV__WorldObject__LinkDataParameter;
      iVar7._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
      iVar7._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
      iVar7._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
      if (iVar7 < 0) {
        if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
          FUN_?(pOVar8 + 1,&uStackX_10,(longlong)(int)(pLVar6->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar3 & 0x3f);
            puVar9 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << uVar4;
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
        }
        else {
          pOVar8 = (Object *)0x0;
        }
      }
      else {
        pOVar8 = (Object *)((ulonglong)uStackX_11 << 8);
      }
      if ((returnData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (returnData,pOVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar8 != (Object *)0x0)) {
        if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar8,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pOVar5[1].klass = *(undefined4 *)&pOVar8[1].klass;
        uStackX_10 = 1;
        pOVar8 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_10);
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (returnData,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar8 != (Object *)0x0) {
          if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar8,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((longlong)&pOVar5[1].klass + 4) = *(undefined4 *)&pOVar8[1].klass;
          uStackX_10 = 2;
          pOVar8 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&uStackX_10);
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (returnData,pOVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar8 != (Object *)0x0) {
            if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar8,lRam_?);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)&pOVar5[1].monitor = *(undefined4 *)&pOVar8[1].klass;
            this_01 = (this->fields).links;
            if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                         *(int32_t *)&pOVar5[1].klass,pOVar5,
                         (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar3 == 1) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                      ,returnData,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__ObjectLink);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
      uStackX_10 = 0;
      pOVar5[1].klass = (Object__Class *)0xffffffffffffffff;
      *(undefined4 *)&pOVar5[1].monitor = 0xffffffff;
      *(undefined1 *)((longlong)&pOVar5[1].monitor + 4) = 1;
      pOVar12 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
      iVar13._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
      iVar13._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
      iVar13._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
      if (iVar13 < 0) {
        if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
          FUN_?(pOVar8 + 1,&uStackX_10,(longlong)(int)(pOVar12->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar3 & 0x3f);
            puVar9 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << uVar4;
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
        }
        else {
          pOVar8 = (Object *)0x0;
        }
      }
      else {
        pOVar8 = (Object *)((ulonglong)uStackX_11 << 8);
      }
      if ((returnData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (returnData,pOVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar8 != (Object *)0x0)) {
        if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar8,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pOVar5[1].klass = *(undefined4 *)&pOVar8[1].klass;
        uStackX_10 = 1;
        pOVar8 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_10);
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (returnData,pOVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar8 != (Object *)0x0) {
          if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar8,lRam_?);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((longlong)&pOVar5[1].klass + 4) = *(undefined4 *)&pOVar8[1].klass;
          uStackX_10 = 2;
          pOVar8 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&uStackX_10);
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (returnData,pOVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar8 != (Object *)0x0) {
            if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar8,lRam_?);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)&pOVar5[1].monitor = *(undefined4 *)&pOVar8[1].klass;
            this_02 = (this->fields).objectLinks;
            if (this_02 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                         *(int32_t *)&pOVar5[1].klass,pOVar5,
                         (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
               (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
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
      pOVar2 = pOVar1->klass;
      *(undefined1 *)&pOVar1[0x13].monitor = 1;
      UNRECOVERED_JUMPTABLE = pOVar2[3]._0.image;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(pOVar1,pOVar2[3]._0.gc_desc,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient_ToString
                   (KoGaMaPackageClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_worldObjects_Count_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_links_Count_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_protypes_Count_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_objectLinks_Count_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__String,8);
  if (lVar1 != 0) {
    FUN_?(lVar1,0);
    pDVar2 = (this->fields).prototypes;
    if (pDVar2 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
      iVar3 = (pDVar2->fields)._count;
      iVar4 = (pDVar2->fields)._freeCount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                          (iVar3 - iVar4,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,
                           (IFormatProvider *)0x0,(MethodInfo *)0x0);
      FUN_?(lVar1,1,pSVar5);
      FUN_?(lVar1,2);
      pDVar6 = (this->fields).worldObjects;
      if (pDVar6 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        iVar3 = (pDVar6->fields)._count;
        iVar4 = (pDVar6->fields)._freeCount;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                            (iVar3 - iVar4,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,
                             (IFormatProvider *)0x0,(MethodInfo *)0x0);
        FUN_?(lVar1,3,pSVar5);
        FUN_?(lVar1,4);
        pDVar7 = (this->fields).links;
        if (pDVar7 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
          iVar3 = (pDVar7->fields)._count;
          iVar4 = (pDVar7->fields)._freeCount;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar3 - iVar4,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,
                               (IFormatProvider *)0x0,(MethodInfo *)0x0);
          FUN_?(lVar1,5,pSVar5);
          FUN_?(lVar1,6);
          pDVar8 = (this->fields).objectLinks;
          if (pDVar8 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
            iVar3 = (pDVar8->fields)._count;
            iVar4 = (pDVar8->fields)._freeCount;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                 field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar3 - iVar4,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,
                       (IFormatProvider *)0x0,(MethodInfo *)0x0);
            FUN_?(lVar1,7);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__String,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (lVar1 == 0) {
              uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
              this_00 = (ArgumentNullException *)func_?(uVar9);
              pSVar5 = (String *)func_?(&StringLiteral_values);
              mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                        (this_00,pSVar5,(MethodInfo *)0x0);
              uVar9 = func_?(&MethodInfo__System__String__Concat_System__String____);
              FUN_?(this_00,uVar9);
              pcVar10 = (code *)swi(3);
              pSVar5 = (String *)(*pcVar10)();
              return pSVar5;
            }
            if (*(int *)(lVar1 + 0x18) < 2) {
              if (*(longlong *)(lVar1 + 0x18) == 0) {
                return (String *)**(undefined8 **)(lRam_? + 0xb8);
              }
              if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
                FUN_?();
                pcVar10 = (code *)swi(3);
                pSVar5 = (String *)(*pcVar10)();
                return pSVar5;
              }
              if (*(String **)(lVar1 + 0x20) != (String *)0x0) {
                return *(String **)(lVar1 + 0x20);
              }
            }
            else {
              plVar11 = (longlong *)(lVar1 + 0x20);
              values = (String__Array *)0x0;
              pSVar12 = values;
              pSVar13 = values;
              while (uVar14 = (uint)pSVar12, (int)uVar14 < (int)*(uint *)(lVar1 + 0x18)) {
                if (*(uint *)(lVar1 + 0x18) <= uVar14) goto code_?;
                if (*plVar11 != 0) {
                  pSVar13 = (String__Array *)
                            ((longlong)pSVar13->vector + (longlong)*(int *)(*plVar11 + 0x10) + -0x20
                            );
                }
                plVar11 = plVar11 + 1;
                pSVar12 = (String__Array *)(ulonglong)(uVar14 + 1);
              }
              if (0x7fffffff < (longlong)pSVar13) {
                uVar9 = func_?(&TypeInfo__System__OutOfMemoryException);
                this_02 = (OutOfMemoryException *)func_?(uVar9);
                mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor
                          (this_02,(MethodInfo *)0x0);
                uVar9 = func_?(&MethodInfo__System__String__Concat_System__String____)
                ;
                FUN_?(this_02,uVar9);
                pcVar10 = (code *)swi(3);
                pSVar5 = (String *)(*pcVar10)();
                return pSVar5;
              }
              iVar3 = (int)pSVar13;
              if (iVar3 != 0) {
                pSVar5 = (String *)FUN_?((ulonglong)pSVar13 & 0xffffffff);
                plVar11 = (longlong *)(lVar1 + 0x20);
                pSVar12 = values;
                pSVar13 = values;
code_?:
                do {
                  iVar4 = (int)pSVar12;
                  uVar14 = (uint)pSVar13;
                  if (*(int *)(lVar1 + 0x18) <= (int)uVar14) {
code_?:
                    if (iVar4 == iVar3) {
                      return pSVar5;
                    }
                    lVar1 = FUN_?(lVar1);
                    pSVar15 = TypeInfo__System__String;
                    if ((lVar1 != 0) &&
                       (values = (String__Array *)FUN_?(lVar1),
                       values == (String__Array *)0x0)) {
                      FUN_?(lVar1,pSVar15);
                      pcVar10 = (code *)swi(3);
                      pSVar5 = (String *)(*pcVar10)();
                      return pSVar5;
                    }
                    pSVar5 = mscorlib.dll::System::String::String_Concat_7
                                        (values,(MethodInfo *)0x0);
                    return pSVar5;
                  }
                  if (*(uint *)(lVar1 + 0x18) <= uVar14) goto code_?;
                  lVar16 = *plVar11;
                  if ((lVar16 != 0) && (*(int *)(lVar16 + 0x10) != 0)) {
                    iVar17 = *(int *)(lVar16 + 0x10);
                    if (iVar3 - iVar4 < iVar17) {
                      iVar4 = -1;
                      goto code_?;
                    }
                    if (pSVar5 == (String *)0x0) {
                      FUN_?();
                      pcVar10 = (code *)swi(3);
                      pSVar5 = (String *)(*pcVar10)();
                      return pSVar5;
                    }
                    if ((pSVar5->fields)._stringLength - iVar4 < iVar17) {
                      uVar9 = func_?(&TypeInfo__System__IndexOutOfRangeException);
                      this_01 = (IndexOutOfRangeException *)func_?(uVar9);
                      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                                (this_01,(MethodInfo *)0x0);
                      uVar9 = func_?(&
                                                  MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                                  );
                      FUN_?(this_01,uVar9);
                      pcVar10 = (code *)swi(3);
                      pSVar5 = (String *)(*pcVar10)();
                      return pSVar5;
                    }
                    src = (uint8_t *)(lVar16 + 0x14);
                    dest = &(pSVar5->fields)._firstChar + iVar4;
                    uVar18 = (ulonglong)(uint)(iVar17 * 2);
                    if ((uVar18 <= (ulonglong)((longlong)dest - (longlong)src)) &&
                       (uVar18 <= (ulonglong)((longlong)src - (longlong)dest))) {
                      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                                ((uint8_t *)dest,src,iVar17 * 2,(MethodInfo *)0x0);
                      pSVar12 = (String__Array *)(ulonglong)(uint)(iVar4 + iVar17);
                      pSVar13 = (String__Array *)(ulonglong)(uVar14 + 1);
                      plVar11 = plVar11 + 1;
                      goto code_?;
                    }
                    FUN_?(dest,src,uVar18);
                    pSVar12 = (String__Array *)(ulonglong)(uint)(iVar4 + iVar17);
                  }
                  pSVar13 = (String__Array *)(ulonglong)(uVar14 + 1);
                  plVar11 = plVar11 + 1;
                } while( true );
              }
            }
            return (String *)**(undefined8 **)(lRam_? + 0xb8);
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar10)();
  return pSVar5;
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
    FUN_?(&TypeInfo__MV__Common__BlueprintData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__BlueprintType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectableInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAdvancedGhost);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAnd);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBattery);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCheckpoint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCollectible);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBaseBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCountingCube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeGun);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelPrototypeTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVExplosives);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVFire);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVFlag);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoinChest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameCoin);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameOptionDataObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGamePassProgressionDataObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGamePointChest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGamePoint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGhostInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGlobalSoundEmitter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGoal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGravityCube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVHamsterWheel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVHoverCraft);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJetPack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVKillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBaseBlueprint
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatform);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVObjectEnabler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVOculusKillLimit);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPointLightPreset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPointLight);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPressurePlate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPreviewAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPulseBox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRandomBox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRotator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRoundCube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGunBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSentryGun);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSkybox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSmoke);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSoundEmitter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointBlue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointGreen);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointRed);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointYellow);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeleportGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeleporter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTextMsg);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTimeTrigger);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVToggleBox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTriggerBox);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWaterPlanePreset);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWaterPlane);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShootableButton);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamEditor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeWorldObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeAttackFlag);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TriggerCube);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseLever);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WindTurbine);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WOCM_trying_to_create_unknown_ty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WOCM_trying_to_create_unknown_bl);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_create_abstract_Spawn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 3;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8)
  ;
  if ((worldObjectData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (worldObjectData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar1 == (Object *)0x0)) goto code_?;
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1);
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  }
  uVar4 = *(undefined4 *)&pOVar1[1].klass;
  switch(uVar4) {
  case 0:
    auStackX_8[0] = 9;
    pOVar1 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)worldObjectData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (iVar5 < 0) {
      pSVar6 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
                HashtableFunctions_PrettyString(worldObjectData,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar6,(MethodInfo *)0x0);
      auStackX_8[0] = 6;
      uVar7 = FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      auStackX_8[0] =
           FUN_?(worldObjectData,uVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      pOVar1 = (Object *)FUN_?(uRam_?);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar1,(MethodInfo *)0x0);
    }
    auStackX_8[0] = 9;
    pOVar1 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      iVar8 = *(int *)&pOVar1[1].klass;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) &&
         (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
         pMVar11 != (MVLocalPlayer *)0x0)) {
        if (iVar8 == (pMVar11->fields)._._ActorNr_k__BackingField) {
          pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVAvatarLocal);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AvatarRespawnHandler);
            LOCK();
            UNLOCK();
            FUN_?(&::StringLiteral__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          *(String **)&(pMVar12->fields)._IsInVehicle_k__BackingField = ::StringLiteral__;
          func_?(&(pMVar12->fields)._IsInVehicle_k__BackingField);
          lVar13 = FUN_?(TypeInfo__AvatarRespawnHandler);
          *(undefined1 *)(lVar13 + 0x18) = 1;
          *(longlong *)&pMVar12[1].fields._._._._.position.z = lVar13;
          func_?(&pMVar12[1].fields._._._._.position.z);
          pMVar12[1].fields._._._._.type = 0x3f800000;
          *(undefined4 *)&pMVar12[1].fields._._._._.field_0x5c = 100;
          *(undefined4 *)((longlong)&pMVar12[1].fields._._._._.data + 4) = 0xffffffff;
          lVar13 = FUN_?();
          if (lVar13 != 0) {
            MVAvatar::MVAvatar__ctor
                      ((MVAvatar *)pMVar12,worldObjectData,*(GameObject **)(lVar13 + 0x38),
                       worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)pMVar12;
          }
        }
        else {
          if (iVar8 != -1) {
            pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVAvatarRemote);
            MVAvatarRemote::MVAvatarRemote__ctor
                      (pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)pMVar12;
          }
          pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPreviewAvatar);
          lVar13 = FUN_?();
          if (lVar13 != 0) {
            MVGroup::MVGroup__ctor
                      ((MVGroup *)pMVar12,worldObjectData,*(GameObject **)(lVar13 + 0x58),
                       worldObjects,(MethodInfo *)0x0);
            return (MVWorldObjectClient *)pMVar12;
          }
        }
      }
    }
    goto code_?;
  case 1:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCubeModelInstance);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVCubeModelBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar14 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    *(undefined8 *)((longlong)&(pMVar12->fields)._.SpawnRoleModeTypes + 4) =
         *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
    *(float *)((longlong)&(pMVar12->fields)._.Size + 4) = fVar14;
    if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVCubeModelBase::MVCubeModelBase__ctor
              ((MVCubeModelBase *)pMVar12,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0)
    ;
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x4000803383;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar16 != (MVGameControllerBase *)0x0) &&
         (pMVar9 = (pMVar16->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
        (pMVar10 = (pMVar9->fields).playerContainer, pMVar10 != (MVPlayerContainer *)0x0)) &&
       (pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
       pMVar11 != (MVLocalPlayer *)0x0)) {
      if (((pMVar11->fields)._._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
         ((((pMVar11->fields)._._UserProfileData_k__BackingField)->fields).IsAdmin != 0)) {
        piVar15 = &(pMVar12->fields)._._._.interactionFlags;
        *piVar15 = *piVar15 | 0x8000000000;
      }
      iVar8 = (pMVar11->fields)._._ProfileID_k__BackingField;
      if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar17 = (pMVar12->fields)._._.children;
      if (pDVar17 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        uVar18 = (pMVar12->fields)._._._.interactionFlags;
        uVar19 = uVar18 & 0xffffffffffffbfff;
        if (iVar8 == pDVar17[1].fields._freeList) {
          uVar19 = uVar18 | 0x4000;
        }
        (pMVar12->fields)._._._.interactionFlags = uVar19;
        return (MVWorldObjectClient *)pMVar12;
      }
    }
    goto code_?;
  case 2:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPointLight);
    MVPointLight::MVPointLight__ctor
              ((MVPointLight *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 3:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVTriggerBox);
    MVTriggerBox::MVTriggerBox__ctor
              ((MVTriggerBox *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
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
    EStack_20.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
    EStack_20.monitor = (MonitorData *)0xffffffffffffffff;
    uStack_21 = uVar4;
    str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_20,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_WOCM_trying_to_create_unknown_ty;
code_?:
    pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar6,(MethodInfo *)0x0);
    pMVar12 = (MVAvatarRemote *)0x0;
    break;
  case 7:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Attempt_to_create_abstract_Spawn,(MethodInfo *)0x0);
  case 0x2a:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSpawnPointBlue);
    MVSpawnPointBlue::MVSpawnPointBlue__ctor
              ((MVSpawnPointBlue *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 8:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCubeModelPrototypeTerrain);
    MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain__ctor
              ((MVCubeModelPrototypeTerrain *)pMVar12,worldObjectData,worldObjects,prototypes,
               (MethodInfo *)0x0);
    break;
  case 9:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGroup);
    MVGroup::MVGroup__ctor_2((MVGroup *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0xd:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSoundEmitter);
    MVSoundEmitter::MVSoundEmitter__ctor
              ((MVSoundEmitter *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x11:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVFlag);
    MVFlag::MVFlag__ctor((MVFlag *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x13:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVBattery);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvBatteryPrefab;
    goto code_?;
  case 0x14:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVToggleBox);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvToggleBoxPrefab;
    goto code_?;
  case 0x15:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVNegate);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvNegatePrefab;
    goto code_?;
  case 0x16:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVAnd);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvAndPrefab;
    goto code_?;
  case 0x17:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVExplosives);
    bVar24 = cRam_? == '\0';
    *(undefined4 *)&(pMVar12->fields)._.Modifiers = 0x41200000;
    *(undefined4 *)((longlong)&(pMVar12->fields)._.Modifiers + 4) = 0x43160000;
    *(undefined4 *)&(pMVar12->fields)._.CurrentItem = 0x455ac000;
    if (bVar24) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvExplosivesPrefab;
    goto code_?;
  case 0x18:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVTextMsg);
    MVTextMsg::MVTextMsg__ctor((MVTextMsg *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x19:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVFire);
    MVFire::MVFire__ctor((MVFire *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x1a:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSmoke);
    MVSmoke::MVSmoke__ctor((MVSmoke *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x1b:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVTimeTrigger);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvTimeTriggerPrefab;
    goto code_?;
  case 0x1c:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVTeleporter);
    MVTeleporter::MVTeleporter__ctor
              ((MVTeleporter *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x1d:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGoal);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvGoalPrefab;
code_?:
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x20:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCubeModelFineGrainedTerrain);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVCubeModelBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVCubeModelBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVCubeModelBase::MVCubeModelBase__ctor
              ((MVCubeModelBase *)pMVar12,worldObjectData,worldObjects,prototypes,(MethodInfo *)0x0)
    ;
    (pMVar12->fields)._._._.interactionFlags = 0;
    break;
  case 0x21:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPressurePlate);
    MVPressurePlate::MVPressurePlate__ctor
              ((MVPressurePlate *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x25:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPickupItemBase);
    MVPickupItemBase::MVPickupItemBase__ctor
              ((MVPickupItemBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x26:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSkybox);
    MVSkybox::MVSkybox__ctor((MVSkybox *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x27:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSpawnPointRed);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvSpawnPointRedPrefab;
    goto code_?;
  case 0x28:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSpawnPointGreen);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvSpawnPointGreenPrefab;
    goto code_?;
  case 0x29:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSpawnPointYellow);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvSpawnPointYellowPrefab;
code_?:
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
    (pMVar12->fields)._._._.interactionFlags = 0xa101;
    break;
  case 0x2b:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVObjectEnabler);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVObjectEnablerObject);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar24 = cRam_? == '\0';
    *(undefined1 *)&(pMVar12->fields)._.Animation = 1;
    if (bVar24) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 != (PrefabPool *)0x0) {
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,
                 (ObjectPrefab *)(pPVar22->fields).mvObjectEnablerPrefab,worldObjects,
                 (MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x18000;
      pOVar23 = (pMVar12->fields)._._._.component;
      if (pOVar23 != (ObjectPrefab *)0x0) {
        bVar25 = (TypeInfo__MVObjectEnablerObject->_1).naturalAligment;
        if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
           ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__MVObjectEnablerObject)) {
          FUN_?(pOVar23);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.IsFiring = (MVRuntimeDataVariable *)pOVar23[1].klass;
        if (iRam_? != 0) {
          uVar26 = (uint)((ulonglong)&(pMVar12->fields)._.IsFiring >> 0xc);
          uVar18 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
            puVar27 = (ulonglong *)(uVar18 * 8 + 0xADDR);
            LOCK();
            bVar24 = uVar19 == *puVar27;
            if (bVar24) {
              *puVar27 = uVar19 | 1L << (uVar26 & 0x3f);
            }
            UNLOCK();
          } while (!bVar24);
        }
        iVar8 = iRam_?;
        pMVar28 = (pMVar12->fields)._.IsFiring;
        if (pMVar28 != (MVRuntimeDataVariable *)0x0) {
          (pMVar28->fields).sendValue = (Object *)pMVar12;
          if (iVar8 == 0) {
            return (MVWorldObjectClient *)pMVar12;
          }
          uVar26 = (uint)((ulonglong)&(pMVar28->fields).sendValue >> 0xc);
          uVar18 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
            puVar27 = (ulonglong *)(uVar18 * 8 + 0xADDR);
            LOCK();
            bVar24 = uVar19 == *puVar27;
            if (bVar24) {
              *puVar27 = uVar19 | 1L << (uVar26 & 0x3f);
            }
            UNLOCK();
          } while (!bVar24);
          return (MVWorldObjectClient *)pMVar12;
        }
      }
    }
    goto code_?;
  case 0x2c:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVWaterPlane);
    MVWaterPlane::MVWaterPlane__ctor
              ((MVWaterPlane *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x2d:
    auStackX_8[0] = 7;
    pOVar1 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (worldObjectData,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    lVar13 = FUN_?(pOVar1,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    pSVar6 = StringLiteral_BlueprintData;
    pMVar29 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (lVar13 == 0) goto code_?;
    pDVar30 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar1,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar30,(Object *)pSVar6,pMVar29);
    EStack_20.klass = (Enum__Class *)TypeInfo__MV__Common__BlueprintData;
    EStack_20.monitor = (MonitorData *)0xffffffffffffffff;
    uStack_21 = CONCAT22(uStack_21._2_2_,1);
    pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_20,(MethodInfo *)0x0);
    lVar13 = FUN_?(pOVar1,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    pMVar29 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (lVar13 == 0) goto code_?;
    pDVar30 = (Dictionary_2_System_Object_System_Object_ *)
              FUN_?(pOVar1,
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar30,(Object *)pSVar6,pMVar29);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__BlueprintType->_0).element_class) {
      FUN_?(pOVar1,TypeInfo__MV__WorldObject__BlueprintType);
      pcVar2 = (code *)swi(3);
      pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
      return pMVar3;
    }
    switch(*(undefined1 *)&pOVar1[1].klass) {
    case 7:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVMovable);
      MVMovable::MVMovable__ctor
                ((MVMovable *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 8:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVBody);
      MVBody::MVBody__ctor((MVBody *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 9:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVTeleportGroup);
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVBlueprintBase::MVBlueprintBase__ctor_2
                ((MVBlueprintBase *)pMVar12,worldObjectData,*(GameObject **)(lVar13 + 0x1e8),
                 worldObjects,(MethodInfo *)0x0);
      break;
    case 10:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSentryGunBlueprint);
      MVBlueprintBase::MVBlueprintBase__ctor
                ((MVBlueprintBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x1000;
      break;
    case 0xb:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVMovingPlatform);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVMovable);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      goto code_?;
    case 0xc:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVMovingPlatformGroup);
      MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
                ((MVMovingPlatformGroup *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xd:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVRotator);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVMovable);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
code_?:
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVMovable::MVMovable__ctor
                ((MVMovable *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xe:
      goto code_?;
    default:
      uStack_21 = CONCAT31(uStack_21._1_3_,*(undefined1 *)&pOVar1[1].klass);
      EStack_20.klass = (Enum__Class *)TypeInfo__MV__WorldObject__BlueprintType;
      EStack_20.monitor = (MonitorData *)0xffffffffffffffff;
      str1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_20,(MethodInfo *)0x0);
      pSVar6 = StringLiteral_WOCM_trying_to_create_unknown_bl;
      goto code_?;
    }
    break;
  case 0x2e:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPulseBox);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvPulseBoxPrefab;
code_?:
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x18000;
    break;
  case 0x2f:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVRandomBox);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvRandomBoxPrefab;
code_?:
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x10000;
    break;
  case 0x30:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVSentryGun);
    MVSentryGun::MVSentryGun__ctor
              ((MVSentryGun *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x31:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCollectible);
    *(undefined1 *)&(pMVar12->fields)._.IsFiring = 1;
    *(undefined4 *)((longlong)&(pMVar12->fields)._.IsFiring + 4) = 0x3f4ccccd;
    *(undefined4 *)&(pMVar12->fields)._.Animation = 0x3f000000;
    lVar13 = FUN_?();
    if (lVar13 != 0) {
      MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
                ((MVGamePointRewardLogicObject *)pMVar12,worldObjectData,
                 *(ObjectPrefab **)(lVar13 + 200),worldObjects,(MethodInfo *)0x0);
      MVCollectible::MVCollectible_Create((MVCollectible *)pMVar12,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)pMVar12;
    }
    goto code_?;
  case 0x32:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVMovingPlatformNode);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVWorldObjectClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar13 = FUN_?();
    if (lVar13 != 0) {
      pGVar31 = *(GameObject **)(lVar13 + 0x1b8);
      if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVWorldObjectClient::MVWorldObjectClient__ctor
                ((MVWorldObjectClient *)pMVar12,worldObjectData,pGVar31,worldObjects,
                 (MethodInfo *)0x0);
      (pMVar12->fields)._._._.interactionFlags =
           (pMVar12->fields)._._._.interactionFlags & 0xfffffffffffffc7fU | 9;
      return (MVWorldObjectClient *)pMVar12;
    }
    goto code_?;
  case 0x33:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVWaterPlanePreset);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Application);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVWaterPlane::MVWaterPlane__ctor
              ((MVWaterPlane *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
      FUN_?();
    }
    break;
  case 0x34:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVPointLightPreset);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Application);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVPointLight::MVPointLight__ctor
              ((MVPointLight *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x10000;
    if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
      FUN_?();
    }
    break;
  case 0x35:
code_?:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGhostInstance);
    MVGhostInstance::MVGhostInstance__ctor
              ((MVGhostInstance *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x36:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCubeGun);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVPickupItemBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVPickupItemBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVPickupItemBase::MVPickupItemBase__ctor
              ((MVPickupItemBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x8000;
    MVCubeGun::MVCubeGun_SetCubeMaterial((MVCubeGun *)pMVar12,(MethodInfo *)0x0);
    break;
  case 0x37:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCheckpoint);
    MVCheckpoint::MVCheckpoint__ctor
              ((MVCheckpoint *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    break;
  case 0x38:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVHoverCraft);
    lVar13 = FUN_?();
    if (lVar13 == 0) goto code_?;
    MVVehicleBase::MVVehicleBase__ctor
              ((MVVehicleBase *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x80),
               worldObjects,(MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x9000;
    *(undefined4 *)&(pMVar12->fields)._.shield = 0x19;
    break;
  case 0x39:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVWorldObjectSpawnerVehicle);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SpawnerObject);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    prefabObject = (pPVar22->fields).spawnerObject;
    *(undefined4 *)&(pMVar12->fields)._.IsFiring = 0xffffffff;
    *(undefined4 *)&(pMVar12->fields)._.SpawnRoleModeTypes = 0xffffffff;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)pMVar12,worldObjectData,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    piVar32 = &(pMVar12->fields)._._._.previewLayerMask;
    *piVar32 = *piVar32 | 0x1000;
    pOVar23 = (pMVar12->fields)._._._.component;
    if (pOVar23 == (ObjectPrefab *)0x0) {
      (pMVar12->fields)._.skillDataManager = (WorldObjectSkillDataManager *)0x0;
    }
    else {
      bVar25 = (TypeInfo__SpawnerObject->_1).naturalAligment;
      if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
         ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          (Il2CppClass *)TypeInfo__SpawnerObject)) {
        FUN_?(pOVar23);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      (pMVar12->fields)._.skillDataManager = (WorldObjectSkillDataManager *)pOVar23;
      bVar25 = (TypeInfo__SpawnerObject->_1).naturalAligment;
      if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
         ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          (Il2CppClass *)TypeInfo__SpawnerObject)) {
        FUN_?(pOVar23);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
    }
    if (iRam_? != 0) {
      uVar26 = (uint)((ulonglong)&(pMVar12->fields)._.skillDataManager >> 0xc);
      uVar18 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar27 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar24 = uVar19 == *puVar27;
        if (bVar24) {
          *puVar27 = uVar19 | 1L << (uVar26 & 0x3f);
        }
        UNLOCK();
      } while (!bVar24);
    }
    break;
  case 0x3b:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVJetPack);
    if (cRam_? == '\0') {
      FUN_?(&
                    WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 != (PrefabPool *)0x0) {
      this = (pPVar22->fields).jetPackPrefabLUT;
      BVar33 = MVJetPack::MVJetPack_GetJetPackType(worldObjectData,(MethodInfo *)0x0);
      if (this != (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
                   *)0x0) {
        pOVar23 = (ObjectPrefab *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this,BVar33 & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                            );
        MVVehicleBase::MVVehicleBase__ctor
                  ((MVVehicleBase *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
        pGVar31 = (pMVar12->fields)._._._.gameObject;
        piVar15 = &(pMVar12->fields)._._._.interactionFlags;
        *piVar15 = *piVar15 | 0x9000;
        if (pGVar31 != (GameObject *)0x0) {
          pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar31,
                               WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                              );
          *(Object **)&(pMVar12->fields)._.lineOfFire.m_Origin.y = pOVar1;
          func_?(&(pMVar12->fields)._.lineOfFire.m_Origin.y);
          MVar34 = MVJetPack::MVJetPack_GetJetPackType(worldObjectData,(MethodInfo *)0x0);
          *(char *)&(pMVar12->fields)._.lineOfFire.m_Direction.x = (char)MVar34;
          return (MVWorldObjectClient *)pMVar12;
        }
      }
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  case 0x3c:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVRoundCube);
    lVar13 = FUN_?();
    if (lVar13 == 0) goto code_?;
    pOVar23 = *(ObjectPrefab **)(lVar13 + 0x148);
    goto code_?;
  case 0x3d:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVAdvancedGhost);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AdvancedGhostObject);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)pMVar12,worldObjectData,
               (ObjectPrefab *)(pPVar22->fields).mvAdvancedGhostPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x200b101;
    pMVar28 = (MVRuntimeDataVariable *)(pMVar12->fields)._._._.component;
    if (pMVar28 == (MVRuntimeDataVariable *)0x0) {
      (pMVar12->fields)._.SpawnRoleModeTypes = (MVRuntimeDataVariable *)0x0;
    }
    else {
      bVar25 = (TypeInfo__AdvancedGhostObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
         ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
        FUN_?(pMVar28);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      (pMVar12->fields)._.SpawnRoleModeTypes = pMVar28;
      bVar25 = (TypeInfo__AdvancedGhostObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
         ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          (Il2CppClass *)TypeInfo__AdvancedGhostObject)) {
        FUN_?(pMVar28);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
    }
    if (iRam_? != 0) {
      uVar26 = (uint)((ulonglong)&(pMVar12->fields)._.SpawnRoleModeTypes >> 0xc);
      uVar18 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar27 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar24 = uVar19 == *puVar27;
        if (bVar24) {
          *puVar27 = uVar19 | 1L << (uVar26 & 0x3f);
        }
        UNLOCK();
      } while (!bVar24);
    }
    break;
  case 0x3e:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVHamsterWheel);
    bVar24 = cRam_? == '\0';
    (pMVar12->fields)._.lineOfFire.m_Direction.z = 40.0;
    *(undefined4 *)&(pMVar12->fields)._.isLocal = 0x41200000;
    *(undefined4 *)&(pMVar12->fields)._.body = 0x44fa0000;
    if (bVar24) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    MVVehicleBase::MVVehicleBase__ctor
              ((MVVehicleBase *)pMVar12,worldObjectData,
               (ObjectPrefab *)(pPVar22->fields).mvHamsterWheelPrefab,worldObjects,(MethodInfo *)0x0
              );
    piVar15 = &(pMVar12->fields)._._._.interactionFlags;
    *piVar15 = *piVar15 | 0x8000;
    *(undefined4 *)&(pMVar12->fields)._.shield = 0x1a;
    break;
  case 0x3f:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVKillLimit);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvKillLimitPrefab;
    goto code_?;
  case 0x40:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVOculusKillLimit);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 == (PrefabPool *)0x0) goto code_?;
    pOVar23 = (pPVar22->fields).mvOculusKillLimitPrefab;
code_?:
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,
               (MethodInfo *)0x0);
    (pMVar12->fields)._._._.interactionFlags =
         (pMVar12->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x40008000;
    break;
  case 0x41:
    pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCountingCube);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVCountingCubeObject);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = _UNK_?;
    bVar24 = cRam_? == '\0';
    (pMVar12->fields)._.Modifiers =
         (MVRuntimeDataVariable *)CONCAT44(_UNK_?,TypeRef__System__Activator__T._0_4_);
    *(undefined4 *)&(pMVar12->fields)._.CurrentItem = uVar4;
    *(undefined4 *)&(pMVar12->fields)._.LimbRotationRuntimeData = 0xffffffff;
    if (bVar24) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar22 != (PrefabPool *)0x0) {
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,
                 (ObjectPrefab *)(pPVar22->fields).mvCountingCubePrefab,worldObjects,
                 (MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x10000;
      pMVar28 = (MVRuntimeDataVariable *)(pMVar12->fields)._._._.component;
      if (pMVar28 == (MVRuntimeDataVariable *)0x0) {
        (pMVar12->fields)._.IsFiring = (MVRuntimeDataVariable *)0x0;
      }
      else {
        bVar25 = (TypeInfo__MVCountingCubeObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.IsFiring = pMVar28;
        bVar25 = (TypeInfo__MVCountingCubeObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__MVCountingCubeObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
      }
      if (iRam_? == 0) {
        return (MVWorldObjectClient *)pMVar12;
      }
      uVar26 = (uint)((ulonglong)&(pMVar12->fields)._.IsFiring >> 0xc);
      uVar18 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar27 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar24 = uVar19 == *puVar27;
        if (bVar24) {
          *puVar27 = uVar19 | 1L << (uVar26 & 0x3f);
        }
        UNLOCK();
      } while (!bVar24);
      return (MVWorldObjectClient *)pMVar12;
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
    return pMVar3;
  default:
    switch(uVar4) {
    case 0x76:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(TypeInfo__WorldObjectTypes__VehicleEnergy__MVVehicleEnergy);
      WorldObjectTypes::VehicleEnergy::MVVehicleEnergy::MVVehicleEnergy__ctor
                ((MVVehicleEnergy *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x77:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(
                             TypeInfo__WorldObjectTypes__VehicleEnergy__MVWorldObjectSpawnerVehicleEnergy
                             );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SpawnerObject);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      pOVar23 = *(ObjectPrefab **)(lVar13 + 0x220);
      *(undefined4 *)&(pMVar12->fields)._.IsFiring = 0xffffffff;
      *(undefined4 *)&(pMVar12->fields)._.SpawnRoleModeTypes = 0xffffffff;
      MVBlueprintBase::MVBlueprintBase__ctor_1
                ((MVBlueprintBase *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
      piVar32 = &(pMVar12->fields)._._._.previewLayerMask;
      *piVar32 = *piVar32 | 0x1000;
      pOVar23 = (pMVar12->fields)._._._.component;
      if (pOVar23 == (ObjectPrefab *)0x0) {
        (pMVar12->fields)._.skillDataManager = (WorldObjectSkillDataManager *)0x0;
        func_?(&(pMVar12->fields)._.skillDataManager);
      }
      else {
        bVar25 = (TypeInfo__SpawnerObject->_1).naturalAligment;
        if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
           ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__SpawnerObject)) {
          FUN_?(pOVar23);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.skillDataManager = (WorldObjectSkillDataManager *)pOVar23;
        bVar25 = (TypeInfo__SpawnerObject->_1).naturalAligment;
        if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
           ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__SpawnerObject)) {
          FUN_?(pOVar23);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        func_?(&(pMVar12->fields)._.skillDataManager);
      }
      break;
    default:
      goto code_?;
    case 0x82:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGamePoint);
      *(undefined1 *)((longlong)&(pMVar12->fields)._.Modifiers + 4) = 1;
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
                ((MVGamePointRewardLogicObject *)pMVar12,worldObjectData,
                 *(ObjectPrefab **)(lVar13 + 0x230),worldObjects,(MethodInfo *)0x0);
      MVGamePoint::MVGamePoint_Create((MVGamePoint *)pMVar12,(MethodInfo *)0x0);
      pDVar30 = (pMVar12->fields)._._._._.data;
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x100000000;
      MVGamePoint::MVGamePoint_UpdateCanRespawn((MVGamePoint *)pMVar12,pDVar30,(MethodInfo *)0x0);
      break;
    case 0x83:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGamePassProgressionDataObject);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVWorldObjectClient);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      goto code_?;
    case 0x85:
      auStackX_8[0] = 9;
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (worldObjectData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar9 != (MVNetworkGame *)0x0) &&
          (pMVar11 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar9,(MethodInfo *)0x0),
          pMVar11 != (MVLocalPlayer *)0x0)) && (pOVar1 != (Object *)0x0)) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1,lRam_?);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        if (*(int *)&pOVar1[1].klass == (pMVar11->fields)._._ActorNr_k__BackingField) {
          pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVBuildModeAvatarLocal);
          if (cRam_? == '\0') {
            FUN_?(&
                          AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar13 = FUN_?();
          if (lVar13 != 0) {
            MVBuildModeAvatar::MVBuildModeAvatar__ctor
                      ((MVBuildModeAvatar *)pMVar12,worldObjectData,*(GameObject **)(lVar13 + 0x48),
                       worldObjects,(MethodInfo *)0x0);
            pGVar31 = (pMVar12->fields)._._._.gameObject;
            if (pGVar31 != (GameObject *)0x0) {
              pMVar28 = (MVRuntimeDataVariable *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar31,
                                   AvatarLocalBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarLocalBuildMode>__
                                  );
              (pMVar12->fields)._.CurrentItem = pMVar28;
              func_?(&(pMVar12->fields)._.CurrentItem);
              return (MVWorldObjectClient *)pMVar12;
            }
          }
        }
        else {
          pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVBuildModeAvatarRemote);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__DynamicCullingHandler);
            LOCK();
            UNLOCK();
            FUN_?(&
                          AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar28 = (MVRuntimeDataVariable *)FUN_?(TypeInfo__DynamicCullingHandler);
          *(undefined4 *)&(pMVar28->fields).value = 0x40600000;
          (pMVar12->fields)._.IsFiring = pMVar28;
          func_?(&(pMVar12->fields)._.IsFiring);
          lVar13 = FUN_?();
          if (lVar13 != 0) {
            MVBuildModeAvatar::MVBuildModeAvatar__ctor
                      ((MVBuildModeAvatar *)pMVar12,worldObjectData,*(GameObject **)(lVar13 + 0x50),
                       worldObjects,(MethodInfo *)0x0);
            pGVar31 = (pMVar12->fields)._._._.gameObject;
            if (pGVar31 != (GameObject *)0x0) {
              pMVar28 = (MVRuntimeDataVariable *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar31,
                                   AvatarRemoteBuildMode_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarRemoteBuildMode>__
                                  );
              (pMVar12->fields)._.CurrentItem = pMVar28;
              func_?(&(pMVar12->fields)._.CurrentItem);
              MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
                        ((MVWorldObjectClient *)pMVar12,0,(MethodInfo *)0x0);
              return (MVWorldObjectClient *)pMVar12;
            }
          }
        }
      }
      goto code_?;
    case 0x86:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVAvatarSpawnRoleCreator);
      MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
                ((MVAvatarSpawnRoleCreator *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      break;
    case 0x87:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGameOptionDataObject);
      MVGameOptionDataObject::MVGameOptionDataObject__ctor
                ((MVGameOptionDataObject *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x88:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparency
                             );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject)
        ;
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar13 = FUN_?();
      if (lVar13 != 0) {
        MVLogicObject::MVLogicObject__ctor
                  ((MVLogicObject *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x260),
                   worldObjects,(MethodInfo *)0x0);
        piVar15 = &(pMVar12->fields)._._._.interactionFlags;
        *piVar15 = *piVar15 | 0x18000;
        pOVar23 = (pMVar12->fields)._._._.component;
        *(undefined4 *)((longlong)&(pMVar12->fields)._.Animation + 4) = 0x3f666666;
        *(undefined1 *)&(pMVar12->fields)._.Animation = 1;
        if (pOVar23 != (ObjectPrefab *)0x0) {
          bVar25 = (TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject->_1)
                  .naturalAligment;
          if (((pOVar23->klass->_1).naturalAligment < bVar25) ||
             ((pOVar23->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
              (Il2CppClass *)
              TypeInfo__WorldObjectTypes__MVObjectTransparency__MVObjectTransparencyObject)) {
            FUN_?(pOVar23);
            pcVar2 = (code *)swi(3);
            pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
            return pMVar3;
          }
          (pMVar12->fields)._.IsFiring = (MVRuntimeDataVariable *)pOVar23[1].klass;
          func_?(&(pMVar12->fields)._.IsFiring);
          pMVar28 = (pMVar12->fields)._.IsFiring;
          if (pMVar28 != (MVRuntimeDataVariable *)0x0) {
            (pMVar28->fields).sendValue = (Object *)pMVar12;
            func_?(&(pMVar28->fields).sendValue);
            return (MVWorldObjectClient *)pMVar12;
          }
        }
      }
      goto code_?;
    case 0x91:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVCameraSettings);
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      pOVar23 = *(ObjectPrefab **)(lVar13 + 0xc0);
      goto code_?;
    case 0x92:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGravityCube);
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x118),
                 worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x8000;
      break;
    case 0x94:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGameCoin);
      MVGameCoin::MVGameCoin__ctor
                ((MVGameCoin *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x95:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGameCoinChest);
      MVGameCoinChest::MVGameCoinChest__ctor
                ((MVGameCoinChest *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x96:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__ThemeWorldObject);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVWorldObjectClient);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
code_?:
      if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVWorldObjectClient::MVWorldObjectClient__ctor_2
                ((MVWorldObjectClient *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x97:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoor);
      WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
                ((MVDoor *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0x98:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)
      ;
      MVBlueprintBase::MVBlueprintBase__ctor
                ((MVBlueprintBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x21070b100;
      break;
    case 0x99:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(
                             TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBase
                             );
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_itemData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = 0;
      Assets::Scripts::WorldObjectTypes::EditablePickupItem::MVEditablePickupItemBase::
      MVEditablePickupItemBase__ctor
                ((MVEditablePickupItemBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      auStackX_8[0] = 7;
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (worldObjectData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar25) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this_00);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        return (MVWorldObjectClient *)pMVar12;
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pDVar30 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
      goto code_?;
    case 0x9a:
      pMVar35 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MVMeleeWeaponBaseBlueprint
      ;
      goto code_?;
    case 0x9b:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBase);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_itemData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = 0;
      Assets::Scripts::WorldObjectTypes::EditablePickupItem::MVEditablePickupItemBase::
      MVEditablePickupItemBase__ctor
                ((MVEditablePickupItemBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      auStackX_8[0] = 7;
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (worldObjectData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar25) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this_00);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        return (MVWorldObjectClient *)pMVar12;
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pDVar30 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                          ((MethodInfo *)0x0);
      goto code_?;
    case 0x9c:
      pMVar35 = (MVMeleeWeaponBaseBlueprint__Class *)
                TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__MVCostumeBaseBlueprint;
code_?:
      pMVar12 = (MVAvatarRemote *)FUN_?(pMVar35);
      (pMVar12->fields)._.Animation = (MVRuntimeDataVariable *)0xffffffffffffffff;
      MVBlueprintBase::MVBlueprintBase__ctor
                ((MVBlueprintBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x21030b100;
      break;
    case 0x9d:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(
                             TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBase
                             );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_itemData);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar7 = 0;
      Assets::Scripts::WorldObjectTypes::EditablePickupItem::MVEditablePickupItemBase::
      MVEditablePickupItemBase__ctor
                ((MVEditablePickupItemBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0)
      ;
      auStackX_8[0] = 7;
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (worldObjectData,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar25) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this_00);
        pcVar2 = (code *)swi(3);
        pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
        return pMVar3;
      }
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        return (MVWorldObjectClient *)pMVar12;
      }
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pDVar30 = Assets::Scripts::WorldObjectTypes::CustomGun::CustomGunData::
                CustomGunData_DefaultItemData((MethodInfo *)0x0);
code_?:
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)StringLiteral_itemData,(Object *)pDVar30,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      break;
    case 0x9e:
      pMVar12 = (MVAvatarRemote *)
                FUN_?(
                             TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint
                             );
      (pMVar12->fields)._.Animation = (MVRuntimeDataVariable *)0xffffffffffffffff;
      MVBlueprintBase::MVBlueprintBase__ctor
                ((MVBlueprintBase *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x1021030b100;
      break;
    case 0xa1:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__TeamEditor);
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      pOVar23 = *(ObjectPrefab **)(lVar13 + 0x240);
code_?:
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,pOVar23,worldObjects,(MethodInfo *)0x0);
      (pMVar12->fields)._._._.interactionFlags =
           (pMVar12->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x8000;
      break;
    case 0xa2:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__TriggerCube);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TriggerCubePrefab);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (pMVar12->fields)._.CurrentItem = (MVRuntimeDataVariable *)(ulonglong)_UNK_?;
      *(undefined4 *)&(pMVar12->fields)._.IsFiring = 0;
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x238),
                 worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x2018000;
      pMVar28 = (MVRuntimeDataVariable *)(pMVar12->fields)._._._.component;
      if (pMVar28 == (MVRuntimeDataVariable *)0x0) {
        (pMVar12->fields)._.Animation = (MVRuntimeDataVariable *)0x0;
        func_?(&(pMVar12->fields)._.Animation);
      }
      else {
        bVar25 = (TypeInfo__TriggerCubePrefab->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.Animation = pMVar28;
        bVar25 = (TypeInfo__TriggerCubePrefab->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__TriggerCubePrefab)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        func_?(&(pMVar12->fields)._.Animation);
      }
      break;
    case 0xa4:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__CollectTheItemCollectableInstance);
      CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
                ((CollectTheItemCollectableInstance *)pMVar12,worldObjectData,worldObjects,
                 (MethodInfo *)0x0);
      break;
    case 0xa5:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__ShootableButton);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ShootableButtonObject);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVLogicObject::MVLogicObject__ctor
                ((MVLogicObject *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x1e0),
                 worldObjects,(MethodInfo *)0x0);
      piVar15 = &(pMVar12->fields)._._._.interactionFlags;
      *piVar15 = *piVar15 | 0x18000;
      pMVar28 = (MVRuntimeDataVariable *)(pMVar12->fields)._._._.component;
      (pMVar12->fields)._._._._PlayInteractionType_k__BackingField = 1;
      if (pMVar28 == (MVRuntimeDataVariable *)0x0) {
        (pMVar12->fields)._.IsFiring = (MVRuntimeDataVariable *)0x0;
        func_?(&(pMVar12->fields)._.IsFiring);
      }
      else {
        bVar25 = (TypeInfo__ShootableButtonObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.IsFiring = pMVar28;
        bVar25 = (TypeInfo__ShootableButtonObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__ShootableButtonObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        func_?(&(pMVar12->fields)._.IsFiring);
      }
      break;
    case 0xa6:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__UseLever);
      UseLever::UseLever__ctor((UseLever *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xa7:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__CollectTheItemDropOff);
      CollectTheItemDropOff::CollectTheItemDropOff__ctor
                ((CollectTheItemDropOff *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xa8:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__CollectTheItemCollectable);
      CollectTheItemCollectable::CollectTheItemCollectable__ctor
                ((CollectTheItemCollectable *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0
                );
      break;
    case 0xa9:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__CollectTheItem);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CollectTheItemLineObject);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar13 = FUN_?();
      if (lVar13 == 0) goto code_?;
      MVBlueprintBase::MVBlueprintBase__ctor_1
                ((MVBlueprintBase *)pMVar12,worldObjectData,*(ObjectPrefab **)(lVar13 + 0x98),
                 worldObjects,(MethodInfo *)0x0);
      pMVar28 = (MVRuntimeDataVariable *)(pMVar12->fields)._._._.component;
      if (pMVar28 == (MVRuntimeDataVariable *)0x0) {
        (pMVar12->fields)._.CurrentItem = (MVRuntimeDataVariable *)0x0;
      }
      else {
        bVar25 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
        (pMVar12->fields)._.CurrentItem = pMVar28;
        bVar25 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
        if (((((ObjectPrefab__Class *)pMVar28->klass)->_1).naturalAligment < bVar25) ||
           ((((ObjectPrefab__Class *)pMVar28->klass)->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
          FUN_?(pMVar28);
          pcVar2 = (code *)swi(3);
          pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
          return pMVar3;
        }
      }
      func_?(&(pMVar12->fields)._.CurrentItem);
      (pMVar12->fields)._._._.interactionFlags =
           (pMVar12->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x40;
      break;
    case 0xaa:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__WindTurbine);
      WindTurbine::WindTurbine__ctor
                ((WindTurbine *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xab:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGlobalSoundEmitter);
      MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
                ((MVGlobalSoundEmitter *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xb4:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__TimeAttackFlag);
      TimeAttackFlag::TimeAttackFlag__ctor
                ((TimeAttackFlag *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
      break;
    case 0xb5:
      pMVar12 = (MVAvatarRemote *)FUN_?(TypeInfo__MVGamePointChest);
      MVGamePointChest::MVGamePointChest__ctor
                ((MVGamePointChest *)pMVar12,worldObjectData,worldObjects,(MethodInfo *)0x0);
    }
  }
  return (MVWorldObjectClient *)pMVar12;
}


/* KoGaMaPackageClient(BytePacker, Boolean) */

void Assembly-CSharp.dll::KoGaMaPackageClient::KoGaMaPackageClient__ctor
               (KoGaMaPackageClient *this,BytePacker *koGaMaData,bool readRuntimeValues,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).worldObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).links = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).links >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).objectLinks = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectLinks >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (UnityAction_2_System_Object_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]::
  UnityAction_2_System_Object_System_ByteEnum___ctor
            (this_00,(Object *)this,
             MethodInfo__KoGaMaPackageClient__HandleDeserializedData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                    (koGaMaData,
                     (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                      *)this_00,readRuntimeValues,(MethodInfo *)0x0);
  (this->fields).worldObjectRoot = iVar7;
  return;
}

