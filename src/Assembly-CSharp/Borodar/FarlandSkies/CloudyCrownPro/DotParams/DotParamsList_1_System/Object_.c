
/* Int32 BinarySearch[Object](IList`1[System.Object], Object) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch
                  (IList_1_System_Object_ *list,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (list == (IList_1_System_Object_ *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_list,(MethodInfo *)0x0);
    func_?(this,0,
                    int_MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<System::Object>__BinarySearch<System::Object>_System__Collections__Generic__IList<System::Object>__System__Object_
                   );
  }
  else {
    ppIVar1 = method->parameters;
    pIVar2 = ppIVar1[1];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
      ppIVar1 = method->parameters;
    }
    if ((pIVar2[0x17].num_mods & 2) != 0) {
      pIVar2 = ppIVar1[1];
      if ((pIVar2[0x17].type & 1) == 0) {
        func_?(pIVar2);
        ppIVar1 = method->parameters;
      }
      if (pIVar2[0xe].data.dummy == (void *)0x0) {
        pIVar2 = ppIVar1[1];
        if ((pIVar2[0x17].type & 1) == 0) {
          func_?(pIVar2);
        }
        func_?(pIVar2);
      }
    }
    piVar3 = (int *)(*(code *)(*method->parameters)->data)(*method->parameters);
    iVar4 = 0;
    pIVar2 = method->parameters[2];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
    }
    iStack_5 = func_?(0,pIVar2,list);
    iStack_5 = iStack_5 + -1;
    if (0 < iStack_5) {
      do {
        iVar6 = (iStack_5 + iVar4) / 2;
        pIVar7 = (Il2CppClass *)method->parameters[3];
        if (((uint)pIVar7->vtable[0].methodPtr & 0x10000) == 0) {
          func_?(pIVar7);
        }
        pIVar8 = list->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType == pIVar7) {
              ppMVar11 = &(&(list->klass->vtable).get_Item)[pIVar8->interfaceOffsets[uVar9].offset].
                          method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?(list,pIVar7,3);
code_?:
        uVar12 = (*(code *)*ppMVar11)(list,iVar6,ppMVar11[1]);
        if (piVar3 == (int *)0x0) goto code_?;
        iVar13 = (**(code **)(*piVar3 + 0xf0))(piVar3,uVar12,value,*(undefined4 *)(*piVar3 + 0xf4));
        if (iVar13 < 0) {
          iVar4 = iVar6 + 1;
        }
        else {
          iStack_5 = iVar6 + -1;
        }
      } while (iVar4 < iStack_5);
    }
    pIVar2 = method->parameters[3];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
    }
    uVar12 = func_?(3,pIVar2,list,iVar4);
    if (piVar3 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar3 + 0xf0))(piVar3,uVar12,value,*(undefined4 *)(*piVar3 + 0xf4));
      if (iVar6 < 0) {
        iVar4 = iVar4 + 1;
      }
      return iVar4;
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* Int32 BinarySearch[Single](IList`1[System.Single], Single) */

int32_t Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::
        DotParamsList`1[System::Object]::DotParamsList_1_System_Object__BinarySearch_1
                  (IList_1_System_Single_ *list,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (list == (IList_1_System_Single_ *)0x0) {
    this = (ArgumentNullException *)func_?(TypeInfo__System__ArgumentNullException);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this,StringLiteral_list,(MethodInfo *)0x0);
    func_?(this,0,
                    int_MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<System::Object>__BinarySearch<float>_System__Collections__Generic__IList<float>__float_
                   );
  }
  else {
    ppIVar1 = method->parameters;
    pIVar2 = ppIVar1[1];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
      ppIVar1 = method->parameters;
    }
    if ((pIVar2[0x17].num_mods & 2) != 0) {
      pIVar2 = ppIVar1[1];
      if ((pIVar2[0x17].type & 1) == 0) {
        func_?(pIVar2);
        ppIVar1 = method->parameters;
      }
      if (pIVar2[0xe].data.dummy == (void *)0x0) {
        pIVar2 = ppIVar1[1];
        if ((pIVar2[0x17].type & 1) == 0) {
          func_?(pIVar2);
        }
        func_?(pIVar2);
      }
    }
    piVar3 = (int *)(*(code *)(*method->parameters)->data)(*method->parameters);
    iVar4 = 0;
    pIVar2 = method->parameters[2];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
    }
    iStack_5 = func_?(0,pIVar2,list);
    iStack_5 = iStack_5 + -1;
    if (0 < iStack_5) {
      do {
        iVar6 = (iStack_5 + iVar4) / 2;
        pIVar7 = (Il2CppClass *)method->parameters[3];
        if (((uint)pIVar7->vtable[0].methodPtr & 0x10000) == 0) {
          func_?(pIVar7);
        }
        pIVar8 = list->klass;
        uVar9 = 0;
        uVar10._0_1_ = (pIVar8->_1).rank;
        uVar10._1_1_ = (pIVar8->_1).minimumAlignment;
        if (uVar10 != 0) {
          do {
            if (pIVar8->interfaceOffsets[uVar9].interfaceType == pIVar7) {
              ppMVar11 = &(&(list->klass->vtable).get_Item)[pIVar8->interfaceOffsets[uVar9].offset].
                          method;
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        ppMVar11 = (MethodInfo **)func_?(list,pIVar7,3);
code_?:
        fVar12 = (float10)(*(code *)*ppMVar11)(list,iVar6,ppMVar11[1]);
        if (piVar3 == (int *)0x0) goto code_?;
        iVar13 = (**(code **)(*piVar3 + 0xf0))
                           (piVar3,(float)fVar12,value,*(undefined4 *)(*piVar3 + 0xf4));
        if (iVar13 < 0) {
          iVar4 = iVar6 + 1;
        }
        else {
          iStack_5 = iVar6 + -1;
        }
      } while (iVar4 < iStack_5);
    }
    pIVar2 = method->parameters[3];
    if ((pIVar2[0x17].type & 1) == 0) {
      func_?(pIVar2);
    }
    fVar12 = (float10)func_?(3,pIVar2,list,iVar4);
    if (piVar3 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar3 + 0xf0))
                        (piVar3,(float)fVar12,value,*(undefined4 *)(*piVar3 + 0xf4));
      if (iVar6 < 0) {
        iVar4 = iVar4 + 1;
      }
      return iVar4;
    }
  }
code_?:
  func_?(0);
  pcVar14 = (code *)swi(3);
  iVar15 = (*pcVar14)();
  return iVar15;
}


/* DotParamsList`1[System.Object](Int32) */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::DotParamsList`1[System::
     Object]::DotParamsList_1_System_Object___ctor
               (DotParamsList_1_System_Object_ *this,int32_t capacity,MethodInfo *method)

{
  if (this != (DotParamsList_1_System_Object_ *)0x0) {
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    if ((*(byte *)(iVar1 + 0xbf) & 2) != 0) {
      iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
        func_?(iVar1);
      }
      if (*(int *)(iVar1 + 0x70) == 0) {
        iVar1 = *(int *)(*(int *)(method->name + 0x60) + 4);
        if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
          func_?(iVar1);
        }
        func_?(iVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(method->name + 0x60))();
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

