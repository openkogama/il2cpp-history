
/* PluralFormsNode EqualityExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_EqualityExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if (((pPVar3->fields).type != 6) && ((pPVar3->fields).type != 0xd)) {
      return pPVar1;
    }
    pPVar3 = (pPVar2->fields).token;
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar5 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
      if (pPVar5 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      if ((this_00 != (PluralFormsNode *)0x0) &&
         (pPVar6 = (this_00->fields).nodes, pPVar6 != (PluralFormsNode__Array *)0x0)) {
        lVar7 = FUN_?(pPVar5,(pPVar6->klass->_0).element_class);
        if (lVar7 == 0) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar9 = (code *)swi(3);
          pPVar1 = (PluralFormsNode *)(*pcVar9)();
          return pPVar1;
        }
        FUN_?(pPVar6,1,pPVar5);
        pPVar6 = (this_00->fields).nodes;
        if (pPVar6 != (PluralFormsNode__Array *)0x0) {
          lVar7 = FUN_?(pPVar1,(pPVar6->klass->_0).element_class);
          if (lVar7 == 0) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            pPVar1 = (PluralFormsNode *)(*pcVar9)();
            return pPVar1;
          }
          FUN_?(pPVar6,0,pPVar1);
          return this_00;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}


/* PluralFormsNode Expression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_Expression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0x10) {
      return pPVar1;
    }
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
      if (pPVar5 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      if ((this_00 != (PluralFormsNode *)0x0) &&
         (pPVar6 = (this_00->fields).nodes, pPVar6 != (PluralFormsNode__Array *)0x0)) {
        lVar7 = FUN_?(pPVar5,(pPVar6->klass->_0).element_class);
        if (lVar7 == 0) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar9 = (code *)swi(3);
          pPVar1 = (PluralFormsNode *)(*pcVar9)();
          return pPVar1;
        }
        FUN_?(pPVar6,1,pPVar5);
        pPVar2 = (this->fields).scanner;
        if ((pPVar2 != (PluralFormsScanner *)0x0) &&
           (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
          if ((pPVar3->fields).type != 0x11) {
            return (PluralFormsNode *)0x0;
          }
          bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken
                            ((this->fields).scanner,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return (PluralFormsNode *)0x0;
          }
          pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
          if (pPVar5 == (PluralFormsNode *)0x0) {
            return (PluralFormsNode *)0x0;
          }
          pPVar6 = (this_00->fields).nodes;
          if (pPVar6 != (PluralFormsNode__Array *)0x0) {
            lVar7 = FUN_?(pPVar5,(pPVar6->klass->_0).element_class);
            if (lVar7 == 0) {
              uVar8 = FUN_?();
              FUN_?(uVar8,0);
              pcVar9 = (code *)swi(3);
              pPVar1 = (PluralFormsNode *)(*pcVar9)();
              return pPVar1;
            }
            FUN_?(pPVar6,2,pPVar5);
            pPVar6 = (this_00->fields).nodes;
            if (pPVar6 != (PluralFormsNode__Array *)0x0) {
              lVar7 = FUN_?(pPVar1,(pPVar6->klass->_0).element_class);
              if (lVar7 == 0) {
                uVar8 = FUN_?();
                FUN_?(uVar8,0);
                pcVar9 = (code *)swi(3);
                pPVar1 = (PluralFormsNode *)(*pcVar9)();
                return pPVar1;
              }
              FUN_?(pPVar6,0,pPVar1);
              return this_00;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}


/* PluralFormsNode LogicalAndExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_LogicalAndExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_EqualityExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0xe) {
      return pPVar1;
    }
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      this_01 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0);
      if (this_01 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar3 = (this_01->fields).token;
      if ((pPVar3 != (PluralFormsToken *)0x0) && (this_00 != (PluralFormsNode *)0x0)) {
        pPVar5 = (this_00->fields).nodes;
        if ((pPVar3->fields).type == 0xe) {
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            lVar6 = FUN_?(pPVar1);
            if (lVar6 == 0) {
              uVar7 = FUN_?();
              FUN_?(uVar7,0);
              pcVar8 = (code *)swi(3);
              pPVar1 = (PluralFormsNode *)(*pcVar8)();
              return pPVar1;
            }
            FUN_?(pPVar5);
            pPVar1 = PluralFormsNode::PluralFormsNode_ReleaseNode(this_01,0,(MethodInfo *)0x0);
            pPVar5 = (this_00->fields).nodes;
            if (pPVar5 != (PluralFormsNode__Array *)0x0) {
              if ((pPVar1 != (PluralFormsNode *)0x0) &&
                 (lVar6 = FUN_?(pPVar1,(pPVar5->klass->_0).element_class), lVar6 == 0)) {
                uVar7 = FUN_?();
                FUN_?(uVar7,0);
                pcVar8 = (code *)swi(3);
                pPVar1 = (PluralFormsNode *)(*pcVar8)();
                return pPVar1;
              }
              FUN_?(pPVar5,1,pPVar1);
              pPVar5 = (this_01->fields).nodes;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                lVar6 = FUN_?(this_00,(pPVar5->klass->_0).element_class);
                if (lVar6 == 0) {
                  uVar7 = FUN_?();
                  FUN_?(uVar7,0);
                  pcVar8 = (code *)swi(3);
                  pPVar1 = (PluralFormsNode *)(*pcVar8)();
                  return pPVar1;
                }
                FUN_?(pPVar5,0,this_00);
                return this_01;
              }
            }
          }
        }
        else if (pPVar5 != (PluralFormsNode__Array *)0x0) {
          lVar6 = FUN_?(pPVar1,(pPVar5->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar8 = (code *)swi(3);
            pPVar1 = (PluralFormsNode *)(*pcVar8)();
            return pPVar1;
          }
          FUN_?(pPVar5,0,pPVar1);
          pPVar5 = (this_00->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            lVar6 = FUN_?(this_01,(pPVar5->klass->_0).element_class);
            if (lVar6 == 0) {
              uVar7 = FUN_?();
              FUN_?(uVar7,0);
              pcVar8 = (code *)swi(3);
              pPVar1 = (PluralFormsNode *)(*pcVar8)();
              return pPVar1;
            }
            FUN_?(pPVar5,1,this_01);
            return this_00;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar8)();
  return pPVar1;
}


/* PluralFormsNode LogicalOrExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_LogicalOrExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0xf) {
      return pPVar1;
    }
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      this_01 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0);
      if (this_01 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar3 = (this_01->fields).token;
      if ((pPVar3 != (PluralFormsToken *)0x0) && (this_00 != (PluralFormsNode *)0x0)) {
        pPVar5 = (this_00->fields).nodes;
        if ((pPVar3->fields).type == 0xf) {
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            lVar6 = FUN_?(pPVar1);
            if (lVar6 == 0) {
              uVar7 = FUN_?();
              FUN_?(uVar7,0);
              pcVar8 = (code *)swi(3);
              pPVar1 = (PluralFormsNode *)(*pcVar8)();
              return pPVar1;
            }
            FUN_?(pPVar5);
            pPVar1 = PluralFormsNode::PluralFormsNode_ReleaseNode(this_01,0,(MethodInfo *)0x0);
            pPVar5 = (this_00->fields).nodes;
            if (pPVar5 != (PluralFormsNode__Array *)0x0) {
              if ((pPVar1 != (PluralFormsNode *)0x0) &&
                 (lVar6 = FUN_?(pPVar1,(pPVar5->klass->_0).element_class), lVar6 == 0)) {
                uVar7 = FUN_?();
                FUN_?(uVar7,0);
                pcVar8 = (code *)swi(3);
                pPVar1 = (PluralFormsNode *)(*pcVar8)();
                return pPVar1;
              }
              FUN_?(pPVar5,1,pPVar1);
              pPVar5 = (this_01->fields).nodes;
              if (pPVar5 != (PluralFormsNode__Array *)0x0) {
                lVar6 = FUN_?(this_00,(pPVar5->klass->_0).element_class);
                if (lVar6 == 0) {
                  uVar7 = FUN_?();
                  FUN_?(uVar7,0);
                  pcVar8 = (code *)swi(3);
                  pPVar1 = (PluralFormsNode *)(*pcVar8)();
                  return pPVar1;
                }
                FUN_?(pPVar5,0,this_00);
                return this_01;
              }
            }
          }
        }
        else if (pPVar5 != (PluralFormsNode__Array *)0x0) {
          lVar6 = FUN_?(pPVar1,(pPVar5->klass->_0).element_class);
          if (lVar6 == 0) {
            uVar7 = FUN_?();
            FUN_?(uVar7,0);
            pcVar8 = (code *)swi(3);
            pPVar1 = (PluralFormsNode *)(*pcVar8)();
            return pPVar1;
          }
          FUN_?(pPVar5,0,pPVar1);
          pPVar5 = (this_00->fields).nodes;
          if (pPVar5 != (PluralFormsNode__Array *)0x0) {
            lVar6 = FUN_?(this_01,(pPVar5->klass->_0).element_class);
            if (lVar6 == 0) {
              uVar7 = FUN_?();
              FUN_?(uVar7,0);
              pcVar8 = (code *)swi(3);
              pPVar1 = (PluralFormsNode *)(*pcVar8)();
              return pPVar1;
            }
            FUN_?(pPVar5,1,this_01);
            return this_00;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar8)();
  return pPVar1;
}


/* PluralFormsNode MultiplicativeExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_MultiplicativeExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if ((pPVar3->fields).type != 0xc) {
      return pPVar1;
    }
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar5 = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0);
      if (pPVar5 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      if ((this_00 != (PluralFormsNode *)0x0) &&
         (pPVar6 = (this_00->fields).nodes, pPVar6 != (PluralFormsNode__Array *)0x0)) {
        lVar7 = FUN_?(pPVar5,(pPVar6->klass->_0).element_class);
        if (lVar7 == 0) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar9 = (code *)swi(3);
          pPVar1 = (PluralFormsNode *)(*pcVar9)();
          return pPVar1;
        }
        FUN_?(pPVar6,1,pPVar5);
        pPVar6 = (this_00->fields).nodes;
        if (pPVar6 != (PluralFormsNode__Array *)0x0) {
          lVar7 = FUN_?(pPVar1,(pPVar6->klass->_0).element_class);
          if (lVar7 == 0) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            pPVar1 = (PluralFormsNode *)(*pcVar9)();
            return pPVar1;
          }
          FUN_?(pPVar6,0,pPVar1);
          return this_00;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}


/* Boolean NextToken() */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_NextToken
               (PluralFormsParser *this,MethodInfo *method)

{
  this_00 = (this->fields).scanner;
  if (this_00 != (PluralFormsScanner *)0x0) {
    bVar1 = PluralFormsScanner::PluralFormsScanner_NextToken(this_00,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean Parse(PluralFormsCalculator) */

bool Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_Parse
               (PluralFormsParser *this,PluralFormsCalculator *calculator,MethodInfo *method)

{
  pPVar1 = (this->fields).scanner;
  if ((pPVar1 != (PluralFormsScanner *)0x0) &&
     (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
    if (((pPVar2->fields).type == 5) &&
       (bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken
                          ((this->fields).scanner,(MethodInfo *)0x0), bVar3 != 0)) {
      pPVar1 = (this->fields).scanner;
      if ((pPVar1 == (PluralFormsScanner *)0x0) ||
         (pPVar2 = (pPVar1->fields).token, pPVar2 == (PluralFormsToken *)0x0))
      goto code_?;
      if (((pPVar2->fields).type == 7) &&
         (bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0),
         bVar3 != 0)) {
        pPVar1 = (this->fields).scanner;
        if ((pPVar1 == (PluralFormsScanner *)0x0) ||
           (pPVar2 = (pPVar1->fields).token, pPVar2 == (PluralFormsToken *)0x0))
        goto code_?;
        if ((pPVar2->fields).type == 2) {
          iVar4 = (pPVar2->fields).number;
          bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pPVar1 = (this->fields).scanner;
            if ((pPVar1 != (PluralFormsScanner *)0x0) &&
               (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
              if ((pPVar2->fields).type != 0x12) {
                return 0;
              }
              bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return 0;
              }
              pPVar1 = (this->fields).scanner;
              if ((pPVar1 != (PluralFormsScanner *)0x0) &&
                 (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                if ((pPVar2->fields).type != 4) {
                  return 0;
                }
                bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  return 0;
                }
                pPVar1 = (this->fields).scanner;
                if ((pPVar1 != (PluralFormsScanner *)0x0) &&
                   (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                  if ((pPVar2->fields).type != 7) {
                    return 0;
                  }
                  bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0)
                  ;
                  if (bVar3 == 0) {
                    return 0;
                  }
                  pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
                  if (pPVar5 == (PluralFormsNode *)0x0) {
                    return 0;
                  }
                  pPVar1 = (this->fields).scanner;
                  if ((pPVar1 != (PluralFormsScanner *)0x0) &&
                     (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                    if ((pPVar2->fields).type != 0x12) {
                      return 0;
                    }
                    bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken
                                      (pPVar1,(MethodInfo *)0x0);
                    if (bVar3 == 0) {
                      return 0;
                    }
                    pPVar1 = (this->fields).scanner;
                    if ((pPVar1 != (PluralFormsScanner *)0x0) &&
                       (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                      if ((pPVar2->fields).type != 1) {
                        return 0;
                      }
                      if (calculator != (PluralFormsCalculator *)0x0) {
                        bVar6 = iRam_? != 0;
                        (calculator->fields).nplurals = iVar4;
                        (calculator->fields).plural = pPVar5;
                        if (bVar6) {
                          uVar7 = (uint)((ulonglong)&(calculator->fields).plural >> 0xc);
                          puVar8 = (ulonglong *)
                                   ((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                          do {
                            uVar9 = *puVar8;
                            LOCK();
                            uVar10 = *puVar8;
                            if (uVar9 == uVar10) {
                              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
                            }
                            UNLOCK();
                          } while (uVar9 != uVar10);
                        }
                        return 1;
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
        }
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar3 = (*pcVar11)();
  return bVar3;
}


/* PluralFormsNode ParsePlural() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_ParsePlural
          (PluralFormsParser *this,MethodInfo *method)

{
  pPVar1 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
  if (pPVar1 != (PluralFormsNode *)0x0) {
    pPVar2 = (this->fields).scanner;
    if ((pPVar2 == (PluralFormsScanner *)0x0) ||
       (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      pPVar1 = (PluralFormsNode *)(*pcVar4)();
      return pPVar1;
    }
    if ((pPVar3->fields).type == 0x12) {
      return pPVar1;
    }
  }
  return (PluralFormsNode *)0x0;
}


/* PluralFormsNode PmExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_PmExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).scanner;
  if ((pPVar1 != (PluralFormsScanner *)0x0) &&
     (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
    if (((pPVar2->fields).type == 3) || ((pPVar2->fields).type == 2)) {
      if (pPVar1 != (PluralFormsScanner *)0x0) {
        pPVar2 = (pPVar1->fields).token;
        token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
        if (pPVar2 != (PluralFormsToken *)0x0) {
          (token->fields).type = (pPVar2->fields).type;
          (token->fields).number = (pPVar2->fields).number;
          pPVar3 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
          PluralFormsNode::PluralFormsNode__ctor(pPVar3,token,(MethodInfo *)0x0);
          pPVar1 = (this->fields).scanner;
          if (pPVar1 != (PluralFormsScanner *)0x0) goto code_?;
        }
      }
    }
    else {
      if ((pPVar2->fields).type != 0x13) {
        return (PluralFormsNode *)0x0;
      }
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar3 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
      if (pPVar3 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar1 = (this->fields).scanner;
      if ((pPVar1 != (PluralFormsScanner *)0x0) &&
         (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
        if ((pPVar2->fields).type != 0x14) {
          return (PluralFormsNode *)0x0;
        }
        pPVar1 = (this->fields).scanner;
code_?:
        bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return (PluralFormsNode *)0x0;
        }
        return pPVar3;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pPVar3 = (PluralFormsNode *)(*pcVar5)();
  return pPVar3;
}


/* PluralFormsNode RelationalExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_RelationalExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 != (PluralFormsScanner *)0x0) &&
     (pPVar3 = (pPVar2->fields).token, pPVar3 != (PluralFormsToken *)0x0)) {
    if (((pPVar3->fields).type != 8) &&
       ((((pPVar3->fields).type != 10 && ((pPVar3->fields).type != 9)) &&
        ((pPVar3->fields).type != 0xb)))) {
      return pPVar1;
    }
    pPVar3 = (pPVar2->fields).token;
    token = (PluralFormsToken *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsToken);
    (token->fields).type = (pPVar3->fields).type;
    (token->fields).number = (pPVar3->fields).number;
    this_00 = (PluralFormsNode *)FUN_?(TypeInfo__GNU__Gettext__PluralFormsNode);
    PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
    pPVar2 = (this->fields).scanner;
    if (pPVar2 != (PluralFormsScanner *)0x0) {
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (PluralFormsNode *)0x0;
      }
      pPVar5 = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0);
      if (pPVar5 == (PluralFormsNode *)0x0) {
        return (PluralFormsNode *)0x0;
      }
      if ((this_00 != (PluralFormsNode *)0x0) &&
         (pPVar6 = (this_00->fields).nodes, pPVar6 != (PluralFormsNode__Array *)0x0)) {
        lVar7 = FUN_?(pPVar5,(pPVar6->klass->_0).element_class);
        if (lVar7 == 0) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar9 = (code *)swi(3);
          pPVar1 = (PluralFormsNode *)(*pcVar9)();
          return pPVar1;
        }
        FUN_?(pPVar6,1,pPVar5);
        pPVar6 = (this_00->fields).nodes;
        if (pPVar6 != (PluralFormsNode__Array *)0x0) {
          lVar7 = FUN_?(pPVar1,(pPVar6->klass->_0).element_class);
          if (lVar7 == 0) {
            uVar8 = FUN_?();
            FUN_?(uVar8,0);
            pcVar9 = (code *)swi(3);
            pPVar1 = (PluralFormsNode *)(*pcVar9)();
            return pPVar1;
          }
          FUN_?(pPVar6,0,pPVar1);
          return this_00;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}


/* PluralFormsToken get_Token() */

PluralFormsToken *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_get_Token
          (PluralFormsParser *this,MethodInfo *method)

{
  pPVar1 = (this->fields).scanner;
  if (pPVar1 != (PluralFormsScanner *)0x0) {
    return (pPVar1->fields).token;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (PluralFormsToken *)(*pcVar2)();
  return pPVar3;
}

