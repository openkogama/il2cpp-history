
/* PluralFormsNode EqualityExpression() */

PluralFormsNode *
Assembly-CSharp.dll::GNU::Gettext::PluralFormsParser::PluralFormsParser_EqualityExpression
          (PluralFormsParser *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if (((pPVar3->fields).type != 6) &&
     ((((((this->fields).scanner)->fields).token)->fields).type != 0xd)) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar5 = PluralFormsParser_RelationalExpression(this,(MethodInfo *)0x0);
  if (pPVar5 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  if ((this_00 == (PluralFormsNode *)0x0) ||
     (pPVar6 = (this_00->fields).nodes, pPVar6 == (PluralFormsNode__Array *)0x0))
  goto code_?;
  iVar7 = func_?(pPVar5,(pPVar6->klass->_0).element_class);
  if (iVar7 == 0) {
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  else if (1 < pPVar6->max_length) {
    pPVar6->vector[1] = pPVar5;
    func_?(pPVar6->vector + 1,pPVar5);
    pPVar6 = (this_00->fields).nodes;
    if (pPVar6 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar7 = func_?(pPVar1,(pPVar6->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pPVar6->max_length != 0) {
      pPVar6->vector[0] = pPVar1;
      func_?(pPVar6->vector,pPVar1);
      return this_00;
    }
  }
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if ((pPVar3->fields).type != 0x10) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
  if (pPVar5 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  if ((this_00 == (PluralFormsNode *)0x0) ||
     (pPVar6 = (this_00->fields).nodes, pPVar6 == (PluralFormsNode__Array *)0x0))
  goto code_?;
  iVar7 = func_?(pPVar5,(pPVar6->klass->_0).element_class);
  if (iVar7 == 0) {
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  else if (1 < pPVar6->max_length) {
    pPVar6->vector[1] = pPVar5;
    func_?(pPVar6->vector + 1,pPVar5);
    pPVar2 = (this->fields).scanner;
    if ((pPVar2 == (PluralFormsScanner *)0x0) ||
       (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
    if ((pPVar3->fields).type != 0x11) {
      return (PluralFormsNode *)0x0;
    }
    bVar4 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return (PluralFormsNode *)0x0;
    }
    pPVar5 = PluralFormsParser_Expression(this,(MethodInfo *)0x0);
    if (pPVar5 == (PluralFormsNode *)0x0) {
      return (PluralFormsNode *)0x0;
    }
    pPVar6 = (this_00->fields).nodes;
    if (pPVar6 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar7 = func_?(pPVar5,(pPVar6->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (2 < pPVar6->max_length) {
      pPVar6->vector[2] = pPVar5;
      func_?(pPVar6->vector + 2,pPVar5);
      pPVar6 = (this_00->fields).nodes;
      if (pPVar6 == (PluralFormsNode__Array *)0x0) goto code_?;
      iVar7 = func_?(pPVar1,(pPVar6->klass->_0).element_class);
      if (iVar7 == 0) goto code_?;
      if (pPVar6->max_length != 0) {
        pPVar6->vector[0] = pPVar1;
        func_?(pPVar6->vector,pPVar1);
        return this_00;
      }
    }
  }
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_EqualityExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if ((pPVar3->fields).type != 0xe) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  this_01 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0);
  if (this_01 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar3 = (this_01->fields).token;
  if ((pPVar3 == (PluralFormsToken *)0x0) || (this_00 == (PluralFormsNode *)0x0))
  goto code_?;
  pPVar5 = (this_00->fields).nodes;
  if ((pPVar3->fields).type == 0xe) {
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class);
    if (iVar6 == 0) goto code_?;
    if (pPVar5->max_length == 0) goto code_?;
    pPVar5->vector[0] = pPVar1;
    func_?(pPVar5->vector,pPVar1);
    pPVar1 = PluralFormsNode::PluralFormsNode_ReleaseNode(this_01,0,(MethodInfo *)0x0);
    pPVar5 = (this_00->fields).nodes;
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    if ((pPVar1 != (PluralFormsNode *)0x0) &&
       (iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (1 < pPVar5->max_length) {
      pPVar5->vector[1] = pPVar1;
      func_?(pPVar5->vector + 1,pPVar1);
      pPVar5 = (this_01->fields).nodes;
      if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
      iVar6 = func_?(this_00,(pPVar5->klass->_0).element_class);
      if (iVar6 != 0) {
        if (pPVar5->max_length != 0) {
          pPVar5->vector[0] = this_00;
          func_?(pPVar5->vector,this_00);
          return this_01;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class);
    if (iVar6 != 0) {
      if (pPVar5->max_length != 0) {
        pPVar5->vector[0] = pPVar1;
        func_?(pPVar5->vector,pPVar1);
        pPVar5 = (this_00->fields).nodes;
        if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
        iVar6 = func_?(this_01,(pPVar5->klass->_0).element_class);
        if (iVar6 == 0) goto code_?;
        if (1 < pPVar5->max_length) {
          pPVar5->vector[1] = this_01;
          func_?(pPVar5->vector + 1,this_01);
          return this_00;
        }
      }
      goto code_?;
    }
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
  }
code_?:
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_LogicalAndExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if ((pPVar3->fields).type != 0xf) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  this_01 = PluralFormsParser_LogicalOrExpression(this,(MethodInfo *)0x0);
  if (this_01 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar3 = (this_01->fields).token;
  if ((pPVar3 == (PluralFormsToken *)0x0) || (this_00 == (PluralFormsNode *)0x0))
  goto code_?;
  pPVar5 = (this_00->fields).nodes;
  if ((pPVar3->fields).type == 0xf) {
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class);
    if (iVar6 == 0) goto code_?;
    if (pPVar5->max_length == 0) goto code_?;
    pPVar5->vector[0] = pPVar1;
    func_?(pPVar5->vector,pPVar1);
    pPVar1 = PluralFormsNode::PluralFormsNode_ReleaseNode(this_01,0,(MethodInfo *)0x0);
    pPVar5 = (this_00->fields).nodes;
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    if ((pPVar1 != (PluralFormsNode *)0x0) &&
       (iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class), iVar6 == 0))
    goto code_?;
    if (1 < pPVar5->max_length) {
      pPVar5->vector[1] = pPVar1;
      func_?(pPVar5->vector + 1,pPVar1);
      pPVar5 = (this_01->fields).nodes;
      if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
      iVar6 = func_?(this_00,(pPVar5->klass->_0).element_class);
      if (iVar6 != 0) {
        if (pPVar5->max_length != 0) {
          pPVar5->vector[0] = this_00;
          func_?(pPVar5->vector,this_00);
          return this_01;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar6 = func_?(pPVar1,(pPVar5->klass->_0).element_class);
    if (iVar6 != 0) {
      if (pPVar5->max_length != 0) {
        pPVar5->vector[0] = pPVar1;
        func_?(pPVar5->vector,pPVar1);
        pPVar5 = (this_00->fields).nodes;
        if (pPVar5 == (PluralFormsNode__Array *)0x0) goto code_?;
        iVar6 = func_?(this_01,(pPVar5->klass->_0).element_class);
        if (iVar6 == 0) goto code_?;
        if (1 < pPVar5->max_length) {
          pPVar5->vector[1] = this_01;
          func_?(pPVar5->vector + 1,this_01);
          return this_00;
        }
      }
      goto code_?;
    }
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
code_?:
    uVar7 = func_?(0);
    func_?(uVar7);
  }
code_?:
  func_?();
code_?:
  func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if ((pPVar3->fields).type != 0xc) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar5 = PluralFormsParser_PmExpression(this,(MethodInfo *)0x0);
  if (pPVar5 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  if ((this_00 == (PluralFormsNode *)0x0) ||
     (pPVar6 = (this_00->fields).nodes, pPVar6 == (PluralFormsNode__Array *)0x0))
  goto code_?;
  iVar7 = func_?(pPVar5,(pPVar6->klass->_0).element_class);
  if (iVar7 == 0) {
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  else if (1 < pPVar6->max_length) {
    pPVar6->vector[1] = pPVar5;
    func_?(pPVar6->vector + 1,pPVar5);
    pPVar6 = (this_00->fields).nodes;
    if (pPVar6 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar7 = func_?(pPVar1,(pPVar6->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pPVar6->max_length != 0) {
      pPVar6->vector[0] = pPVar1;
      func_?(pPVar6->vector,pPVar1);
      return this_00;
    }
  }
  func_?();
code_?:
  func_?();
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
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
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
         (bVar3 = PluralFormsScanner::PluralFormsScanner_NextToken
                            ((this->fields).scanner,(MethodInfo *)0x0), bVar3 != 0)) {
        pPVar1 = (this->fields).scanner;
        if ((pPVar1 == (PluralFormsScanner *)0x0) ||
           (pPVar2 = (pPVar1->fields).token, pPVar2 == (PluralFormsToken *)0x0))
        goto code_?;
        if ((pPVar2->fields).type == 2) {
          pPVar1 = (PluralFormsScanner *)(((((this->fields).scanner)->fields).token)->fields).number
          ;
          bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pPVar4 = (this->fields).scanner;
            if ((pPVar4 != (PluralFormsScanner *)0x0) &&
               (pPVar2 = (pPVar4->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
              if ((pPVar2->fields).type != 0x12) {
                return 0;
              }
              bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return 0;
              }
              pPVar4 = (this->fields).scanner;
              if ((pPVar4 != (PluralFormsScanner *)0x0) &&
                 (pPVar2 = (pPVar4->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                if ((pPVar2->fields).type != 4) {
                  return 0;
                }
                bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  return 0;
                }
                pPVar4 = (this->fields).scanner;
                if ((pPVar4 != (PluralFormsScanner *)0x0) &&
                   (pPVar2 = (pPVar4->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                  if ((pPVar2->fields).type != 7) {
                    return 0;
                  }
                  bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    return 0;
                  }
                  pPStack5 =
                       (PluralFormsParser__Class *)
                       PluralFormsParser_Expression(this,(MethodInfo *)0x0);
                  if (pPStack5 == (PluralFormsParser__Class *)0x0) {
                    return 0;
                  }
                  pPVar4 = (this->fields).scanner;
                  if ((pPVar4 != (PluralFormsScanner *)0x0) &&
                     (pPVar2 = (pPVar4->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                    if ((pPVar2->fields).type != 0x12) {
                      return 0;
                    }
                    bVar3 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
                    if (bVar3 == 0) {
                      return 0;
                    }
                    pPVar4 = (this->fields).scanner;
                    if ((pPVar4 != (PluralFormsScanner *)0x0) &&
                       (pPVar2 = (pPVar4->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
                      if ((pPVar2->fields).type != 1) {
                        return 0;
                      }
                      if (this != (PluralFormsParser *)0x0) {
                        (this->fields).scanner = pPVar1;
                        this[1].klass = pPStack5;
                        pPStack6 = this + 1;
                        func_?();
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
  func_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
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
      func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).scanner;
  if ((pPVar1 != (PluralFormsScanner *)0x0) &&
     (pPVar2 = (pPVar1->fields).token, pPVar2 != (PluralFormsToken *)0x0)) {
    if (((pPVar2->fields).type == 3) ||
       ((((((this->fields).scanner)->fields).token)->fields).type == 2)) {
      pPVar1 = (this->fields).scanner;
      if (pPVar1 != (PluralFormsScanner *)0x0) {
        pPVar2 = (pPVar1->fields).token;
        token = (PluralFormsToken *)func_?(TypeInfo__GNU__Gettext__PluralFormsToken);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)token,ExceptionArgument__Enum_obj,unaff_ESI);
        if (pPVar2 != (PluralFormsToken *)0x0) {
          (token->fields).type = (pPVar2->fields).type;
          (token->fields).number = (pPVar2->fields).number;
          pPVar3 = (PluralFormsNode *)func_?();
          PluralFormsNode::PluralFormsNode__ctor(pPVar3,token,(MethodInfo *)0x0);
          pPVar1 = (this->fields).scanner;
          if (pPVar1 != (PluralFormsScanner *)0x0) {
            bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar1,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
    else {
      if ((((((this->fields).scanner)->fields).token)->fields).type != 0x13) {
        return (PluralFormsNode *)0x0;
      }
      bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken
                        ((this->fields).scanner,(MethodInfo *)0x0);
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
        bVar4 = PluralFormsParser_NextToken(this,(MethodInfo *)0x0);
code_?:
        if (bVar4 == 0) {
          return (PluralFormsNode *)0x0;
        }
        return pPVar3;
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode);
    func_?(&TypeInfo__GNU__Gettext__PluralFormsToken);
    cRam_? = '\x01';
  }
  pPVar1 = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0);
  if (pPVar1 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar2 = (this->fields).scanner;
  if ((pPVar2 == (PluralFormsScanner *)0x0) ||
     (pPVar3 = (pPVar2->fields).token, pPVar3 == (PluralFormsToken *)0x0)) goto code_?;
  if (((pPVar3->fields).type != 8) &&
     ((((((((this->fields).scanner)->fields).token)->fields).type != 10 &&
       ((((((this->fields).scanner)->fields).token)->fields).type != 9)) &&
      ((((((this->fields).scanner)->fields).token)->fields).type != 0xb)))) {
    return pPVar1;
  }
  pPVar3 = (((this->fields).scanner)->fields).token;
  method_00 = TypeInfo__GNU__Gettext__PluralFormsToken;
  token = (PluralFormsToken *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)token,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (token->fields).type = (pPVar3->fields).type;
  (token->fields).number = (pPVar3->fields).number;
  this_00 = (PluralFormsNode *)func_?(TypeInfo__GNU__Gettext__PluralFormsNode);
  PluralFormsNode::PluralFormsNode__ctor(this_00,token,(MethodInfo *)0x0);
  pPVar2 = (this->fields).scanner;
  if (pPVar2 == (PluralFormsScanner *)0x0) goto code_?;
  bVar4 = PluralFormsScanner::PluralFormsScanner_NextToken(pPVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return (PluralFormsNode *)0x0;
  }
  pPVar5 = PluralFormsParser_MultiplicativeExpression(this,(MethodInfo *)0x0);
  if (pPVar5 == (PluralFormsNode *)0x0) {
    return (PluralFormsNode *)0x0;
  }
  if ((this_00 == (PluralFormsNode *)0x0) ||
     (pPVar6 = (this_00->fields).nodes, pPVar6 == (PluralFormsNode__Array *)0x0))
  goto code_?;
  iVar7 = func_?(pPVar5,(pPVar6->klass->_0).element_class);
  if (iVar7 == 0) {
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  else if (1 < pPVar6->max_length) {
    pPVar6->vector[1] = pPVar5;
    func_?(pPVar6->vector + 1,pPVar5);
    pPVar6 = (this_00->fields).nodes;
    if (pPVar6 == (PluralFormsNode__Array *)0x0) goto code_?;
    iVar7 = func_?(pPVar1,(pPVar6->klass->_0).element_class);
    if (iVar7 == 0) goto code_?;
    if (pPVar6->max_length != 0) {
      pPVar6->vector[0] = pPVar1;
      func_?(pPVar6->vector,pPVar1);
      return this_00;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pPVar1 = (PluralFormsNode *)(*pcVar9)();
  return pPVar1;
}

