
/* Void SortByHitDistance(List`1[RTG.GameObjectRayHit]) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit_SortByHitDistance
               (List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
                   );
    func_?(&
                    MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
                   );
    func_?(&TypeInfo__RTG__GameObjectRayHit____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectRayHit____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectRayHit____c);
  }
  this = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0;
  if (this == (Comparison_1_RTG_GameObjectRayHit_ *)0x0) {
    if ((TypeInfo__RTG__GameObjectRayHit____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectRayHit____c);
    }
    object = TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9;
    this = (Comparison_1_RTG_GameObjectRayHit_ *)
           func_?(TypeInfo__System__Comparison<RTG::GameObjectRayHit>);
    mscorlib.dll::System::Comparison`1[Object]::Comparison_1_Object___ctor
              ((Comparison_1_Object_ *)this,(Object *)object,
               MethodInfo__RTG__GameObjectRayHit____c___SortByHitDistance_b__18_0_RTG__GameObjectRayHit__RTG__GameObjectRayHit_
               ,(MethodInfo *)0x0);
    TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0 = this;
    func_?(&TypeInfo__RTG__GameObjectRayHit____c->static_fields->__9__18_0,this);
  }
  if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
              ((List_1_System_Object_ *)hits,(Comparison_1_Object_ *)this,
               MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Sort_System__Comparison<RTG::GameObjectRayHit>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Store(Ray, IEnumerable`1[UnityEngine.RaycastHit2D], IEnumerable`1[UnityEngine.RaycastHit],
   List`1[RTG.GameObjectRayHit]) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit_Store
               (Ray hitRay,IEnumerable_1_UnityEngine_RaycastHit2D_ *hits2D,
               IEnumerable_1_UnityEngine_RaycastHit_ *hits3D,List_1_RTG_GameObjectRayHit_ *hits,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffef8;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffef8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectRayHit);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit2D>)
    ;
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>)
    ;
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Clear__)
    ;
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  piStack_8 = (int *)0x0;
  piStack_9 = (int *)0x0;
  if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
    length = (hits->fields)._size;
    piVar10 = &(hits->fields)._version;
    *piVar10 = *piVar10 + 1;
    (hits->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(hits->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (hits2D == (IEnumerable_1_UnityEngine_RaycastHit2D_ *)0x0) {
code_?:
      if (hits3D == (IEnumerable_1_UnityEngine_RaycastHit_ *)0x0) {
code_?:
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      piStack_9 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit>
                                          ,hits3D);
      ppiStack_11 = &piStack_9;
      uStack_12 = 0;
      uStack_2 = 4;
      while (piStack_13 = piStack_9, piStack_9 != (int *)0x0) {
        piStack_14 = (int *)*piStack_9;
        uVar15 = 0;
        pOStack_16 = (Object__Class *)0x0;
        uVar17 = *(ushort *)((int)piStack_14 + 0xb6);
        uStack_18 = (uint)uVar17;
        if (uVar17 != 0) {
          do {
            if (*(IEnumerator__Class **)(piStack_14[0x16] + (uint)uVar15 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              piVar19 = piStack_14 + (*(int *)(piStack_14[0x16] + 4 + (uint)uVar15 * 8) + 0x18) * 2;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar17);
        }
        piVar19 = (int *)func_?(piStack_9,TypeInfo__System__Collections__IEnumerator,0);
code_?:
        cVar20 = (*(code *)*piVar19)(piStack_13,piVar19[1]);
        if (cVar20 == '\0') {
          uStack_2 = 0xffffffff;
          if (piStack_9 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piStack_9);
          }
          goto code_?;
        }
        piStack_13 = piStack_9;
        if (piStack_9 == (int *)0x0) break;
        piStack_14 = (int *)*piStack_9;
        uVar15 = 0;
        pOStack_16 = (Object__Class *)0x0;
        uVar17 = *(ushort *)((int)piStack_14 + 0xb6);
        uStack_18 = (uint)uVar17;
        if (uVar17 != 0) {
          do {
            if (*(IEnumerator_1_UnityEngine_RaycastHit___Class **)
                 (piStack_14[0x16] + (uint)uVar15 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>) {
              piVar19 = piStack_14 + (*(int *)(piStack_14[0x16] + 4 + (uint)uVar15 * 8) + 0x18) * 2;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar17);
        }
        piVar19 = (int *)func_?(piStack_9,
                                        TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit>
                                        ,0);
code_?:
        pMVar21 = (MethodInfo *)&UNK_?;
        pfVar22 = (float *)(*(code *)*piVar19)(auStack_23,piStack_13,piVar19[1]);
        pTStack_24 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)*pfVar22;
        pSStack_25 = (String *)pfVar22[1];
        pSStack_26 = (SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                      *)pfVar22[2];
        pSStack_27 = (SphereTreeNode_1_System_Object_ *)pfVar22[3];
        uStack_28 = *(undefined8 *)(pfVar22 + 4);
        pTStack_29 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)pfVar22[6];
        pSStack_30 = (String *)pfVar22[7];
        VStack_31 = *(Vector2 *)(pfVar22 + 8);
        pOStack_16 = (Object__Class *)pfVar22[10];
        pOVar32 = (Object *)func_?(TypeInfo__RTG__GameObjectRayHit);
        auStack_23._0_4_ = pTStack_24;
        auStack_23._4_4_ = pSStack_25;
        auStack_33._0_4_ = pSStack_26;
        auStack_33._4_4_ = pSStack_27;
        pOStack_34 = pOStack_16;
        auStack_33._8_4_ = (Tuple_3_Object_Memory_1_Byte_Object___Class *)uStack_28;
        auStack_33._12_4_ = uStack_28._4_4_;
        auStack_33._16_4_ = pTStack_29;
        auStack_33._20_4_ = pSStack_30;
        stack0xffffff70 = VStack_31;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar32,ExceptionArgument__Enum_obj,pMVar21);
        this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                            ((RaycastHit *)auStack_23,(MethodInfo *)0x0);
        if (this_00 == (Collider *)0x0) break;
        pOVar35 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        pOVar32[1].klass = pOVar35;
        func_?();
        pRVar36 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                            (&RStack_37,
                             (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)auStack_23,(MethodInfo *)0x0);
        pSVar38 = pRVar36->_pattern;
        *(undefined8 *)&pOVar32[1].monitor = *(undefined8 *)pRVar36;
        pOVar32[2].monitor = (MonitorData *)pSVar38;
        pOStack_16 = (Object__Class *)
                     SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                               ((SphereTreeNode_1_System_Object_ *)auStack_23,(MethodInfo *)0x0);
        pOVar32[3].klass = pOStack_16;
        pMVar39 = mscorlib.dll::System::Tuple`3[Object,Memory`1[Byte],Object]::
                  Tuple_3_Object_Memory_1_Byte_Object__get_Item2
                            (&MStack_40,(Tuple_3_Object_Memory_1_Byte_Object_ *)auStack_23,
                             (MethodInfo *)0x0);
        uStack_41 = *(undefined8 *)&pOVar32[1].monitor;
        uStack_28 = 0;
        pTStack_29 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)0x0;
        pSStack_30 = (String *)0x0;
        pMVar42 = (MonitorData *)pMVar39->_length;
        value_00 = *pMVar39;
        pTStack_43 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)pOVar32[2].monitor;
        *(undefined8 *)&pOVar32[3].monitor = *(undefined8 *)pMVar39;
        pOVar32[4].monitor = pMVar42;
        pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (aVStack_45,(Vector3)value_00,(MethodInfo *)0x0);
        uStack_46._0_4_ = pVVar44->x;
        uStack_46._4_4_ = pVVar44->y;
        pTStack_47 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)pVVar44->z;
        pSStack_30 = (String *)
                     ((uint)(uStack_41._4_4_ * uStack_46._4_4_ + (float)uStack_41 * (float)uStack_46
                            + (float)pTStack_43 * (float)pTStack_47) ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        pOVar32[5].klass = (Object__Class *)(float)uStack_46;
        pOVar32[5].monitor = (MonitorData *)uStack_46._4_4_;
        pOVar32[6].klass = (Object__Class *)pTStack_47;
        pOVar32[6].monitor = (MonitorData *)pSStack_30;
        uStack_28 = uStack_46;
        pTStack_29 = pTStack_47;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)hits,pOVar32,
                   MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                  );
      }
    }
    else {
      piStack_8 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::RaycastHit2D>
                                          ,hits2D);
      ppiStack_11 = &piStack_8;
      uStack_12 = 0;
      uStack_2 = 1;
      while (piStack_8 != (int *)0x0) {
        cVar20 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_8);
        if (cVar20 == '\0') {
          uStack_2 = 0xffffffff;
          if (piStack_8 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piStack_8);
          }
          uStack_2 = 0xffffffff;
          goto code_?;
        }
        piStack_14 = piStack_8;
        if (piStack_8 == (int *)0x0) break;
        piStack_13 = (int *)*piStack_8;
        uVar15 = 0;
        uStack_18 = 0;
        uVar17 = *(ushort *)((int)piStack_13 + 0xb6);
        pOStack_16 = (Object__Class *)(uint)uVar17;
        if (uVar17 != 0) {
          do {
            if (*(IEnumerator_1_UnityEngine_RaycastHit2D___Class **)
                 (piStack_13[0x16] + (uint)uVar15 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>) {
              piVar19 = piStack_13 + (*(int *)(piStack_13[0x16] + 4 + (uint)uVar15 * 8) + 0x18) * 2;
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar17);
        }
        piVar19 = (int *)func_?(piStack_8,
                                        TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::RaycastHit2D>
                                        ,0);
code_?:
        pMVar21 = (MethodInfo *)&UNK_?;
        puVar48 = (undefined8 *)(*(code *)*piVar19)(auStack_33,piStack_14,piVar19[1]);
        uStack_28 = *puVar48;
        pTStack_29 = *(Tuple_3_Object_Memory_1_Byte_Object___Class **)(puVar48 + 1);
        pSStack_30 = *(String **)((int)puVar48 + 0xc);
        pTStack_24 = *(Tuple_3_Object_Memory_1_Byte_Object___Class **)(puVar48 + 2);
        pSStack_25 = *(String **)((int)puVar48 + 0x14);
        pSStack_26 = *(SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class
                       **)(puVar48 + 3);
        pSStack_27 = *(SphereTreeNode_1_System_Object_ **)((int)puVar48 + 0x1c);
        pOStack_16 = *(Object__Class **)(puVar48 + 4);
        pOVar32 = (Object *)func_?(TypeInfo__RTG__GameObjectRayHit);
        auStack_33._0_4_ = (Tuple_3_Object_Memory_1_Byte_Object___Class *)uStack_28;
        auStack_33._4_4_ = uStack_28._4_4_;
        auStack_33._8_4_ = pTStack_29;
        auStack_33._12_4_ = pSStack_30;
        pOStack_34 = pOStack_16;
        auStack_33._16_4_ = pTStack_24;
        auStack_33._20_4_ = pSStack_25;
        pSStack_49 = pSStack_27;
        auStack_33._24_4_ = pSStack_26;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar32,ExceptionArgument__Enum_obj,pMVar21);
        this = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_collider
                         ((RaycastHit2D *)auStack_33,(MethodInfo *)0x0);
        if (this == (Collider2D *)0x0) break;
        pOVar35 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pOVar32[1].klass = pOVar35;
        func_?();
        VVar50 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_point
                           ((RaycastHit2D *)auStack_33,(MethodInfo *)0x0);
        VStack_51.y = VVar50.y;
        aVStack_45[0].z = 0.0;
        *(ulonglong *)&pOVar32[1].monitor = CONCAT44(VStack_51.y,VStack_51.x);
        pOVar32[2].monitor = (MonitorData *)0x0;
        VStack_51 = VVar50;
        pOStack_16 = (Object__Class *)
                     SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
                     ::
                     SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                               ((SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                 *)auStack_33,(MethodInfo *)0x0);
        pOVar32[3].klass = pOStack_16;
        VVar50 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_normal
                           ((RaycastHit2D *)auStack_33,(MethodInfo *)0x0);
        VStack_31.y = VVar50.y;
        MStack_40._length = 0;
        pTStack_47 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)pOVar32[2].monitor;
        uStack_46 = *(undefined8 *)&pOVar32[1].monitor;
        *(ulonglong *)&pOVar32[3].monitor = CONCAT44(VStack_31.y,VStack_31.x);
        pOVar32[4].monitor = (MonitorData *)0x0;
        uStack_28 = 0;
        pTStack_29 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)0x0;
        pSStack_30 = (String *)0x0;
        value.y = VStack_31.y;
        value.x = VStack_31.x;
        value.z = 0.0;
        VStack_31 = VVar50;
        pVVar44 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&RStack_37,value,(MethodInfo *)0x0);
        uStack_41._0_4_ = pVVar44->x;
        uStack_41._4_4_ = pVVar44->y;
        pTStack_43 = (Tuple_3_Object_Memory_1_Byte_Object___Class *)pVVar44->z;
        pSStack_30 = (String *)
                     ((uint)(uStack_46._4_4_ * uStack_41._4_4_ + (float)uStack_46 * (float)uStack_41
                            + (float)pTStack_47 * (float)pTStack_43) ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        pOVar32[5].klass = (Object__Class *)(float)uStack_41;
        pOVar32[5].monitor = (MonitorData *)uStack_41._4_4_;
        pOVar32[6].klass = (Object__Class *)pTStack_43;
        pOVar32[6].monitor = (MonitorData *)pSStack_30;
        uStack_28 = uStack_41;
        pTStack_29 = pTStack_43;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)hits,pOVar32,
                   MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__Add_RTG__GameObjectRayHit_
                  );
      }
    }
  }
  uVar52 = func_?();
  func_?(uVar52);
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
  return;
}


/* GameObjectRayHit(Ray, RaycastHit) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor
               (GameObjectRayHit *this,Ray hitRay,RaycastHit hit3D,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                      (&hit3D,(MethodInfo *)0x0);
  if (this_00 != (Collider *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    (this->fields)._hitObject = pGVar1;
    func_?();
    pRVar2 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                        ((Regex_CachedCodeEntryKey *)&puStack_3,
                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&hit3D,(MethodInfo *)0x0);
    pSVar4 = pRVar2->_cultureKey;
    pSVar5 = pRVar2->_pattern;
    (this->fields)._hitPoint.x = (float)pRVar2->_options;
    (this->fields)._hitPoint.y = (float)pSVar4;
    (this->fields)._hitPoint.z = (float)pSVar5;
    fVar6 = SphereTreeNode`1[System::Object]::SphereTreeNode_1_System_Object__get_Radius
                      ((SphereTreeNode_1_System_Object_ *)&hit3D,(MethodInfo *)0x0);
    (this->fields)._hitEnter = fVar6;
    pMVar7 = mscorlib.dll::System::Tuple`3[Object,Memory`1[Byte],Object]::
              Tuple_3_Object_Memory_1_Byte_Object__get_Item2
                        ((Memory_1_Byte_ *)&puStack_3,
                         (Tuple_3_Object_Memory_1_Byte_Object_ *)&hit3D,(MethodInfo *)0x0);
    fVar8 = (float)pMVar7->_length;
    uVar9 = pMVar7->_object;
    fVar6 = (float)pMVar7->_index;
    value = *pMVar7;
    method_00 = (MethodInfo *)(this->fields)._hitPoint.z;
    (this->fields)._hitNormal.x = (float)uVar9;
    (this->fields)._hitNormal.y = fVar6;
    (this->fields)._hitNormal.z = fVar8;
    _puStack_1c = CONCAT44(&VStack_10,&UNK_?);
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_10,(Vector3)value,method_00);
    uVar12 = pVVar11->x;
    uVar13 = pVVar11->y;
    fVar14 = pVVar11->z;
    fVar6 = (float)((uint)(fVar8 * (float)uVar13 + fVar6 * (float)uVar12 + (float)method_00 * fVar14)
                   ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._hitPlane.m_Normal.x = (float)uVar12;
    (this->fields)._hitPlane.m_Normal.y = (float)uVar13;
    (this->fields)._hitPlane.m_Normal.z = fVar14;
    (this->fields)._hitPlane.m_Distance = fVar6;
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* GameObjectRayHit(Ray, RaycastHit2D) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_1
               (GameObjectRayHit *this,Ray hitRay,RaycastHit2D hit2D,MethodInfo *method)

{
  fVar1 = fStack_2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  this_00 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_collider
                      (&hit2D,(MethodInfo *)0x0);
  if (this_00 != (Collider2D *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    (this->fields)._hitObject = pGVar3;
    func_?();
    VVar4 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_point
                      (&hit2D,(MethodInfo *)0x0);
    fStack_2 = VVar4.x;
    fStack_5 = VVar4.y;
    (this->fields)._hitPoint.x = fVar1;
    (this->fields)._hitPoint.y = fStack_5;
    (this->fields)._hitPoint.z = 0.0;
    fVar1 = SphereTreeNodeRayHit`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
            SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_HitEnter
                      ((SphereTreeNodeRayHit_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
                       )&hit2D,(MethodInfo *)0x0);
    (this->fields)._hitEnter = fVar1;
    VVar4 = UnityEngine.Physics2DModule.dll::UnityEngine::RaycastHit2D::RaycastHit2D_get_normal
                      (&hit2D,(MethodInfo *)0x0);
    fStack_5 = VVar4.y;
    fVar1 = (this->fields)._hitPoint.z;
    method_00 = (MethodInfo *)(this->fields)._hitPoint.x;
    uVar6 = (this->fields)._hitPoint.y;
    (this->fields)._hitNormal.x = fStack_2;
    (this->fields)._hitNormal.y = fStack_5;
    (this->fields)._hitNormal.z = 0.0;
    value.y = fStack_5;
    value.x = fStack_2;
    value.z = 0.0;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffd8,value,method_00);
    uVar8 = pVVar7->x;
    uVar9 = pVVar7->y;
    fVar10 = pVVar7->z;
    fVar1 = (float)((uint)((float)uVar6 * (float)uVar9 + (float)method_00 * (float)uVar8 +
                          fVar1 * fVar10) ^
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._hitPlane.m_Normal.x = (float)uVar8;
    (this->fields)._hitPlane.m_Normal.y = (float)uVar9;
    (this->fields)._hitPlane.m_Normal.z = fVar10;
    (this->fields)._hitPlane.m_Distance = fVar1;
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* GameObjectRayHit(Ray, GameObject, Vector3, Single) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_2
               (GameObjectRayHit *this,Ray hitRay,GameObject *hitObject,Vector3 hitNormal,
               float hitEnter,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._hitObject = hitObject;
  func_?(&this->fields,hitObject);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                     ((Vector3 *)&stack0xffffffe4,&hitRay,hitEnter,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._hitPoint.x = (float)uVar2;
  (this->fields)._hitPoint.y = (float)uVar3;
  (this->fields)._hitPoint.z = fVar4;
  (this->fields)._hitEnter = hitEnter;
  (this->fields)._hitNormal.x = (float)(int)hitNormal._0_8_;
  (this->fields)._hitNormal.y = (float)(int)((ulonglong)hitNormal._0_8_ >> 0x20);
  (this->fields)._hitNormal.z = hitNormal.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)0x0,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  fVar7 = pVVar1->z;
  fVar4 = (float)((uint)((float)uVar3 * (float)uVar6 + (float)uVar2 * (float)uVar5 + fVar4 * fVar7)
                 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  (this->fields)._hitPlane.m_Normal.x = (float)uVar5;
  (this->fields)._hitPlane.m_Normal.y = (float)uVar6;
  (this->fields)._hitPlane.m_Normal.z = fVar7;
  (this->fields)._hitPlane.m_Distance = fVar4;
  return;
}


/* GameObjectRayHit(Ray, GameObject, MeshRayHit) */

void Assembly-CSharp.dll::RTG::GameObjectRayHit::GameObjectRayHit__ctor_3
               (GameObjectRayHit *this,Ray ray,GameObject *hitObject,MeshRayHit *meshRayHit,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._hitObject = hitObject;
  func_?(&this->fields,hitObject);
  if (meshRayHit != (MeshRayHit *)0x0) {
    uStack_1._0_4_ = (meshRayHit->fields)._hitPoint.x;
    uStack_1._4_4_ = (meshRayHit->fields)._hitPoint.y;
    fStack_2 = (meshRayHit->fields)._hitPoint.z;
    (this->fields)._hitPoint.x = (float)uStack_1;
    (this->fields)._hitPoint.y = uStack_1._4_4_;
    (this->fields)._hitPoint.z = fStack_2;
    (this->fields)._hitEnter = (meshRayHit->fields)._hitEnter;
    pVVar3 = &(meshRayHit->fields)._hitNormal;
    fVar4 = pVVar3->y;
    fVar5 = (meshRayHit->fields)._hitNormal.z;
    value = *pVVar3;
    (this->fields)._hitNormal.x = pVVar3->x;
    (this->fields)._hitNormal.y = fVar4;
    (this->fields)._hitNormal.z = fVar5;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_6,value,(MethodInfo *)0x0);
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
    fStack_8 = pVVar3->z;
    (this->fields)._meshRayHit = meshRayHit;
    fVar5 = (float)((uint)(uStack_1._4_4_ * (float)uStack_7._4_4_ +
                           (float)uStack_1 * (float)(undefined4)uStack_7 + fStack_2 * fStack_8) ^
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    (this->fields)._hitPlane.m_Normal.x = (float)(undefined4)uStack_7;
    (this->fields)._hitPlane.m_Normal.y = (float)uStack_7._4_4_;
    (this->fields)._hitPlane.m_Normal.z = fStack_8;
    (this->fields)._hitPlane.m_Distance = fVar5;
    func_?(&(this->fields)._meshRayHit,meshRayHit);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

