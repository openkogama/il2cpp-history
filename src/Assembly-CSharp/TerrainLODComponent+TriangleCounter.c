
/* Void Add(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Add
               (TerrainLODComponent_TriangleCounter *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Add
              (this_00,localPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 GetEnabledTriangleCount(RuntimePrototypeCubeModel) */

int32_t Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
        TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                  (TerrainLODComponent_TriangleCounter *this,
                  RuntimePrototypeCubeModel *prototypeCubeModel,MethodInfo *method)

{
  pGStack_1 = (GUICellCursor_Fader *)0xffffffff;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  pMStack_4 = (Material *)&stack0xffffff78;
  pMVar5 = (Material *)&stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pMVar5 = pMStack_4;
  }
  pMStack_4 = pMVar5;
  uStack_6 = 0;
  fStack_7 = 0.0;
  auStack_8._16_4_ = (Il2CppClass *)0x0;
  auStack_8._20_4_ = (HashSet_1_MV_WorldObject_IntVector_ *)0x0;
  ppIStack_9 = (Il2CppType **)0x0;
  _Stack_4c.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_48.genericMethod = (Il2CppGenericMethod *)0x0;
  auStack_8._0_4_ = (List_1_UnityEngine_Vector2_ *)0x0;
  auStack_8._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_8._8_4_ = (InvokerMethod)0x0;
  auStack_8._12_4_ = (char *)0x0;
  func_?();
  fVar10 = 0.0;
  uStack_11._0_2_ = -1;
  uStack_11._2_2_ = 0xffff;
  fStack_12 = 0.0;
  piStack_13 = (int *)&stack0xffffff78;
  pMStack_4 = (Material *)&stack0xffffff78;
  pLVar14 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>)
  ;
  pLStack_15 = pLVar14;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar14,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  pHVar16 = (this->fields).enabledChunks;
  pLStack_17 = pLVar14;
  if (pHVar16 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
code_?:
    func_?();
    fVar18 = fVar10;
  }
  else {
    pHVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
             HashSet_1_MV_WorldObject_IntVector__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffff84,pHVar16,
                        MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__GetEnumerator__
                       );
    auStack_8._20_4_ = pHVar19->hashset;
    ppIStack_9 = (Il2CppType **)pHVar19->next;
    _Stack_4c = (_union_154)pHVar19->stamp;
    _Stack_48 = *(_union_155 *)&pHVar19->current;
    uStack_6 = *(uint32_t *)&(pHVar19->current).z;
    pGStack_1 = (GUICellCursor_Fader *)0x0;
    while (cVar20 = func_?(), pLVar14 = pLStack_15, cVar20 != '\0') {
      IVar21 = GUICellCursor::GUICellCursor_get_LocalPos
                         ((GUICellCursor *)&stack0xffffffc0,(MethodInfo *)(auStack_8 + 0x14));
      uVar22 = *IVar21._0_4_;
      iStack_23 = *(int16_t *)(IVar21._0_4_ + 1);
      if ((prototypeCubeModel == (RuntimePrototypeCubeModel *)0x0) ||
         (pDVar24 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                   GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)prototypeCubeModel,(MethodInfo *)0x0),
         pDVar24 == (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0))
      goto code_?;
      IVar21.z = iStack_23;
      IVar21.x = (short)uVar22;
      IVar21.y = (short)((uint)uVar22 >> 0x10);
      bVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                        (pDVar24,IVar21,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__ContainsKey_MV__WorldObject__IntVector_
                        );
      if (bVar25 == 0) {
        if (pLStack_15 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        item.z = iStack_23;
        item.x = (short)uVar22;
        item.y = (short)((uint)uVar22 >> 0x10);
        mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
        List_1_MV_WorldObject_IntVector__Add
                  ((List_1_MV_WorldObject_IntVector_ *)pLStack_15,item,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                  );
      }
      else {
        pDVar24 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                 GamePointGainEffect::GamePointGainEffect_get_ID
                           ((GamePointGainEffect *)prototypeCubeModel,(MethodInfo *)0x0);
        if ((pDVar24 == (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0) ||
           (key.z = iStack_23, key.x = (short)uVar22, key.y = (short)((uint)uVar22 >> 0x10),
           this_00 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                     IntVector,System::Object]::
                     Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                               (pDVar24,key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__get_Item_MV__WorldObject__IntVector_
                               ), this_00 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0))
        goto code_?;
        pOVar26 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                  TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                            (this_00,(MethodInfo *)0x0);
        fVar10 = (float)((int)&pOVar26->klass + (int)fVar10);
        fStack_12 = fVar10;
      }
    }
    fVar10 = 0.0;
    *piStack_13 = 0x71;
    pGStack_1 = (GUICellCursor_Fader *)0xffffffff;
    func_?(auStack_8 + 0x14,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    fVar18 = fVar10;
    if (fStack_7 == 0.0) {
      if (*piStack_13 == 0x71) {
        fVar10 = -NAN;
      }
      if (pLVar14 != (List_1_UnityEngine_Vector4_ *)0x0) {
        pLVar27 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Vector2_ *)&stack0xffffff84,
                             (List_1_UnityEngine_Vector2_ *)pLVar14,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                            );
        auStack_8._0_4_ = pLVar27->l;
        auStack_8._4_4_ = pLVar27->next;
        auStack_8._8_4_ = pLVar27->ver;
        auStack_8._12_4_ = (pLVar27->current).x;
        auStack_8._16_4_ = (pLVar27->current).y;
        pGStack_1 = (GUICellCursor_Fader *)0x2;
        while (cVar20 = func_?(), fVar18 = fStack_7, cVar20 != '\0') {
          IVar21 = GUICellCursor::GUICellCursor_get_LocalPos
                             ((GUICellCursor *)&stack0xffffffc0,(MethodInfo *)auStack_8);
          pHVar16 = (this->fields).enabledChunks;
          if (pHVar16 == (HashSet_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
          HashSet_1_MV_WorldObject_IntVector__Remove
                    (pHVar16,*IVar21._0_4_,
                     MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
                    );
        }
        piStack_13[(int)fVar10 + 1] = 0xb4;
        pGStack_1 = (GUICellCursor_Fader *)0xffffffff;
        func_?(auStack_8);
        if (fVar18 == 0.0) {
          *unaff_FS_OFFSET = fStack_3;
          return (int32_t)fStack_12;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?(fVar18,0);
  pcVar28 = (code *)swi(3);
  iVar29 = (*pcVar28)();
  return iVar29;
}


/* Void Remove(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter_Remove
               (TerrainLODComponent_TriangleCounter *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).enabledChunks;
  if (this_00 != (HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::IntVector]::
    HashSet_1_MV_WorldObject_IntVector__Remove
              (this_00,localPos,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__Remove_MV__WorldObject__IntVector_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* TerrainLODComponent+TriangleCounter() */

void Assembly-CSharp.dll::TerrainLODComponent+TriangleCounter::
     TerrainLODComponent_TriangleCounter__ctor
               (TerrainLODComponent_TriangleCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  (this->fields).enabledChunks = (HashSet_1_MV_WorldObject_IntVector_ *)this_00;
  return;
}

