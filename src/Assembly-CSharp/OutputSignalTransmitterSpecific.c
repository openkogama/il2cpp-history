
/* Void Send(Int32) */

void Assembly-CSharp.dll::OutputSignalTransmitterSpecific::OutputSignalTransmitterSpecific_Send
               (OutputSignalTransmitterSpecific *this,int32_t hotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&TypeInfo__ILogicWorldObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,(this->fields).woId,(MethodInfo *)0x0);
    puVar3 = (undefined *)0x0;
    if (pMVar2 != (MVWorldObject *)0x0) {
      while (pLVar4 = (pMVar2->fields).outputLinkRefs, pLVar4 != (List_1_MV_WorldObject_Link_ *)0x0)
      {
        if ((pLVar4->fields)._size <= (int)puVar3) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pMVar2->fields).outputLinkRefs;
        if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar5,(int32_t)puVar3,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Item_int_
                               ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
           (pMVar1 == (MVWorldObjectClientManager *)0x0)) break;
        this = (OutputSignalTransmitterSpecific *)0x0;
        puVar3 = &UNK_?;
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,*(int32_t *)((int)RVar6 + 0x10),(MethodInfo *)0x0);
        if (pMVar2 == (MVWorldObject *)0x0) break;
        iVar7 = func_?();
        if ((iVar7 == 0) || (piVar8 = (int *)func_?(), piVar8 == (int *)0x0)) {
          func_?();
          break;
        }
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar8 + 0xb6);
        if (uVar10 != 0) {
          iVar7 = *(int *)(*piVar8 + 0x58);
          do {
            if (*(ILogicWorldObject__Class **)(iVar7 + (uint)uVar9 * 8) ==
                TypeInfo__ILogicWorldObject) {
              puVar11 = (undefined4 *)
                        (*piVar8 + (*(int *)(iVar7 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        this = (OutputSignalTransmitterSpecific *)&UNK_?;
        puVar11 = (undefined4 *)func_?();
code_?:
        piVar8 = (int *)(*(code *)*puVar11)();
        if (piVar8 == (int *)0x0) break;
        uVar9 = 0;
        uVar10 = *(ushort *)(*piVar8 + 0xb6);
        if (uVar10 != 0) {
          iVar7 = *(int *)(*piVar8 + 0x58);
          do {
            if (*(IInputSignalReceiver__Class **)(iVar7 + (uint)uVar9 * 8) ==
                TypeInfo__IInputSignalReceiver) {
              puVar11 = (undefined4 *)
                        (*piVar8 + (*(int *)(iVar7 + 4 + (uint)uVar9 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
        }
        puVar11 = (undefined4 *)func_?(piVar8,TypeInfo__IInputSignalReceiver,0);
code_?:
        pMVar2 = (MVWorldObject *)puVar11[1];
        (*(code *)*puVar11)(piVar8,this);
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pMVar2->fields).outputLinkRefs;
        if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar5,(int32_t)puVar3,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Item_int_
                              ), RVar6 == (RegexCharClass_SingleRange)0x0)) break;
        puVar3 = puVar3 + 1;
        *(undefined1 *)((int)RVar6 + 0x14) = this._0_1_;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

