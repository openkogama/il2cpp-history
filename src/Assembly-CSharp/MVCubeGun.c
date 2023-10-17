
/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_OnDataUpdate(MVCubeGun *this,MethodInfo *method)

{
  MVPickupItemBase::MVPickupItemBase_OnDataUpdate((MVPickupItemBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  x = *(Object_1 **)(in_stack_1 + 0x118);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    if (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_1 + 0x58) ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    this_02 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (*(Dictionary_2_System_Object_System_Object_ **)(in_stack_1 + 0x58),
                         (Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    if (((this_02->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_02->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_01 = *(CubeBullet **)(in_stack_1 + 0x118);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_02,(Object *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 == (CubeBullet *)0x0) || (pOVar3 == (Object *)0x0)) goto code_?;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar4 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial(this_01,*puVar4,(MethodInfo *)0x0);
      if (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)(in_stack_1 + 0x88) !=
          (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
        pIVar5 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)
                             (in_stack_1 + 0x88),
                            GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                           );
        if (pIVar5 != (IEnumerable_1_System_Object_ *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                           );
            func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            cRam_? = '\x01';
          }
          pLVar6 = pLRam00000014;
          if (pLRam00000014 != (List_1_System_Object_ *)0x0) {
            length = (pLRam00000014->fields)._size;
            piVar7 = &(pLRam00000014->fields)._version;
            *piVar7 = *piVar7 + 1;
            (pLVar6->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar6->fields)._items,0,length,(MethodInfo *)0x0);
            }
            if (pIRam0000000c != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
              pMVar8 = (MethodInfo *)
                       Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                 (pIRam0000000c,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar9 = (char *)0x0;
              if (pMVar8 != (MethodInfo *)0x0) {
                method_00 = (MethodInfo *)&pMVar8->klass;
                while( true ) {
                  if ((int)pMVar8->name <= (int)pcVar9) {
                    return;
                  }
                  if (pMVar8->name <= pcVar9) break;
                  this_00 = (Object__Class *)method_00->methodPointer;
                  pOVar3 = (Object *)func_?();
                  if (pOVar3 == (Object *)0x0) goto code_?;
                  *(undefined1 *)&pOVar3[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar3,ExceptionArgument__Enum_obj,method_00);
                  pOVar3[1].klass = this_00;
                  func_?(pOVar3 + 1);
                  if (this_00 == (Object__Class *)0x0) goto code_?;
                  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  pOVar3[1].monitor = (MonitorData *)pMVar10;
                  func_?(&pOVar3[1].monitor);
                  if (pLRam00000014 == (List_1_System_Object_ *)0x0) goto code_?;
                  pMVar8 = 
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            (pLRam00000014,pOVar3,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar9 = pcVar9 + 1;
                  method_00 = (MethodInfo *)&method_00->virtualMethodPointer;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)(in_stack_1 + 0x88) !=
        (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
      pIVar5 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         (*(IEnumerable_1_Newtonsoft_Json_Linq_JToken_ **)(in_stack_1 + 0x88)
                          ,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      *(IEnumerable_1_System_Object_ **)(in_stack_1 + 0x118) = pIVar5;
      func_?();
      goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCubeMaterial() */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun_SetCubeMaterial(MVCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                   );
    func_?(&
                    GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_material);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).cubeBullet;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    pDVar2 = (this->fields)._._._._.data;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    this_01 = pDVar2;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((pDVar2->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).cubeBullet;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar2,(Object *)StringLiteral_material,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar6 = CONCAT44(TypeInfo__System__Byte,pOVar5);
    if ((this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) || (pOVar5 == (Object *)0x0))
    goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar7 = (uint8_t *)func_?();
      CubeBullet::CubeBullet_SetCubeMaterial((CubeBullet *)this_01,*puVar7,(MethodInfo *)0x0);
      this_01 = pDVar3;
      pGVar8 = (this->fields)._._._.gameObject;
      if (pGVar8 != (GameObject *)0x0) {
        pIVar9 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                            ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar8,
                             GreyOutObjectScript_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<GreyOutObjectScript>__
                            );
        if (pIVar9 != (IEnumerable_1_System_Object_ *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                           );
            func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
            cRam_? = '\x01';
          }
          pLVar10 = pLRam00000014;
          if (pLRam00000014 != (List_1_System_Object_ *)0x0) {
            length = (pLRam00000014->fields)._size;
            piVar11 = &(pLRam00000014->fields)._version;
            *piVar11 = *piVar11 + 1;
            (pLVar10->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar10->fields)._items,0,length,(MethodInfo *)0x0);
            }
            if (pIRam0000000c != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
              pMVar12 = (MethodInfo *)
                       Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                 (pIRam0000000c,
                                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                 );
              pcVar13 = (char *)0x0;
              if (pMVar12 != (MethodInfo *)0x0) {
                method_00 = (MethodInfo *)&pMVar12->klass;
                while( true ) {
                  if ((int)pMVar12->name <= (int)pcVar13) {
                    return;
                  }
                  if (pMVar12->name <= pcVar13) break;
                  this_00 = (Il2CppClass *)method_00->methodPointer;
                  pOVar5 = (Object *)func_?();
                  if (pOVar5 == (Object *)0x0) goto code_?;
                  *(undefined1 *)&pOVar5[2].klass = 1;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar5,ExceptionArgument__Enum_obj,method_00);
                  pOVar5[1].klass = (Object__Class *)this_00;
                  func_?(pOVar5 + 1,this_00);
                  if (this_00 == (Il2CppClass *)0x0) goto code_?;
                  pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                           Renderer_get_sharedMaterials((Renderer *)this_00,(MethodInfo *)0x0);
                  pOVar5[1].monitor = (MonitorData *)pMVar14;
                  func_?(&pOVar5[1].monitor,pMVar14);
                  if (pLRam00000014 == (List_1_System_Object_ *)0x0) goto code_?;
                  pMVar12 = 
                  MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                  ;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            (pLRam00000014,pOVar5,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                            );
                  pcVar13 = pcVar13 + 1;
                  method_00 = (MethodInfo *)&method_00->virtualMethodPointer;
                }
                func_?();
              }
            }
          }
code_?:
          func_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    pGVar8 = (this->fields)._._._.gameObject;
    if (pGVar8 != (GameObject *)0x0) {
      pCVar16 = (CubeBullet *)
               Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar8,
                          CubeBullet_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<CubeBullet>__
                         );
      (this->fields).cubeBullet = pCVar16;
      func_?(&(this->fields).cubeBullet,pCVar16);
      goto code_?;
    }
code_?:
    uVar6 = func_?();
  }
  func_?(uVar6);
  pDVar4 = extraout_EDX;
code_?:
  func_?(this_01,pDVar4);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* MVCubeGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCubeGun::MVCubeGun__ctor
               (MVCubeGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPickupItemBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPickupItemBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPickupItemBase);
  }
  MVPickupItemBase::MVPickupItemBase__ctor
            ((MVPickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  MVCubeGun_SetCubeMaterial(this,(MethodInfo *)0x0);
  return;
}

