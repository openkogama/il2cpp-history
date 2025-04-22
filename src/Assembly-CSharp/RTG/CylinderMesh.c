
/* Mesh CreateCylinder(Single, Single, Single, Int32, Int32, Int32, Int32, Color) */

Mesh * Assembly-CSharp.dll::RTG::CylinderMesh::CylinderMesh_CreateCylinder
                 (float bottomRadius,float topRadius,float height,int32_t numSlices,
                 int32_t numStacks,int32_t numBottomCapRings,int32_t numTopCapRings,Color color,
                 MethodInfo *method)

{
  iVar1 = numBottomCapRings;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__ToArray__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  iVar2 = 3;
  if (2 < numSlices) {
    iVar2 = numSlices;
  }
  iVar3 = 1;
  if (0 < numStacks) {
    iVar3 = numStacks;
  }
  iVar4 = iVar3 + 1;
  pIVar5 = (IEnumerable_1_System_Int32___Class *)(iVar2 + 1);
  iStack_6 = (int)pIVar5 * iVar4;
  pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__UnityEngine__Vector3,iStack_6);
  pIVar8 = (IEnumerable_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__UnityEngine__Vector3,iStack_6);
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,iStack_6,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,iStack_6,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iStack_9 = 0;
  if (0 < iVar4) {
    do {
      iVar10 = 0;
      if (0 < (int)pIVar5) {
        do {
          func_?();
          func_?();
          func_?();
          if ((pIVar8 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
             (func_?(), pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
          goto code_?;
          func_?();
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)pIVar5);
      }
      iStack_9 = iStack_9 + 1;
    } while (iStack_9 < iVar4);
  }
  if ((this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__AddRange
                ((List_1_UnityEngine_Vector3_ *)this,pIVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                ),
     this_00 !=
     (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
     0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
    List_1_UnityEngine_Vector3__AddRange
              ((List_1_UnityEngine_Vector3_ *)this_00,pIVar8,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
              );
    pMVar11 = (MonitorData *)0x0;
    this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_01,100,MethodInfo__System__Collections__Generic__List<int>__List_int_);
    pIVar12 = (IEnumerable_1_System_Int32_ *)func_?();
    iStack_9 = 0;
    if (0 < iVar3) {
      pIVar13 = pIVar5;
      do {
        if (0 < iVar2) {
          pIVar14 = (IEnumerable_1_System_Int32___Class *)((1 - (int)pIVar5) + (int)pIVar13);
          iStack_15 = 0;
          pIVar16 = pIVar13;
          if (pIVar12 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
          do {
            if (pIVar12[1].monitor <= pMVar11) goto code_?;
            (&pIVar12[2].klass)[(int)pMVar11] =
                 (IEnumerable_1_System_Int32___Class *)
                 ((int)&pIVar14[-1].vtable.GetEnumerator.method + 3);
            if (pIVar12[1].monitor <= pMVar11 + 1) goto code_?;
            (&pIVar12[2].klass)[(int)(pMVar11 + 1)] = pIVar16;
            if (pIVar12[1].monitor <= pMVar11 + 2) goto code_?;
            (&pIVar12[2].klass)[(int)(pMVar11 + 2)] = pIVar14;
            if (pIVar12[1].monitor <= pMVar11 + 3) goto code_?;
            (&pIVar12[2].klass)[(int)(pMVar11 + 3)] = pIVar16;
            if (pIVar12[1].monitor <= pMVar11 + 4) goto code_?;
            (&pIVar12[2].klass)[(int)(pMVar11 + 4)] =
                 (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
            pMVar17 = pMVar11 + 5;
            pMVar11 = pMVar11 + 6;
            if (pIVar12[1].monitor <= pMVar17) goto code_?;
            (&pIVar12[2].klass)[(int)pMVar17] = pIVar14;
            pIVar16 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
            pIVar14 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar14->_0).image + 1);
            iStack_15 = iStack_15 + 1;
          } while (iStack_15 < iVar2);
        }
        iStack_9 = iStack_9 + 1;
        pIVar13 = (IEnumerable_1_System_Int32___Class *)
                  ((int)&(pIVar13->_0).image + (int)&(pIVar5->_0).image);
      } while (iStack_9 < iVar3);
    }
    if (this_01 !=
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32__AddRange
                ((List_1_System_Int32_ *)this_01,pIVar12,
                 MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                );
      if (0 < numBottomCapRings) {
        iVar3 = iVar2 + 1;
        iStack_6 = iStack_6 + iVar3 * (numBottomCapRings + 1);
        pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        pIVar8 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        iStack_15 = 0;
        do {
          iVar4 = 0;
          if (0 < iVar3) {
            do {
              func_?();
              func_?();
              func_?();
              if ((pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
                 (func_?(), pIVar8 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
              goto code_?;
              func_?();
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar3);
          }
          iStack_15 = iStack_15 + 1;
        } while (iStack_15 < numBottomCapRings + 1);
        iVar4 = (this->fields)._size;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this,pIVar7,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this_00,pIVar8,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        pMVar11 = (MonitorData *)0x0;
        pIVar12 = (IEnumerable_1_System_Int32_ *)func_?();
        bottomRadius = 0.0;
        pIVar5 = (IEnumerable_1_System_Int32___Class *)(iVar4 + 1);
        do {
          if (0 < iVar2) {
            numBottomCapRings = 0;
            pIVar13 = pIVar5;
            if (pIVar12 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
            do {
              if (pIVar12[1].monitor <= pMVar11) goto code_?;
              (&pIVar12[2].klass)[(int)pMVar11] =
                   (IEnumerable_1_System_Int32___Class *)
                   ((int)&pIVar13[-1].vtable.GetEnumerator.method + 3);
              if (pIVar12[1].monitor <= pMVar11 + 1) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 1)] = pIVar13;
              if (pIVar12[1].monitor <= pMVar11 + 2) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 2)] =
                   (IEnumerable_1_System_Int32___Class *)((int)&(pIVar13->_0).image + iVar2);
              if (pIVar12[1].monitor <= pMVar11 + 3) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 3)] =
                   (IEnumerable_1_System_Int32___Class *)((int)&(pIVar13->_0).image + iVar2);
              if (pIVar12[1].monitor <= pMVar11 + 4) goto code_?;
              pMVar17 = pMVar11 + 5;
              (&pIVar12[2].klass)[(int)(pMVar11 + 4)] = pIVar13;
              pMVar11 = pMVar11 + 6;
              if (pIVar12[1].monitor <= pMVar17) goto code_?;
              pIVar18 = &pIVar13->_0;
              pIVar13 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar13->_0).image + 1);
              (&pIVar12[2].klass)[(int)pMVar17] =
                   (IEnumerable_1_System_Int32___Class *)((int)&pIVar18->image + iVar3);
              numBottomCapRings = numBottomCapRings + 1;
            } while (numBottomCapRings < iVar2);
          }
          bottomRadius = (float)((int)bottomRadius + 1);
          pIVar5 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar5->_0).image + iVar3);
        } while ((int)bottomRadius < iVar1);
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddRange
                  ((List_1_System_Int32_ *)this_01,pIVar12,
                   MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                  );
      }
      if (0 < numTopCapRings) {
        iVar3 = iVar2 + 1;
        iStack_6 = iStack_6 + iVar3 * (numTopCapRings + 1);
        pIVar7 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        pIVar8 = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
        numBottomCapRings = 0;
        do {
          iVar4 = 0;
          if (0 < iVar3) {
            do {
              func_?();
              func_?();
              func_?();
              if ((pIVar7 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) ||
                 (func_?(), pIVar8 == (IEnumerable_1_UnityEngine_Vector3_ *)0x0))
              goto code_?;
              func_?();
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar3);
          }
          numBottomCapRings = numBottomCapRings + 1;
        } while (numBottomCapRings < numTopCapRings + 1);
        pIVar5 = (IEnumerable_1_System_Int32___Class *)(this->fields)._size;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this,pIVar7,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
        List_1_UnityEngine_Vector3__AddRange
                  ((List_1_UnityEngine_Vector3_ *)this_00,pIVar8,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  );
        pMVar11 = (MonitorData *)0x0;
        pIVar12 = (IEnumerable_1_System_Int32_ *)func_?();
        numBottomCapRings = 0;
        do {
          pIVar5 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar5->_0).image + iVar3);
          if (0 < iVar2) {
            pIVar16 = (IEnumerable_1_System_Int32___Class *)((1 - iVar3) + (int)pIVar5);
            numStacks = 0;
            pIVar13 = pIVar5;
            if (pIVar12 == (IEnumerable_1_System_Int32_ *)0x0) goto code_?;
            do {
              if (pIVar12[1].monitor <= pMVar11) goto code_?;
              (&pIVar12[2].klass)[(int)pMVar11] =
                   (IEnumerable_1_System_Int32___Class *)
                   ((int)&pIVar16[-1].vtable.GetEnumerator.method + 3);
              if (pIVar12[1].monitor <= pMVar11 + 1) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 1)] = pIVar13;
              if (pIVar12[1].monitor <= pMVar11 + 2) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 2)] = pIVar16;
              if (pIVar12[1].monitor <= pMVar11 + 3) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 3)] = pIVar13;
              if (pIVar12[1].monitor <= pMVar11 + 4) goto code_?;
              (&pIVar12[2].klass)[(int)(pMVar11 + 4)] =
                   (IEnumerable_1_System_Int32___Class *)((int)&(pIVar13->_0).image + 1);
              pMVar17 = pMVar11 + 5;
              pMVar11 = pMVar11 + 6;
              if (pIVar12[1].monitor <= pMVar17) goto code_?;
              (&pIVar12[2].klass)[(int)pMVar17] = pIVar16;
              pIVar13 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar13->_0).image + 1);
              pIVar16 = (IEnumerable_1_System_Int32___Class *)((int)&(pIVar16->_0).image + 1);
              numStacks = numStacks + 1;
            } while (numStacks < iVar2);
          }
          numBottomCapRings = numBottomCapRings + 1;
        } while (numBottomCapRings < numTopCapRings);
        mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
        List_1_System_Int32__AddRange
                  ((List_1_System_Int32_ *)this_01,pIVar12,
                   MethodInfo__System__Collections__Generic__List<int>__AddRange_System__Collections__Generic__IEnumerable<int>_
                  );
      }
      pMVar19 = (Mesh *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar19,(MethodInfo *)0x0);
      pMVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal
                ::MultiColumnCollectionHeader+ViewState+ColumnState]::
                List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                          (this,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                          );
      if (pMVar19 != (Mesh *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                  (pMVar19,(Vector3__Array *)pMVar20,(MethodInfo *)0x0);
        pMVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            (this_00,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                  (pMVar19,(Vector3__Array *)pMVar20,(MethodInfo *)0x0);
        value = ColorEx::ColorEx_GetFilledColorArray(iStack_6,color,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                  (pMVar19,value,(MethodInfo *)0x0);
        pMVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                  Internal::MultiColumnCollectionHeader+ViewState+ColumnState]::
                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                            (this_01,MethodInfo__System__Collections__Generic__List<int>__ToArray__)
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                  (pMVar19,(Int32__Array *)pMVar20,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                  (pMVar19,0,(MethodInfo *)0x0);
        return pMVar19;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  pMVar19 = (Mesh *)(*pcVar21)();
  return pMVar19;
}

