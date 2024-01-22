
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Int64 Evaluate(Int64) */

int64_t Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Evaluate
                  (PluralFormsNode *this,int64_t n,MethodInfo *method)

{
  pPVar1 = this;
  bVar2 = (byte)in_stack_3;
  iVar4 = CONCAT44(unaff_EDI,unaff_ESI);
  pPVar5 = (PluralFormsNode__Class *)&stack0xfffffffc;
  uVar6 = (undefined3)unaff_EBP;
  uVar7 = (undefined1)((uint)unaff_EBP >> 0x18);
  uVar8 = (undefined2)unaff_EBX;
  uVar9 = (undefined1)((uint)unaff_EBX >> 0x10);
  uVar10 = CONCAT31((int3)((uint)in_stack_11 >> 8),(char)((uint)unaff_EBX >> 0x18));
  pPVar12 = (this->fields).token;
  iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
  if (pPVar12 == (PluralFormsToken *)0x0) goto code_?;
  uVar14 = (undefined1)((uint)in_stack_15 >> 0x10);
  uVar16 = (uint)in_stack_15 >> 0x18;
  uVar17 = (undefined2)in_stack_15;
  switch((pPVar12->fields).type) {
  case 2:
    return (int64_t)(((this->fields).token)->fields).number;
  case 3:
    return CONCAT44((undefined4)n,in_stack_15);
  default:
    return 0;
  case 6:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 == (PluralFormsNode__Array *)0x0) break;
    if (pPVar18->max_length != 0) {
      iVar13 = iVar4;
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar20 = (PluralFormsNode *)iVar19;
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = pPVar20;
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            if (pPVar20 != (PluralFormsNode *)iVar13) {
              return 0;
            }
            if (CONCAT13(uVar9,(int3)((uint)uVar10 >> 8)) != (int)((ulonglong)iVar13 >> 0x20)) {
              return 0;
            }
            return 1;
          }
        }
      }
      break;
    }
    goto code_?;
  case 8:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = (PluralFormsNode *)((ulonglong)iVar19 >> 0x20);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            iVar21 = (int)((ulonglong)iVar13 >> 0x20);
            if ((int)this < iVar21) {
              return 0;
            }
            if ((int)this <= iVar21) {
              if (CONCAT13(uVar9,(int3)((uint)uVar10 >> 8)) <= (uint)iVar13) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 9:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = (PluralFormsNode *)((ulonglong)iVar19 >> 0x20);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            iVar21 = (int)((ulonglong)iVar13 >> 0x20);
            if ((int)this < iVar21) {
              return 0;
            }
            if ((int)this <= iVar21) {
              if (CONCAT13(uVar9,(int3)((uint)uVar10 >> 8)) < (uint)iVar13) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 10:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = (PluralFormsNode *)((ulonglong)iVar19 >> 0x20);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            iVar21 = (int)((ulonglong)iVar13 >> 0x20);
            if (iVar21 < (int)this) {
              return 0;
            }
            if (iVar21 <= (int)this) {
              if ((uint)iVar13 <= CONCAT13(uVar9,(int3)((uint)uVar10 >> 8))) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xb:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = (PluralFormsNode *)((ulonglong)iVar19 >> 0x20);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            iVar21 = (int)((ulonglong)iVar13 >> 0x20);
            if (iVar21 < (int)this) {
              return 0;
            }
            if (iVar21 <= (int)this) {
              if ((uint)iVar13 < CONCAT13(uVar9,(int3)((uint)uVar10 >> 8))) {
                return 0;
              }
              return 1;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xc:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length < 2) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[1],n & 0xffffffff,unaff_EDI);
        in_stack_3 = (uint)bVar2;
        pPVar20 = (PluralFormsNode *)((ulonglong)iVar19 >> 0x20);
        if (iVar19 == 0) {
          return 0;
        }
        pPVar18 = (this->fields).nodes;
        this = pPVar20;
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length == 0) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            PluralFormsNode_Evaluate
                      (pPVar18->vector[0],n & 0xffffffff,(MethodInfo *)CONCAT13(uVar7,uVar6));
            in_stack_15 = CONCAT13(uVar9,(int3)((uint)uVar10 >> 8));
            iVar13 = func_?();
            return iVar13;
          }
        }
      }
    }
    break;
  case 0xd:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar20 = (PluralFormsNode *)iVar19;
        pPVar18 = (this->fields).nodes;
        in_stack_3 = (uint)bVar2;
        this = pPVar20;
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            uVar9 = 0;
            uVar10 = 0;
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            if ((pPVar20 == (PluralFormsNode *)iVar13) &&
               (CONCAT13(uVar9,(int3)((uint)uVar10 >> 8)) == (int)((ulonglong)iVar13 >> 0x20))) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xe:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar13 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        iVar21 = (int)iVar13;
        pPVar18 = (this->fields).nodes;
        this = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
        iVar4 = CONCAT44((undefined4)n,iVar21);
        iVar13 = CONCAT44((undefined4)n,iVar21);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            if (iVar21 == 0 && this == (PluralFormsNode *)0x0) {
              return 0;
            }
            if (iVar13 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0xf:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar13 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        iVar21 = (int)iVar13;
        pPVar18 = (this->fields).nodes;
        this = (PluralFormsNode *)((ulonglong)iVar13 >> 0x20);
        iVar4 = CONCAT44((undefined4)n,iVar21);
        iVar13 = CONCAT44((undefined4)n,iVar21);
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          iVar13 = iVar4;
          if (pPVar18->vector[1] != (PluralFormsNode *)0x0) {
            iVar13 = PluralFormsNode_Evaluate
                               (pPVar18->vector[1],n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            if (iVar21 != 0 || this != (PluralFormsNode *)0x0) {
              return 1;
            }
            if (iVar13 == 0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    break;
  case 0x10:
    pPVar18 = (this->fields).nodes;
    iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
    if (pPVar18 != (PluralFormsNode__Array *)0x0) {
      if (pPVar18->max_length == 0) goto code_?;
      iVar13 = CONCAT44(unaff_EDI,unaff_ESI);
      if (pPVar18->vector[0] != (PluralFormsNode *)0x0) {
        iVar4 = CONCAT44(in_stack_15,(undefined4)n);
        iVar13 = CONCAT44(in_stack_15,(undefined4)n);
        iVar19 = PluralFormsNode_Evaluate(pPVar18->vector[0],n & 0xffffffff,unaff_EDI);
        pPVar18 = (this->fields).nodes;
        this = (PluralFormsNode *)iVar19;
        in_stack_3 = (uint)bVar2;
        if (pPVar18 != (PluralFormsNode__Array *)0x0) {
          if (pPVar18->max_length < 2) goto code_?;
          this_00 = (PluralFormsNode_IterateNodesDelegate *)pPVar18->vector[1];
          iVar13 = iVar4;
          if (this_00 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            uVar22 = 0;
            in_stack_3 = (uint)(byte)((ulonglong)n >> 0x18);
            uVar10 = CONCAT31((int3)n,(char)uVar16);
            iVar4 = PluralFormsNode_Evaluate
                               ((PluralFormsNode *)this_00,n & 0xffffffff,
                                (MethodInfo *)CONCAT13(uVar7,uVar6));
            pPVar18 = (pPVar1->fields).nodes;
            iVar13 = iVar4;
            unaff_ESI = this_00;
            uVar8 = uVar17;
            uVar9 = uVar14;
            if (pPVar18 != (PluralFormsNode__Array *)0x0) {
              if (pPVar18->max_length < 3) goto code_?;
              if (pPVar18->vector[2] != (PluralFormsNode *)0x0) {
                in_stack_15 = 0;
                iVar13 = PluralFormsNode_Evaluate(pPVar18->vector[2],0,n._4_4_);
                if (CONCAT13(uVar22,(int3)(in_stack_3 >> 8)) == 0) {
                  return iVar13;
                }
                return iVar4;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  iVar4 = iVar13;
code_?:
  uVar23 = (uint)((ulonglong)iVar4 >> 0x20);
  uVar24 = func_?();
  uVar16 = (uint)uVar24;
  iVar21 = uVar16 + 0xc0efb324;
  dVar25 = *(double *)(uVar16 + 0xc0efb2f4 + (int)((ulonglong)uVar24 >> 0x20));
  pPVar26 = (PluralFormsNode__Class *)&stack0xfffffffc;
  if (extraout_ECX == 1 || iVar21 != 0) {
    bVar27 = (byte)((ulonglong)uVar24 >> 0x20);
    bVar2 = (byte)iVar21 + bVar27;
    bVar28 = CARRY1((byte)iVar21,bVar27) || CARRY1(bVar2,uVar16 < 0x3f104cdc);
    uVar6 = (undefined3)((uint)iVar21 >> 8);
    bVar2 = bVar2 + (uVar16 < 0x3f104cdc);
    if (extraout_ECX != 2 && bVar2 == 0) {
      pPVar26 = pPVar1->klass;
      goto code_?;
    }
    pbVar29 = (byte *)(CONCAT31(uVar6,bVar2) + -0x24);
    bVar30 = CARRY1(*pbVar29,bVar27) || CARRY1(*pbVar29 + bVar27,bVar28);
    *pbVar29 = *pbVar29 + bVar27 + bVar28;
    bVar28 = CARRY1(bVar2,bVar27) || CARRY1(bVar2 + bVar27,bVar30);
    cVar31 = bVar2 + bVar27 + bVar30;
    pPVar18 = (PluralFormsNode__Array *)CONCAT31(uVar6,cVar31);
    iVar21 = extraout_ECX + -3;
    pPVar26 = (PluralFormsNode__Class *)&stack0xfffffffc;
    if (iVar21 != 0 && cVar31 == '\0') goto code_?;
    bVar32 = (byte)pPVar1;
    bVar30 = CARRY1(bVar27,bVar32) || CARRY1(bVar27 + bVar32,bVar28);
    cVar33 = bVar27 + bVar32 + bVar28;
    iVar34 = CONCAT31((int3)((ulonglong)uVar24 >> 0x28),cVar33);
    *(longlong *)((int)pPVar18->vector + iVar34 + -0x16) =
         (longlong)
         (extraout_ST0 * (float10)dVar25 * (float10)*(double *)((int)pPVar18->vector + iVar34 + 0x5a)
         );
    *(longlong *)((int)pPVar18 + iVar34 + -0x76) = (longlong)extraout_ST1;
    *(short *)((int)pPVar18->vector + iVar34 + -0x6e) =
         (short)(in_ST2 * (float10)*(short *)((int)pPVar18->vector + iVar34 + 10));
    *(short *)((int)pPVar18->vector + iVar34 + 0x18) = (short)in_ST3;
    iVar21 = extraout_ECX + -4;
    bVar2 = (byte)((ulonglong)uVar24 >> 0x28);
    uVar17 = (undefined2)((uint)pPVar1 >> 0x10);
    cVar31 = (char)((uint)pPVar1 >> 8);
    if (iVar21 == 0 || cVar33 == '\0') {
      pbVar29 = (byte *)(extraout_ECX + 0x3a104cdc);
      bVar27 = *pbVar29;
      bVar35 = *pbVar29;
      *pbVar29 = bVar35 + bVar2 + bVar30;
      if (iVar21 != 1 && *pbVar29 == 0) {
        cVar31 = cVar31 * '\x02' + (CARRY1(bVar27,bVar2) || CARRY1(bVar35 + bVar2,bVar30));
        pPVar1 = (PluralFormsNode *)CONCAT22(uVar17,CONCAT11(cVar31,bVar32));
        pPVar5 = (PluralFormsNode__Class *)&stack0xfffffffc;
        pPVar26 = (PluralFormsNode__Class *)&stack0xfffffffc;
        in_ES = uVar8;
        if (cVar31 != '\0') goto code_?;
        goto code_?;
      }
      in((short)iVar34);
      if (in_stack_15 == 0) goto code_?;
      uVar10 = *(undefined4 *)(in_stack_15 + 0x14);
      uVar8 = (undefined2)((uint)this >> 8);
      uVar9 = (undefined1)((uint)this >> 0x18);
      (**(code **)(in_stack_15 + 0xc))();
      pPVar1 = this;
      pPVar26 = (PluralFormsNode__Class *)&stack0xfffffffc;
      in_stack_3 = uVar23;
      goto code_?;
    }
    pcVar36 = (char *)((int)&pPVar1[5].monitor + iVar34 + 2);
    *pcVar36 = *pcVar36 + bVar2;
    cVar31 = cVar31 * '\x02';
    pPVar1 = (PluralFormsNode *)CONCAT22(uVar17,CONCAT11(cVar31,bVar32));
    pPVar26 = (PluralFormsNode__Class *)&stack0xfffffffc;
    if (cVar31 == '\0') goto code_?;
    *(undefined1 *)((int)pPVar1 + iVar21 * 4) = 0xcf;
  }
  else {
code_?:
    uVar23 = 0;
    iVar21 = 0;
    if (pPVar1 == (PluralFormsNode *)0x0) goto code_?;
    in_stack_15 = (int)iVar4;
code_?:
    in_ES = uVar8;
    iVar4 = CONCAT44(uVar23,uVar23 + 0x10);
    pPVar5 = pPVar26;
  }
  while( true ) {
    pPVar18 = (pPVar1->fields).nodes;
    if (pPVar18 == (PluralFormsNode__Array *)0x0) break;
    if ((int)pPVar18->max_length <= iVar21) {
      pIVar37 = (pPVar5->_0).byval_arg.data.array;
      if (pIVar37 != (Il2CppArrayType *)0x0) {
        in_stack_15._0_1_ = pIVar37[1].rank;
        in_stack_15._1_1_ = pIVar37[1].numsizes;
        in_stack_15._2_1_ = pIVar37[1].numlobounds;
        in_stack_15._3_1_ = pIVar37[1].field_0x7;
        iVar13 = (*(code *)pIVar37->lobounds)();
        return iVar13;
      }
      break;
    }
    if (pPVar18->max_length <= (uint)((ulonglong)iVar4 >> 0x20)) goto code_?;
    pPVar26 = pPVar5;
    if (*(int *)((int)pPVar18->vector + (int)iVar4 + -0x10) != 0) {
code_?:
      unaff_ESI = (PluralFormsNode_IterateNodesDelegate *)(pPVar26->_0).namespaze;
code_?:
      pPVar5 = pPVar26;
      PluralFormsNode_IterateNodes
                (*(PluralFormsNode **)((int)pPVar18->vector + (int)iVar4 + -0x10),unaff_ESI,
                 (PluralFormsNode_IterateNodesDelegate *)
                 CONCAT13((char)uVar10,CONCAT12(uVar9,in_ES)),
                 (MethodInfo *)CONCAT13((char)in_stack_3,(int3)((uint)uVar10 >> 8)));
    }
    iVar4 = CONCAT44((int)((ulonglong)iVar4 >> 0x20) + 1,(int)iVar4);
code_?:
    iVar21 = (int)((ulonglong)iVar4 >> 0x20);
    iVar4 = CONCAT44(iVar21,(int)iVar4 + 4);
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  iVar13 = (*pcVar38)();
  return iVar13;
}


/* Void IterateNodes(PluralFormsNode, PluralFormsNode+IterateNodesDelegate,
   PluralFormsNode+IterateNodesDelegate) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
               (PluralFormsNode *node,PluralFormsNode_IterateNodesDelegate *doBefore,
               PluralFormsNode_IterateNodesDelegate *doAfter,MethodInfo *method)

{
  if (doBefore != (PluralFormsNode_IterateNodesDelegate *)0x0) {
    (*(doBefore->fields)._._.invoke_impl)
              ((doBefore->fields)._._.method_code,node,(doBefore->fields)._._.method);
    uVar1 = 0;
    if (node != (PluralFormsNode *)0x0) {
      iVar2 = 0x10;
      while( true ) {
        pPVar3 = (node->fields).nodes;
        if (pPVar3 == (PluralFormsNode__Array *)0x0) break;
        if ((int)pPVar3->max_length <= (int)uVar1) {
          if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
            (*(doAfter->fields)._._.invoke_impl)
                      ((doAfter->fields)._._.method_code,node,(doAfter->fields)._._.method);
            return;
          }
          break;
        }
        if (pPVar3->max_length <= uVar1) goto code_?;
        if (*(int *)((int)pPVar3->vector + iVar2 + -0x10) != 0) {
          PluralFormsNode_IterateNodes
                    (*(PluralFormsNode **)((int)pPVar3->vector + iVar2 + -0x10),doBefore,doAfter,
                     (MethodInfo *)0x0);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 4;
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


/* PluralFormsNode Node(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_Node
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((i < 0) || (2 < i)) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).nodes;
  if (pPVar2 == (PluralFormsNode__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    pPVar6 = (PluralFormsNode *)(*pcVar5)();
    return pPVar6;
  }
  if ((uint)i < pPVar2->max_length) {
    return pPVar2->vector[i];
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  pPVar6 = (PluralFormsNode *)(*pcVar5)();
  return pPVar6;
}


/* PluralFormsNode ReleaseNode(Int32) */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ReleaseNode
          (PluralFormsNode *this,int32_t i,MethodInfo *method)

{
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((uint)i < pPVar1->max_length) {
    pPVar2 = pPVar1->vector[i];
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = (PluralFormsNode *)0x0;
      func_?(pPVar1->vector + i,0);
      return pPVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar2 = (PluralFormsNode *)(*pcVar3)();
  return pPVar2;
}


/* Void SetNode(Int32, PluralFormsNode) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_SetNode
               (PluralFormsNode *this,int32_t i,PluralFormsNode *n,MethodInfo *method)

{
  if (2 < (uint)i) {
    return;
  }
  pPVar1 = (this->fields).nodes;
  if (pPVar1 == (PluralFormsNode__Array *)0x0) {
    func_?();
  }
  else if ((n == (PluralFormsNode *)0x0) ||
          (iVar2 = func_?(n,(pPVar1->klass->_0).element_class), iVar2 != 0)) {
    if ((uint)i < pPVar1->max_length) {
      pPVar1->vector[i] = n;
      func_?(pPVar1->vector + i,n);
      return;
    }
    goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode_ToString
                   (PluralFormsNode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__Node__Token__0__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral__Node__Token__0__,(Object *)(this->fields).token,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* PluralFormsNode(PluralFormsToken) */

void Assembly-CSharp.dll::GNU::Gettext::PluralFormsNode::PluralFormsNode__ctor
               (PluralFormsNode *this,PluralFormsToken *token,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    cRam_? = '\x01';
  }
  pPVar1 = (PluralFormsNode__Array *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode,3);
  (this->fields).nodes = pPVar1;
  func_?(&(this->fields).nodes,pPVar1);
  this_00 = (RecursiveTracer *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  RecursiveTracer::RecursiveTracer__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields).tracer;
  (this->fields).tracer = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).token = token;
  func_?(&this->fields,token);
  return;
}

